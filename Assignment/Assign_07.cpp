#include<iostream>
using namespace std;

//Program 1
int hcf(int a,int b)
{
    int i,h;
    h=a<b?a:b;
    for(i=h;i>0;i--,h--)
    {
        if(a%h==0&&b%h==0)
        break;
    }
    return h;
}
int min()
{
    int a=4,b=3;
    cout<<hcf(a,b);
    return 0;

}

//Program 2
float volume(float l,float b,float h)
{
    return l*b*h;//volume of cuboid
}
float volume(float r,float h)
{
    return (3.14/3)*r*r*h;//volume of cone
}
float volume(float r)
{
    return (4/3.0)*3.14*r*r*r;//volume of sphere
}

//Program 3
