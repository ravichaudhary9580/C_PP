#include<iostream>
using namespace std;

//Program 1
void average()
{
    int a,b,c;
    cout<<"Enter three number:";
    cin>>a>>b>>c;
    cout<<(a+b+c)/3.0;
}

//Program 2
void square()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Square is: "<<a*a;
}

//Program 3
void swap()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap:"<<a<<" "<<b;
}

//Program 4
void greatest()
{
    int a,b,max;
    cout<<"Enter two number:";
    cin>>a>>b;
    max=a>b?a:b;
    cout<<"Greatest is: "<<max;
}

//Program 5
void sum()
{
    int arr[10],i,sum=0;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is: "<<sum;
}