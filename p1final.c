#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1, float *x2, float *y2)
{
  printf("enter the x1 coordinate :");
  scanf("%f",x1);
  printf("enter the y1 coordinate:");
  scanf("%f",y1);
  printf("enter the x2 corodinate:");
  scanf("%f",x2);
  printf("enter the x2 corodinate:");
  scanf("%f",y2);
  
  
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  area=sqrt(((x2-x1)(x2-x1))p1finals+((y2-y1)*(y2-y1)));
  
}
void output(float x1,float y1,float x2,float y2,float area )

{
  printf("the difference between the two points is %0.3f",area);
}
int main()
{
  float x1,y1,x2,y2,area;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&area);
  output(x1,y1,x2,y2,area);
  return 0;
}