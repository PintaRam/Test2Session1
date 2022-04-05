#include<stdio.h>
void input_string(char *a)
{
printf("enter the string \n ");
scanf("%s",a);
}

void input_substring(char *b)
{
printf("enter the substring \n ");
scanf("%s",b);
}

int str_index(char *string,char *substring)
{
int i ,a,j=0;
for(i=0; string[i]!='\0' && substring[i]!='\0';i++ )
{
 if(string[i]==substring[j])
 {
  j++;
 }
else if(j!=0)//helloworld ==we want to find orl 2 O's are there so ,
 {
   j=0;
 }
}
if(j!=0)
return i-j;

return -1 ;
}
void output(char *string,char *substring,int index)
{
printf("Index of substring:%s in string:%s is =%d\n", substring, string, index);
}
int main()
{
char s1[40];
char s2[40];
input_string(s1);
input_substring(s2);
int result=str_index(s1,s2);
output(s1,s2, result);
return 0;
}