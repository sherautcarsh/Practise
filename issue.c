#include <stdio.h>
int prime(int a);

int main() {
	// your code here
	int t;
	scanf("%d", &t);
	if(t>10)
	{
		return 0;
	}
	int m[t],n[t];
	for(int i=0; i<t ;i++)
	{
		scanf("%d %d", &m[i], &n[i]);
	}
	for(int i=0; i<t ;i++)
	{
		if(m[i]>=1 && n[i]>=m[i] && n[i] <= 1000000000 && n[i]-m[i]<=100000)
		{
	    	for(int k = m[i]; k<= n[i];  k++)
	        	{
	        		 if(prime(k)== k-2)
	        		 {
	        		 	printf("%d\n", k);
	        		 }
	        	}
        	printf("\n");
		}
	}
	return 0;
}

int prime(int a)
{
    int b;
	int count=0;
	for (b=2;b<a;b++)
	{
		if(a%b!=0)
		{
			count++;
		}
	}
	return count;
}
