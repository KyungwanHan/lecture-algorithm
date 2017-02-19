#include <stdio.h>

#define N_MAX 1000
#define SWAP(x, y) { int t = x; x = y; y = t;}

int N;
int Input[N_MAX + 1];
int cnt[N_MAX + 2];


void sort()
{
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &Input[i]);

	for (int i = 0; i < N - 1; i++)
	{
		int min_index = i;
		for (int j = i + 1; j < N; j++)
		{
			if (Input[min_index] > Input[j])
				min_index = j;
		}
		SWAP(Input[i], Input[min_index]);
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", Input[i]);
}

int main(int argc, const char * argv[]) {

	sort();
	return 0;
}
