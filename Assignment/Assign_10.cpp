#include<iostream>
using namespace std;
/* 
//Program 1
class Cuboid
{
    private:
    int length,breadth,height;
    public:
       Cuboid(){}
       Cuboid(int x){length=x;breadth=0;height=0;}
       Cuboid(int x,int y){length=x;breadth=y;height=0;}
       Cuboid(int x,int y,int z){length=x;breadth=y;height=z;}
};

//Program 2
class Customer
{
    private:
    int cust_id,mobile;
    char name[50],email[50];
    public:
    Customer(){cust_id=0;mobile=1000000000;}
    Customer(int x,int y){cust_id=x;mobile=y;}

};

//Program 3
class Time
{
    private:
    int hr,min,sec;
    public:
    Time(){hr=0;min=0;sec=0;}
    Time(int x){hr=0;min=0;sec=x;}
    Time(int x,int y){hr=0;min=x;sec=y;}
    Time(int x,int y,int z){hr=x;min=y;sec=z;}
};

//Program 4
class Book
{
    private:
    bool booked;
    char title[100];
    int price;
    public:
    Book(){booked=0;price=0;}
    Book(bool x,int y){booked=x;price=y;}
}; */

//Program 5
class Complex
{
    private:
    int a,b;
    public:
    Complex(){a=0;b=0;}
    void showData()
    {
        cout<<"("<<a<<","<<b<<")"<<endl;
    } 
};
int main()
{
    Complex c;
    // for(int i=0;i<5;i++)
    // {
    // }
        cout<<c.showData();
    return 0;
}