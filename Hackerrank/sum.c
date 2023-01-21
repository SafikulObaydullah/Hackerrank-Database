#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        if(i%2 == 0)
        {
            printf("%d is not prime number\n",i);
        }
        else
        {
            printf("%d is a prime number\n",i);
        }
    }
   return 0;
}
