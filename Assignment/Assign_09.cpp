 #include<iostream>
 using namespace std;

 //Program 1
 class Complex 
 {
    private:
    int a,b;
    public:
    void setData(int,int);
    void showData();

    Complex add(Complex);
    Complex subtract(Complex);
    Complex multiply(Complex);
 };

void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData( )
{
    cout<<a<<" "<<b;
}
Complex Complex::add(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::subtract(Complex C)
{
    Complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
Complex Complex::multiply(Complex C)
{
    Complex temp;
    temp.a=((a*C.a)-(b*C.b));
    temp.b=((a*C.b)+(C.a*b));
    return temp;
}

 int pro1()
 {
    Complex p,q,product;
    p.setData(2,3);
    q.setData(3,4);
    product=p.multiply(q);
    product.showData();
    return 0;
 }

//Program 2
class Time
{
    private:
    int h,m,s;
    public:
    void setTime(int,int ,int);
    void showTime();
    void normalize();
    Time add(Time);
    bool is_greater(Time);
};

void Time::setTime(int x, int y, int z)
{
    h=x;
    m=y;
    s=z;
}
void Time::showTime()
{
    cout<<h<<" hr "<<m<<" min "<<s<<" sec";
}
void Time::normalize()
{
        m=m+(s/60);
        s=s%60;
        h=h+(m/60);
        m=m%60;
}
Time Time::add(Time x)
{
    Time temp;
    temp.s=s+x.s;
    temp.m=m+x.m;
    temp.h=h+x.h;
    return temp;
}
bool Time::is_greater(Time x)
{
    if(h>x.h)
    return 1;//jis object ne call kiya wo time bada hai
    else if(h==x.h&&m>x.m)
    return 1;//jis object ne call kiya wo time bada hai
    else if(m==x.m&&h==x.h&&s>x.s)   
    return 1;//jis object ne call kiya wo time bada hai
    else
    return 0;//jo object pass kiya hai wo bada hai
}

int pro2()
{
    Time a,b;
    a.setTime(2,120,130);
    b.setTime(2,130,120);
    // a.showTime();
    // b.showTime();
    // cout<<endl;
    // a=a.add(b);
    // a.normalize();
    // a.showTime();

    a.normalize();
    b.normalize();
    cout<<a.is_greater(b);
    return 0;
}

//Program 3
class testResult
{
    private:
    int roll_no, right, wrong, net_score;
    public:
    void setData(int w,int x,int y,int z);
    void getData();
    float right_weightage();
    float wrong_weightage();
    void sort(int*);
};

void testResult::setData(int w,int x,int y,int z)
{
    roll_no=w;
    right=x;
    wrong=y;
    net_score=z;
}
void testResult::getData()
{
    cout<<roll_no<<"  "<<right<<"  "<<wrong<<"  "<<net_score<<endl;
}
float testResult::right_weightage()
{
    return (right/(right+wrong))*100;
}
float testResult::wrong_weightage()
{
    return (wrong/(right+wrong))*100;
}
void testResult::sort(int arr)
{
 for(int j=1;j<5;j++)
    {
        for(int i=0;i<4;i++)
        {
            testResult temp;
            if(arr[i].net_score>arr[i+1].net_score)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
//Program 4
int main()
{
    testResult arr[5];

    arr[0].setData(101,12,8,60);
    arr[1].setData(102,10,10,50);
    arr[2].setData(103,14,6,70);
    arr[3].setData(104,17,3,85);
    arr[4].setData(105,8,12,40);

    arr[0].sort(arr[0]);
    cout<<"Roll No.  "<<"Right  "<<"Wrong  "<<"Net Score"<<endl;
    for(int i=0;i<5;i++)
    {
        arr[i].getData();
    }
    return 0;
}