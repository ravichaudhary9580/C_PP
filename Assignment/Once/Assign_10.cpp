#include<iostream>
#include<string.h>
using namespace std;

//Program 1
class Cuboid
{
    private:
    int length,breadth,height;
    public:
       Cuboid(){length=0;breadth=0;height=0;}
       Cuboid(int x,int y,int z){length=x;breadth=y;height=z;}
};

//Program 2
class Customer
{
    private:
    int cust_id;
    char mobile[15];
    char name[50];
    char email[50];
    public:
    Customer()
    {
        cust_id=0;
        strcpy(mobile,"000-0000-000");
        strcpy(name,"Anonymous");
        strcpy(email,"example@gmail.com");
    }
    Customer(int id,char n[],char e[],char m[])
    {
        cust_id=id;
        strcpy(name,n);
        strcpy(email,e);
        strcpy(mobile,m);
    }

};

//Program 3
class Time
{
    private:
    int hr,min,sec;
    public:
    Time(int x,int y,int z){hr=x;min=y;sec=z;}
};

//Program 4
class Book
{
    private:
    int bookid;
    char title[100];
    float price;
    public:
    Book()
    {
        bookid=0;
        strcpy(title,"example");
        price=0.0f;
    }
    Book(int id, char t[],float p)
    {
        bookid=id;
        strcpy(title,t);
        price=p;
    }
}; 

//Program 5
class Complex
{
    private:
    int a,b;
    public:
    Complex(int x,int y){a=x;b=y;}
    void showData()
    {
        cout<<"("<<a<<","<<b<<")"<<endl;
    } 
};
int main()
{
    Complex c[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,0)};
    for(int i=0;i<5;i++)
    c[i].showData();
    return 0;
}