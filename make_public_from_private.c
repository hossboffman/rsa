#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int x[100], k[100], a[100], b[100];
	int p, q, d;
	printf("Enter two primes: ");
	scanf("%d", &p);
	scanf("%d", &q);
	x[0]=(p-1)*(q-1);
	int phin=x[0];
	printf("Enter d: ");
	scanf("%d", &d);
	x[1]=d;
	
	int i=1;
	while(x[i]!=0)
	{
		x[i+1] = x[i-1] % x[i];
		k[i+1] = x[i-1] / x[i];
		i++;
	}
	
	i=2;
	a[1]=0;
	a[2]=1;
	b[1]=1;
	b[2]=-1 * k[2];
	
	while(a[i]*phin + b[i]*d != 1)
	{
		a[i+1]=a[i-1] - k[i+1]*a[i];
		b[i+1]=b[i-1] - k[i+1]*b[i];
		i++;
	}
	int e = b[i];
	while(e<0)
		e+=phin;
	printf("The test: %d\n", (e*d)%phin);
	return 0;
}
