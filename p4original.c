#includ<stdio.h>
int input()
{
  int n;
  printf(" enter the number value of n\n")'
  scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
  int a=0,b=1;
  int fibo = 0;
  while(fibo<0)
    {
      fibo = a+b;
      a=b;
      b=fibo;
   }
  return fibo;

}
void output(int n, int fibo)
{
  printf("fibonacci sequence consists")
}
