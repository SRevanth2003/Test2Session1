#include<stdio.h>
int input_side()
{
  int side;
  printf("Enter the Side of the Triangle: ");
  scanf("%d",&side);
  return side;
}
int check_scalene(int a, int b, int c)
{
  int isscalene;
  if( a!=b && b!=c && c!=a)
  {
    return isscalene;
  }
  
}
void output(int a, int b, int c, int isscalene)
{
  if( a!=b && b!=c && c!=a)
  {
  printf("The Triangle is Scalene \n ");
  }
  else
  {
    printf("The Triangle is Not a Scalene Triangle");
  }
}
int main()
{
  int side1,side2,side3,scalene;
  side1=input_side();
  side2=input_side();
  side3=input_side();
  scalene=check_scalene(side1,side2,side3);
  output(side1,side2,side3,scalene);
  return 0;
}