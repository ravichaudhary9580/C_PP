#include<iostream>
using namespace std;
inline int highest_digit(int n);
inline int is_in_fibbo(int n);

//Program 1

void print_prime_range(int a,int b)
{
    int i,count;
    for(a;a<=b;a++)
    {
        for(i=1,count=0;i<=a;i++)
        {
            if(a%i==0)
            count=count+1;
        }
        if(count==2)
        cout<<a<<" ";
    }
}

//Program 2

int highest_digit(int n)
{
    int max=0,d;
    while(n)
    {
        d=n%10;
        n=n/10;
        max=max>=d?max:d;
    }
    return max;
}

//Program 3

int power(int a,int b)
{
    int val=1;
    while(b)
    {
        val=val*a;
        b--;
    }
    return val;
}


//Program 4

long long int fact(int n)
{
    int i;
    long long int fact=1;
    for(i=1;i<=n;i++)
    {
    fact=fact*i;
    }
    return fact;
}

int combination(int n, int r)
{   int comb;
    comb=fact(n)/(fact(n-r)*fact(r));
    return comb;
}


void printPascal(int lines)
{
     int i,j,space,n,r;
     for(i=1;i<=lines;i++)
     {
        n=i-1;
        r=0;
        for(j=1,space=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                if(space)    
                printf("%d",combination(n,r++));
                else
                printf(" ");
            space=1-space;
            }
            else
            printf(" ");
        }
        printf("\n");
     }
}


//Program 5

int is_in_fibbo(int n)
{
    int a=-1,b=1,c=0;
    while(n>=c)
    {
        c=a+b;
        if(c==n)
        return 1;
        a=b;
        b=c;
    }
    return 0;
}


int main()
{
    // print_prime_range(2,20);
    // cout<<highest_digit(4329630);
    // cout<<power(2,3);
    /* int x;
    cout<<"Enter a Number:";
    cin>>x;
    if(is_in_fibbo(x))
    cout<<"Yes in fibbo series";
    else
    cout<<"Not in fibbo series"; */

    printPascal(10);
    return 0;
}