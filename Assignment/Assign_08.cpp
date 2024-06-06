#include<iostream>
using namespace std;
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
    void add(Complex x)
    {
        
    }
};
int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(2,3);
    c1.showData();
    return 0;
}