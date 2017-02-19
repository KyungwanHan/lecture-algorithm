#include <stdio.h>

#define N_MAX 1000000
#define SWAP(x,y) {int t=x; x=y; y=t;}

int N;
int Input[N_MAX+1];

int partition(int left, int right)
{
    int pivot = left;
    int i=left+1; int j=right;
    
    while(1)
    {
        while(Input[i] <= Input[pivot] && i<right) i++;
        while(Input[j] > Input[pivot]) j--;
        
        if(i>=j) break;
        SWAP(Input[i], Input[j]);
    }
    SWAP(Input[pivot], Input[j]);
    
    return j;
}

void sort(int left, int right)
{
    if(left < right)
    {
        int pivot = partition(left, right);
        sort(left, pivot-1);
        sort(pivot+1, right);
    }
}
int main(int argc, const char * argv[]) {

    scanf("%d", &N);
    for(int i=0; i<N; i++) scanf("%d", &Input[i]);
    sort(0, N-1);
    for(int i=0; i<N; i++) printf("%d\n", Input[i]);
    return 0;
}
