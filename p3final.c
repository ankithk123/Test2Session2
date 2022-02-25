#include<stdio.h>
int input_number()
{
  int n;
  printf("enter the number:");
  scanf(""%d",&n);
 return n;
  
}
int is_prime(int n)
{
  int prime=0;
  for(int i=2;i<=n/2;i++)
    {
if(n%i==0)
{
  prime=1;
  break;
}
  }
  return prime;
}
void output9int n,int prime)
  {
    if(n == 0 || n == 1)
    {
      printf("it is neither prime nor composite\n");
    }
    else if(prime==0)
    {
      printf("%d is a prime number\n",n);
    }
    else
    {
      printf("%d id a composite number\n",n);
    }
  }
int main()
{
  int n,prime=0;
  n= input_number();
  prime =is_prime();
  output(n,prime);
  return 0;
}

