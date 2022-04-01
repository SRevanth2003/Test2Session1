#include <stdio.h>
int input()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    return num;
}
int find_fibo(int n)
{
    int num1 = 1;
    int num2 = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = num1;
        num1 = num1 + num2;
        num2 = temp;
    }
    return num2;
}

void output(int n, int fibo)
{
  printf("Fibnacci Series upto %d is ",n);
  int i,num1=0,num2=1,temp;
  for(i=1;i<=n;i++)
    {
      printf("%d ",num1);
      temp = num1;
      num1 = num1 + num2;
      num2 = temp;
    }
  printf(" \n Nth term in fibonacci series is %d \n", num2);
}
int main()
{
    int num = input();
    int res = find_fibo(num);
    output(num, res);
    return 0;
  }