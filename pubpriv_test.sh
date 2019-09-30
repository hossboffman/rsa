#!/bin/bash

#pick p_0, a pseudo-random integer from 0 to 998
#pick q_0, a pseudo-random integer from p_0+1 to 999
#pick d_0, a pseudo-random integer from q_0+1 to 1000

#set p as the p_0th prime
#set q as the q_0th prime
#set d as the d_0th prime

#while(-)
#	print p, q, d
#	pubpriv p, q, d


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
#			j=-1;
#	array[k] = i;
#	i++;
#	k++;

declare -a primes
primes[0]=2
p_0=$(($RANDOM % 999))
q_0=$(($RANDOM % 999))
while [ $p_0 -eq $q_0 ]
do q_0=$(($RANDOM % 999))
done
if [ $p_0 -gt $q_0 ]; then
	r=$p_0
else
	r=$q_0
fi
m=$[1000 - $r]
L=$(($RANDOM % $m))
d_0=$[$L+$r]

i=3
j=0
k=1
while [ $k -lt 1000 ]; do
	for ((j=0; j<k; j++)); do
		if [ $[$i % primes[j]] -eq 0 ]; then
			i=$[$i + 1]
			j=-1
		fi
		done
primes[k]=$i
i=$[$i + 1]
k=$[$k + 1]
done

echo ${primes[999]}
echo ${primes[6]}
echo ${primes[5]}
echo ${primes[1000]}
