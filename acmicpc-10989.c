#include <stdio.h>

#define C_MAX 10000

int N;
int cnt[C_MAX + 2];


int main(int argc, const char * argv[]) {
    
    scanf("%d", &N);

    for(int i=0; i<=C_MAX+1; i++) cnt[i] = 0;

    for (int i = 0; i < N; i++)
    {
        int input;
        scanf("%d", &input);
        cnt[input]++;
        
    }
    
    for(int i=1; i<=C_MAX; i++)
    {
        if(cnt[i] == 0)continue;
        int c = cnt[i];
        for(int j=0; j<c; j++)
        {
            printf("%d\n",i);
        }
        
    }
    return 0;
}
