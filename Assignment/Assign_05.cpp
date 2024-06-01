#include<iostream>
using namespace std;
int add(int a,int b,int c=0);

//Program 1
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//Program 2
int add(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    return sum;
}

//Program 3
float area(float r)
{
    return 3.14*r*r;
}

float area(float l,float b)
{
    return l*b;
}
float area(float a,float b,float c)
{
    int s;
    s=(a+b+c)/2;
    return sqrt(s(s-a)(s-b)(s-c));
}

//Program 4
int max(int a,int b)
{
    return a>b?a:b;
}

float max(float a,float b)
{
    return a>b?a:b;
}

//Program 5
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
double add(double a,double b)
{
    return a+b;
}
