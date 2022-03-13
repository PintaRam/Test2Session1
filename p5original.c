#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
  
}
void erotosthenes_sieve(int n, int a[n])
{ 
  for(int i = 2; i*i <= n; i++)
	{
		if(a[i] !=-1)
		{
			//Mark all the multiples of i as -1.
			for(int j = i*i; j <=n ; j += i)
				a[j] = -1;
		}
	}
}
void out_put(int n, int a[n])
{
  printf("Prime numbers are: \n");
	for(int i=2; i <= n; i++)
	{
		if(a[i] !=-1)
		{
			printf("%d ", i);
		}
	}
}
int main()
{
  int n;
  n= input_array_size();
  int a[n];
  init_array( n, a);
  erotosthenes_sieve(n, a);
   out_put(n, a);
   return 0;
}