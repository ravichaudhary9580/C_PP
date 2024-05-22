#include<iostream>
using namespace std;
namespace n1
{
    int x=6;
}
using namespace n1;

int main()
{
    int a,b;
    cout<<"x="<<x<<"\n";
    cout<<"Enter a number:";
    cin>>a;
    b=a*a;
      cout<<"Square of "<<a<<" is "<<b;
    return 0;
}