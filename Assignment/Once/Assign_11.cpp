#include<iostream>
using namespace std;

//Progarm 1
class Number
{
    private:
    int size, *arr;
    public:
    Number(int x){
        size=x;
        arr=(int*)calloc(x,4);
    }
    ~Number(){
        free(arr);
    }
    Number(Number &n)
    {
        size=n.size;
        arr=(int*)calloc(size,4);
        for(int i;i<size;i++)
        arr[i]=n.arr[i];
    }
}; 

//Program 2
class student
{
    private:
    int id;
    int grade;
    char name[20];
    public:
    student(){
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter grade:";
        cin>>grade;
        cout<<"Enter name:";
        cin.ignore();
        cin.getline(name,20);
    }
    void display(){
        cout<<endl<<id<<"   "<<grade<<"   "<<name;
    }

};

//Program 3
class Date
{
    private:
    int d,m,y;
    public:
    Date():d(1),m(1),y(2000)
    {}
    Date(int d,int m,int y):d(d),m(m),y(y)
    {}
};

//Program 4
class Room
{
    private:
    int room_number,room_type,price;
    bool is_AC;
    public:
    Room(int rn,int rt, int p,bool a){
        room_number=rn;
        room_type=rt;
        price=p;
        bool=a;
    }
};

//Program 5
class Circle
{
    private:
    float radius;
    public:
    Circle(){radius=1;}
    Circle(float r){
        radius=r;
    }
};