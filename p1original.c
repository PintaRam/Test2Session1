//program to find the distance between two points
#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the first point\n");
  scanf("%f%f",x1,y1);
  printf("enter the second point\n");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  float result,a,b,sqrt;
  a = x2-x1;
  b = y2-y1;
  result= (a*a) +(b*b);
  float x = result/2;
  sqrt = 0.5*(x+(result/x));
  while(fabs(x - sqrt)>0.00001)
  {
    x = sqrt;
    sqrt=  0.5*(x+(result/x));
  }
  *area = sqrt;
}
void output(float x1, float y1, float x2, float y2, float area)
{
  printf("distance betweeen point (%f,%f) and (%f,%f)is with %f\n",x1,y1,x2,y2,area);
}
int main()
{
  float x1,x2,y1,y2, area;
  input(&x1, &y1, &x2, &y2);
  find_distance( x1,  y1,  x2,  y2, &area);
  output( x1,  y1,  x2,  y2, area);
  return 0;

}
