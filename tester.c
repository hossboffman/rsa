#include <stdio.h>

int main(void)
{
	int primes[1000];
	primes[0]=2;
	int i=3, k=1, j;
	while(k<1000)
	{
		for(j=0; j<k; j++)
		{
			if(i % primes[j] == 0)
			{
				i++;
				j=-1;
			}
		}
		primes[k]=i;
		i++;
		k++;
	}

	for(k=0; k<1000; k++)
		printf("%d - %d\n", k+1, primes[k]);
	return 0;
}
