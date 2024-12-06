#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; //Instance member variables | Non-static member variables
        static int k; //static member variable | Class variable
    public:
    void setA(int x){a=x;}//Instace member function 
    void setB(int y){b=y;}//Instance member function 
    int getA(){return a;}//Instance member function 
    int getB(){return b;}//Instance member function 
    static void setK(int z){k=z;}//Static Member function
    static int getK(){return k;}//Static Member function

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
