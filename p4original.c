// program to find nth number in fibonacci sequence.
#include<stdio.h>
int input()
{
  int n;
  printf(" enter the number value of n\n");
  scanf("%d",&n);
    return n;
}
int find_fibo(int n ) 
{
  int a=0,b=1;
  int sum = 0;
 for(int i=2;i<n;i++)
 //  while(fibo<n)
    {
      sum = a+b;
      a=b;
      b=sum;
   }
  return sum;

}
void output(int n, int fibo)
{// int a = 0,b=1,sum = 1;
  printf("the fibonacci series of %d th digit is %d ",n,fibo);
 /* for(int i =2; i<=n;i++)
    {
      printf("%d,",sum);
       sum = a+b;
        a=b;
      b=sum;
      
    }*/
}
int main()
{
  int n , fibo;
  n=input();
fibo= find_fibo(n);
 output( n , fibo);
  return 0;
  
}
