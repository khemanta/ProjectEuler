
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>
#include <math.h>


int N=1000.0 ; 
int a=3, b=5 ;

int main(){

	int i=1 ;
	int sum=0, count=0 ;
     
	for(i=0; i< N ; i++)
	{
		if(i % a == 0 || i %b  == 0) {
		printf("%i\n", i);	
		sum = sum + i ;
	 	count++ ;
	}
}
	printf("\n Sum of multiples = %d\n" "and total numer of multiples = %d \n", sum, count);		 
}
