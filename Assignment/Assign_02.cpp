#include<iostream>
using namespace std;

//Program 1
void f1()
{
    cout<<"Hello MySirG";
}

//Program 2
void f2()
{
    cout<<"Hello"<<endl<<"MySirG";
}

void f3()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"Sum is "<<a+b;
}

//Program 4
void f4()
{
    float r;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"Area is "<<3.14*r*r;
}

//Program 5
void f5()
{
    int l,b,h;
    cout<<"Enter the length, breadth and height of cuboid:";
    cin>>l>>b>>h;
    cout<<l*b*h;
}

int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
}