#include <stdio.h>
int prime(int a);

int main() {
	// your code here
	int t;
	scanf("%d", &t);
	if(t>10)			//checks if given condition is met
	{
		return 0;
	}
	int m[t],n[t];
	for(int i=0; i<t ;i++)
	{
		scanf("%d %d", &m[i], &n[i]);
		if(m[i]>=1 && n[i]>=m[i] && n[i] <= 1000000000 && n[i]-m[i]<=100000) 	// checks if given condition is met
		{
	    	for(int k = m[i]; k<= n[i];  k++)
	        	{
	        		 if(prime(k))
	        		 {
	        		 	printf("%d\n", k);		//prints the prime numbers
	        		 }
	        	}
        	printf("\n");  			//leaves a line after each input
		}
	}
}

int prime(int a)				//checks if the number is prime
{
    int b;
	for (b=2;b< a;b++)
	{
		if(a%b==0)
		{
			return 0;
		}
	}
	return 1;
}
