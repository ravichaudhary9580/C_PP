#include<iostream>
using namespace std;
//Program 1
class Complex
{
    private:
    int a,b;
    public:
    Complex(){}
    Complex(int x,int y){a=x;b=y;}
    void setData(int x,int y){
        a=x;
        b=y;
        }
    void getData(){
        cout<<"("<<a<<","<<b<<"i)"<<endl;
    }
    friend Complex operator+(Complex,Complex);
    friend Complex operator-(Complex,Complex);
    friend Complex operator*(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}
Complex operator-(Complex c1,Complex c2)
{
    Complex temp;
    temp.a=c1.a-c2.a;
    temp.b=c1.b-c2.b;
    return temp;
}
Complex operator*(Complex c1,Complex c2)
{
    Complex temp;
    temp.a=(c1.a*c2.a)-(c1.b*c2.b);
    temp.b=(c1.a*c2.b)+(c1.b*c2.a);
    return temp;
}
int pro1()
{
    Complex c1(3,4),c2,sum,diff,product;
    c2.setData(2,3);
    sum=c1+c2;
    diff=c1-c2;
    product=c1*c2;
    sum.getData();
    diff.getData();
    product.getData();
    return 0;
}

//Program 2,3
class Time
{
    private:
    int hr,min,sec;
    public:
    void setTime(int x,int y,int z)
    {
        hr=x;min=y;sec=z;
    }
    friend ostream& operator<<(ostream&,Time);
    friend istream& operator>>(istream&,Time&);
    Time operator=(Time);
};
Time Time::operator=(Time x)
{
    hr=x.hr;
    min=x.min;
    sec=x.sec;
    return *this;
}
istream& operator>>(istream &din,Time &x)
{
    din>>x.hr>>x.min>>x.sec;
    return din;
}
ostream& operator<<(ostream &dout,Time x)
{
    dout<<x.hr<<"hr "<<x.min<<"min "<<x.sec<<"sec"<<endl;
}
int pro23()
{
    Time t1,t2;
    t1.setTime(4,40,30);
    cout<<t1;
    // cin>>t2;
    t2=t1;
    cout<<t2;
    return 0;
}

//Program 4
class Array
{
    private:
    int *p;
    int size;
    public:
    Array operator=(const Array);
    friend Array operator+(Array,Array);
};
Array operator+(Array arr1,Array arr2)
{   Array temp;
    temp.size=arr1.size+arr2.size;
    temp.p=new int[temp.size];
    int i,k;
    for(i=0,k=0;i<arr1.size;i++,k++)
    temp.p->p[k]=arr1.p[i];
    for(i=0;i<a2.size;i++,k++)
    temp.p->p[k]=arr2.p[i];
    return temp;
}
Array Array::operator=(Array x)
{
    size=x.size;
    p=new int[size];
   for(int i=0;i<size;i++)
    p[i]=x.p[i];
    return *this;
}
int main()
{
    Array a(5),b;
    b=a;
   
    return 0;
}