#include<iostream>
using namespace std;
class Product
{
    private:
        int a,b,c;
        int &r;
    public:
        Product(int x,int y,int z,int *ptr):r(*ptr)
        { a=x; b=y; c=z;}
        void show()
        {
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
            cout<<"r=>"<<r<<endl;
        }
};
int main()
{
    
    int *ptr = (int*)malloc(4);
    *ptr=100;
    // cout<<*ptr<<"  "<<ptr;
    Product p1={10,20,30,ptr};
    p1.show();
    cout<<endl;
    return 0;
}