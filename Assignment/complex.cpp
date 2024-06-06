#include<iostream>
using namespace std;
class complex
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
            cout<<"a="<<a<<" b="<<b<<endl;
        }
     complex add(complex c1,complex c2);    

};

 complex complex::add(complex c1,complex c2)
        { 
            complex add;
            add.a=c1.a+c2.a;
            add.b=c1.b+c2.b;
            return add;
        } 
void f1()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c1.showData();
    c2.setData(5,6);
    c2.showData();
    c3=c3.add(c1,c2);
    c3.showData();
}

int main()
{
    f1();
    return 0;
}