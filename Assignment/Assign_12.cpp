#include<iostream>
using namespace std;
//Program 1
class Complex 
{
    private:
    int a,b;
    public:
    //Constructors
    Complex(){}//default constructor
    Complex(int x,int y){a=x;b=y;}//parmetarised constructor
    Complex(Complex &C){a=C.a;b=C.b;}//copy constructor
    //Instance member function 
    void showData();
    //Instanace member operator
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    bool operator==(Complex);
};
void Complex::showData()
{
    cout<<"("<<a<<","<<b<<")"<<endl;
}
Complex Complex::operator+(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::operator-(Complex C)
{
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::operator*(Complex C)
{
    Complex temp;
    temp.a=(a*C.a)-(b*C.b);
    temp.b=(a*C.b)+(b*C.a);
    return temp;
}
bool Complex::operator==(Complex C)
{
    if(a==C.a&&b==C.b)
    return 1;
    else 
    return 0;
}
int pro1()
{
    Complex obj1(3,4),obj2(3,4),obj3/*,obj3=obj2 */;//Initialized the objects using constructor
    // obj3=obj1+obj2;//addition->operator overloading
    // obj3=obj1-obj2;//subtraction->operator overloading
    // obj3=obj1*obj2;//product->operator overloading
    
    // obj3.showData();

    int a;
    a=obj1==obj2;//equality->operator overloading
    cout<<a;
}

//Progarm 2,3,4
class Time
{
    private:
    int hour,min,second;
    public:
    Time(){hour=0;min=0;second=0;}
    Time(int x,int y,int z){hour=x;min=y;second=z;}

    void showTime();
    bool operator>(Time);
    void operator++();//pre-increment
    //Post-increment
    Time operator+(Time);
};

void Time::showTime()
{
    cout<<hour<<":"<<min<<":"<<second<<endl;
}
bool Time::operator>(Time a)
{
    if(hour>a.hour)
    return 1;
    else if(hour==a.hour&&min>a.min)
    return 1;
    else if(min==a.min&&second>a.second)
    return 1;
    else
    return 0;
}
void Time::operator++()//pre-increment
{
    ++second;
    if(second==60)
    {
        second=0;
        ++min;
    }
    if(min==60)
    {
        min=0;
        ++hour;
    }

}
//Post-increment
Time Time::operator+(Time x)
{
    Time temp;
    temp.hour=hour+x.hour;
    temp.min=min+x.min;
    temp.second=second+x.second;
    return temp;
}
int pro234()
{
    Time a(5,6,4),b(5,6,3);
    /* int k;
    k=a>b;
    cout<<k<<endl; */
    // for(int i=1;i<=360;i++,++a);
    a=a+b;
    a.showTime();
}

//Program 5
class Matrix
{
    private:
    int arr[3][3];
    public:
    void setData();
    void getData();

    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    Matrix operator*(Matrix);
};
void Matrix::setData()
{
    cout<<"Enter the elements of Matrix:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
}
void Matrix::getData()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }   
}

Matrix Matrix::operator+(Matrix X)
{
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.arr[i][j]=arr[i][j]+X.arr[i][j];        
        }
    }
    return temp;
}
Matrix Matrix::operator-(Matrix X)
{
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.arr[i][j]=arr[i][j]-X.arr[i][j];        
        }
    }
    return temp;
}
Matrix Matrix::operator*(Matrix x)
{
    Matrix temp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp.arr[i][j]=arr[i][0]*x.arr[0][j]+arr[i][1]*x.arr[1][j]+arr[i][2]*x.arr[2][j];   
        }
    }
    return temp;
}
int main()
{
    Matrix a,b;
    a.setData();
    a.getData();
    b.setData();
    b.getData();
   /*  a=a+b;
    a.getData();
    a=a-b;
    a.getData() */;
    a=a*b;
    a.getData();
    return 0;
}