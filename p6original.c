#include<stdio.h>
void input_string(char *a)
{ 
  printf("enter the string\n");
    scanf("%s" , a);
}
int str_reverse(char *string, char *substring)
{
 /* int i=0,j=0;
 // for(i = 0;string[i]==substring [i]; i++) 
  while (substring[i]!='\0')
    if(substring[i]==string[j])
    {
      j++;
      i++;
      
    }
  else
  {
    j++;
  }
  return i;*/
   int i, j, a;
   i = 0, j = 0;
 
   while (string[i] != '\0')
     {
 
      while (string[i] != substring[0] && string[i] != '\0')
        {
         i++;
        }
 
      if (string[i] == '\0')
         return (-1);
 
      a = i;
 
      while (string[i] == substring[j] && string[i] != '\0' && substring[j] != '\0')
        {
         i++;
         j++;
        }
 
      if (substring[j] == '\0')
         return (a);
      if (string[i] == '\0')
         return (-1);
 
      i = a + 1;
      j = 0;
   }
}
  
  

void output(char *string, char *substring, int index)
{ 
  if(index!=-1)
        printf("The index of %s in %s is %d\n", substring,string,index+1);
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