/*this is the program that from a public key generates a private key using the method detailed in the rsa paper.*/
/*eventually it'll need to use a large number library*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	long int x[100], k[100], a[100], b[100];
	long int p, q, d;
	p=atoi(argv[1]);
	q=atoi(argv[2]);
	d=atoi(argv[3]);
	x[0]=(p-1)*(q-1);
	long int phin=x[0];
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
	
	while(a[i]*phin + b[i]*d != 1)		/*deduced this empirically; made the testing script to make sure it actually works*/
	{
		a[i+1]=a[i-1] - k[i+1]*a[i];
		b[i+1]=b[i-1] - k[i+1]*b[i];
		i++;
	}
	long int e = b[i];
	while(e<0)				/*making the residue positive*/
		e+=phin;			/*be sure to remove the testing part later*/
	printf("The test: %ld\n", (e*d)%phin);  /*just testing; it should print the number 1*/
	return 0;
}
