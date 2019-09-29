#!/bin/bash

#pick p_0, a pseudo-random integer from 0 to 998
#pick q_0, a pseudo-random integer from p_0+1 to 999
#pick d_0, a pseudo-random integer from q_0+1 to 1000

#set p as the p_0th prime
#set q as the q_0th prime
#set d as the d_0th prime

#while(-)
	print p, q, d
	pubpriv p, q, d


#MAKING THE ARRAY OF THE FIRST 1000 PRIMES

#declare array of 1000 ints
#set array[0] as 2
#i: number to be tested or added to array
#j: indexer for numbers below k
#k: position in array from 0 to 999
#set i=3, k=1, j=0
#while(k<1000)
#	for(j=0; j<k; j++)
#		if(i%array[j] == 0)
#			i++;
#			j=0;
#	array[k] = i;
#	i++;
#	k++;
