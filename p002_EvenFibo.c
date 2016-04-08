#include <stdio.h>
#include <math.h>

#define LIMIT 4000000

int main() 
{
 	int i, n;
 	int evenFibSum = 0 ;
	printf("Enter number to calculate  fibonacci series: ");
	scanf("%d", &n);	

	printf("\n Printing fibonacci series:...\n");

	for(i=0; i<=n && fib(i) < LIMIT ; i++)
	{
		printf("%8d", fib(i));
 		if(fib(i)%2 == 0 && fib(i) <= LIMIT)
 		{
 		 if(fib(i) >= LIMIT || n)	
 		 evenFibSum = evenFibSum + fib(i) ;
		}
	//if(i < n && fib(i) > LIMIT)
	// printf("LIMIT OFFSETS");	 
 	}
printf("\n");
printf("calculating sum of even valued fibonacci numbers...\n");	
printf("\nSum of even numbers of Fibonacci series: %d\n\n", evenFibSum);

}


int	fib(int n){
    if(n==0)
    	return 0;
    else if(n==1)
    	return 1;
    else	 
    	return fib(n-1) + fib(n-2);  
}

