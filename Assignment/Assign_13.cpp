#include<iostream>
using namespace std;

//Progarm 1,2
class fraction
{
    private:
    long int numerator,denominator;
    public:
    fraction(){numerator=0; denominator=1;}
    fraction(long int x,long int y){numerator=x;denominator=y;}

    void showfraction();
    fraction operator+(fraction);
    void reduce();
    bool operator<(fraction);
};

void fraction::showfraction()
{
    cout<<numerator<<"/"<<denominator<<endl;
}
fraction fraction::operator+(fraction x)
{
    long int lcm;
    lcm=denominator>=x.denominator?denominator:x.denominator;
    for(lcm;lcm<=denominator*x.denominator;lcm++)
    {
        if(lcm%denominator==0&&lcm%x.denominator==0)
        break;
    }
    fraction temp;
    temp.numerator=((lcm/denominator)*numerator)+((lcm/x.denominator)*x.numerator);
    temp.denominator=lcm;
    return temp;
}
void fraction::reduce()
    {    
        int hcf;
        hcf=numerator<denominator?numerator:denominator;
        for(hcf;hcf>=1;hcf--)
        {
            if(numerator%hcf==0&&denominator%hcf==0)
            break;
        }
        numerator=numerator/hcf; denominator=denominator/hcf;
    }
bool fraction::operator<(fraction x)
{
    if(denominator==x.denominator)
    {
        if(numerator<x.numerator)
        return 1;//a is smaller
        else
        return 0;//b is smaller
    }
    else
    {
        int lcm;
        lcm=denominator>x.denominator?denominator:x.denominator;
        for(lcm;lcm<denominator*x.denominator;lcm++)
        {
            if(lcm%denominator==0&&lcm%x.denominator==0)
            break;
        }
        numerator=(lcm/denominator)*numerator;
        denominator=lcm;
        x.numerator=(lcm/x.denominator)*x.numerator;
        x.denominator=lcm;
        if(denominator==x.denominator)
        {
            if(numerator<x.numerator)
            return 1;//a is smaller
            else
            return 0;//b is smaller
        }
    }
}
int pro12()
{
    fraction a(2,3),b(8,6),c;
/*     a.showfraction();
    c=a+b;
    c.showfraction(); 
    b.showfraction();*/
    a.reduce();
    b.reduce();
    a.showfraction();
    b.showfraction();
    int d;
    d=a<b;
    cout<<d;
    return 0;
}

//Problem 3,4
class Distance
{
    private:
    int km,m,cm;
    public:
    void setDistance(int x,int y,int z);
    void getDistance();
    void normalize();
    Distance operator+(Distance);
    Distance operator++();//pre-increment
    Distance operator++(int);//post-increment
    Distance operator--();//pre-decrement
    Distance operator--(int);//post-decrement
    friend ostream& operator<<(ostream&,Distance);
};
ostream& operator<<(ostream& dout,Distance x)
{
   dout<<x.km<<"km "<<x.m<<"m "<<x.cm<<"cm"<<endl;
    return dout;
}
void Distance::setDistance(int x,int y,int z)
    {
        km=x;
        m=y;
        cm=z;
    }
void Distance::getDistance()
{
    normalize();
    cout<<km<<"km "<<m<<"m "<<cm<<"cm"<<endl;
}
void Distance::normalize()
{
    if(cm>99)
    {
        m=m+(cm/100);
        cm=cm%100;
    }
    if(m>999)
    {
        km=km+(m/1000);
        m=m%1000;
    }
}
Distance Distance::operator+(Distance x)
{
    Distance temp;
    temp.km=km+x.km;
    temp.m=m+x.m;
    temp.cm=cm+x.cm;
    temp.normalize();
    return temp;
}
Distance Distance::operator++()
{
    cm=cm+1;
    normalize();
    return *this;
}
Distance Distance::operator++(int)
{
    Distance temp=*this;
    cm=cm+1;
    normalize();
    return temp;
}
Distance Distance::operator--()
{

    Distance temp;
   if(km==0&&m==0&&cm==0)
   {
        temp.km=km;
        temp.m=m;
        temp.cm=cm;
   }
    else
    {
        if(cm==0)
        {
            cm=100;
            if(m==0)
            {
                m=999;
                --km;
            }
            else
            --m;
        }
        temp.cm=--cm;
        temp.m=m;
        temp.km=km;
   }
    return temp;
}
Distance Distance::operator--(int)
{
    Distance temp=*this;
    if(km==0&&m==0&&cm==0)
    {
        this->km=km;
        this->m=m;
        this->cm=cm;
    }

    else
    {
        if(cm==0)
        {
            cm=100;
            if(m==0)
            {
                m=999;
                --km;
            }
            else
            --m;
        }
        this->cm=--cm;
        this->m=m;
        this->km=km;
    }
    return temp;
}


int main()
{
    Distance a,b,sum;
    a.setDistance(2,300,5);
    // b.setDistance(2,300,105);
    // sum=a+b;
    // sum.getDistance();
    // for(int i=0;i<1000000;i++)
    // sum++;
    // cout<<endl;
    // sum.getDistance();
    cout<<a--;
    a.getDistance();
    return 0;
}

//Problem 5
class Array
{

};