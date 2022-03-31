#include <stdio.h>
#include <math.h>
void input(float* x1, float* y1, float* x2, float* y2)
{
    printf("Enter the x Coordinate of First Point: ");
    scanf("%f",x1);
  printf("Enter the y Coordinate of First Point: ");
    scanf("%f",y1);
  printf("Enter the x Coordinate of Second Point: ");
    scanf("%f",x2);
  printf("Enter the y Coordinate of Second Point: ");
    scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float distance;
  distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between (%f,%f) and (%f, %f) is %f \n",x1, y1, x2, y2, distance);
}
int main()
{
    float x1, y1, x2, y2, dist;
    input(&x1, &y1, &x2, &y2);
    dist = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, dist);
    return 0;
}
