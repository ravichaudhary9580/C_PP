#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; //Instance member variables | Non-static member variables
        static int k; //static member variable | Class variable
    public:
    void setA(int x){a=x;}
    void setB(int y){b=y;}
    int getA(){return a;}
    int getB(){return b;}
    static void setK(int z){k=z;}
    static int getK(){return k;}

};
int Item::k;
int main()
{
    // Item i1,i2;
    // i1.setA(5);
    // i1.setB(6);
   
   Item::setK(10);

    cout<<Item::getK();
    cout<<endl;
    return 0;
}
