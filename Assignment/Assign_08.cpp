#include<iostream>
using namespace std;
#define PI 3.14159

//Program 1
class Complex
{
    private:
    int a,b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<"a= "<<a<<" b= "<<b;
    }
};
int pro1()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(2,3);
    c1.showData();
    return 0;
}

//Program 2
class Time
{
    private:
    int a,b,c;
    public:
    void setTime(int x,int y,int z)
    {
        a=x;//hr
        b=y;//min
        c=z;//sec
    }
    void showTime()
    {
        cout<<a<<" hr "<<b<<" min "<<c<<" sec";
    }
};
int Pro2()
{
    Time M;
    M.setTime(3,45,20);
    M.showTime();
    return 0;
}

//Progrma 3,4
class Date
{
    private:
    int d,m,y;
    public:
    void setDate(int a,int b,int c)
    {
        d=a;//day
        m=b;//month
        y=c;//year
    }
    void getDate()
    {
        cout<<"d="<<d<<", m="<<m<<", y="<<y;
    }
    void getDate2()
    {
        cout<<d<<"-"<<m<<"-"<<y;
    }
    void getDate3()
    {
       

        cout<<d<<"-";
        switch(m)
        {
           case 1:
           cout<<"Jan";
           case 2:
           cout<<"Feb";
           case 3:
           cout<<"Mar";
           case 4:
           cout<<"Apr";
           case 5: 
           cout<<"May";
           case 6:
           cout<<"Jun";
           case 7:
           cout<<"Jul";
           case 8:
           cout<<"Aug";
           case 9:
           cout<<"Sep";
           case 10:
           cout<<"Oct";
           case 11:
           cout<<"Nov";
           case 12:
           cout<<"Dec";
        } 
        cout<<"-"<<y;
    }
};
int Pro3()
{
    Date o;
    o.setDate(31,12,2022);
    o.getDate();
    cout<<endl;
    o.getDate3();
    return 0;
}

//Program 5
class Circle
{
    private:
    float r;
    public:
    void setRadius(float x)
    {
        r=x;
    }
    void getRadius()
    {
        cout<<r;
    }
    float area()
    {
        return PI*r*r;
    }
    float circumference()
    {
        return 2*PI*r;
    }
};
int main()
{
    Circle a,b;
    a.setRadius(1);
    cout<<a.area();
    cout<<endl;
    cout<<a.circumference();
}