//program to find whether the three points form a triangle.
#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("enter the first point\n");
  scanf("%f%f",x1,y1);
   printf("enter the second point\n");
  scanf("%f%f",x2,y2); 
  printf("enter the third point\n");
  scanf("%f%f",x3,y3);
  
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{ int result;
  int r1, r2, r3;
  r1 = x1*(y2-y3);
  r2 = y1*(x2-x3);
  r3 = x3*y3-y2*x3;
return (result = r1-r2+r3);
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)
{
  if(istriangle!=0)
    printf("(%f,%f),(%f,%f) & (%f,%f)  form a triangle",x1,y1,x2,y2,x3,y3);
  else
     printf("(%f,%f),(%f,%f) & (%f,%f)  do not form a triangle",x1,y1,x2,y2,x3,y3);
    
}
int main()
{
float x1, x2,y1,y2,x3,y3;
int istriangle;
input_triangle( &x1,  &y1,  &x2,  &y2, &x3,  &y3);
istriangle = is_triangle( x1,  y1,  x2,  y2, x3,  y3);
output( x1,  y1,  x2,  y2, x3,  y3,istriangle);
  return 0;
  }

  

