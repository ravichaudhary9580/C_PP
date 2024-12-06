#include<iostream>
using namespace std;

//Program 1
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y){a=x;b=y;}
    void getData(){cout<<a<<"+i"<<b<<endl;}
    friend void operator-(Complex&);
};
void operator-(Complex &x )
{
    x.a=-x.a;
    x.b=-x.b;
}
int pro1()
{
    Complex c1;
    c1.setData(3,4);
    -c1;
    c1.getData();
}

//Program 2
class Integer
{
    private:
    int a;
    public:
    void setData(int x){a=x;}
    void getData(){cout<<a<<endl;}
    friend bool operator!(Integer);
    friend bool operator==(Integer,Integer);
};
bool operator==(Integer p,Integer q)
{
    if(p.a==q.a)
    return 1;
    else
    return 0;
}
bool operator!(Integer x)
{
    x.a = !x.a;
    if(x.a)
    return 1;
    else 
    return 0;
}
int pro2()
{
    Integer p;
    p.setData(0);
    if(!p)
    cout<<"p is zero but (not p) !p is non-zero "<<!p<<endl;
    else
    cout<<"p is non-zero but (not p) !p is zero "<<!p<<endl;
    return 0;
}

//Program 3,4
class Coordinate
{
    private:
    int a,b;
    public:
    void setData(int x,int y){a=x;b=y;}
    void getData(){cout<<"("<<a<<","<<b<<")"<<endl;}
    void operator,(Coordinate);
};
void Coordinate::operator,(Coordinate x)
{
    a=x.a;
    b=x.b;
}
int pro34()
{
    Coordinate c1,c2,c3;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=(c1,c2);
    c3.getData();
    return 0;
}

//Program 5
class Student 
{
    public:
    int roll_no;
    char name[30];
    int age;
    public:
    void setStudent(){}
};