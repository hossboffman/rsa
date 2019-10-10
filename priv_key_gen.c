/*this is a program that creates the private key, consisting of a modulus n having two distinct
 *large prime divisors and the private residue d which is coprime to the totient of n
 ******************************************************************************************
 *algorithm outline: find three distinct large primes, set d as the largest of them, and set n as the product of the
 *other two. this way, d is coprime to the totient of n.*/
 
#include<stdio.h>
#include<gmp.h>

int main(void)
{
  mpz_t d, p, q, e;             /*to become key pair*/
  mpz_t n;                /*to be used in range for random number generation*/
  gmp_randstate_t state;  
  
  mpz_inits(d, e);
  mpz_init_set_str(n, "1000", 10); 
 
  gmp_randinit_mt (state);
 
  
