#include<stdio.h>

//Program 1
void isEven(int n)
{
    if(n%2)
    printf("Odd");
    else
    printf("Even");
}

//Program 2
int factorial(int n)
{
    int fact=1;
    while(n)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}

//Program 3
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//Program 4
int lcm(int a,int b)
{
    int lcm,i;
    lcm=a>b?a:b;
    for(i=lcm;i<a*b;i++)
    {
        if(lcm%a==0&&lcm%b==0)
        return lcm;
    }
}

//Program 5
int isPrime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2)
    return 1;//Prime
    else 
    return 0;//Not
}

int main()
{
    // isEven(4);

    // printf("%d",factorial(5));

    // printf("%d",lcm(8,4));
    
    printf("%d",isPrime(2));
}