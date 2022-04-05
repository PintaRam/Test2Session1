//program find whether a given number is a prime number.
#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("enter the value of n\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{ int i;
  for(i=2;i<n;i++)
  {
  if(n%i==0)
  return 1;
 }
  return 0;
    
}
void output(int n, int isprime)
{ if(n == 0 || n == 1)
{
  printf("%d is neither a composite number nor a prime number",n);
} 
 else if(isprime==1)
   { 
    printf("%d is not a prime numeber\n",n);
    }
    else
   {
    
     printf("%d is  a prime number\n",n);
    }
}
int main()
{
  int n , isprime;
 n= input_number();
 isprime= is_prime(n);
  output(n,isprime);
  return 0;
}