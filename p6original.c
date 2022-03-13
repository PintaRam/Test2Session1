#include<stdio.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s" , a);
}
int str_reverse(char *string, char *substring)
{
  int i=0;
  while (string[i]=substring[i])
    {
      i++;
    }
  
  
  return i;
  
}
void output(char*string, char*substring, int index)
{
  if(index!=0)
        printf("The index of %s in %s is %d\n", substring,string,index);
  else 
    printf("index does not found");
  }
int main()
{
  char string[1000];
  char substring[100];
  input_string(string);
  input_string(substring);
  int index= str_reverse(string, substring);
  output(string, substring, index);
  return 0;
}