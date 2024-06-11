#include<iostream>
using namespace std;

//Progarm 1
class fraction
{
    private:
    long int numerator,denominator;
    public:
    fraction(){numerator=0; denominator=1;}
    fraction(long int x,long int y)
    {    
        int hcf;
        hcf=x<=y?x:y;
        for(hcf;hcf>=1;hcf--)
        {
            if(x%hcf==0&&y%hcf==0)
            break;
        }
        numerator=x/hcf; denominator=y/hcf;
    }
    
    void showfraction();

    fraction operator+(fraction);
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
bool fraction::operator<(fraction x)
{
    if()
}
int main()
{
    fraction a(1,3),b(3,6),c;
/*     a.showfraction();
    c=a+b;
    c.showfraction(); */
    b.showfraction();
    return 0;
}