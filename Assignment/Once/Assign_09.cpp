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
    temp.b=((a*C.b)+(b*C.a));
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
    void setTime(int,int,int);
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
    temp.normalize();
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

/* //Program 3
class testResult
{
    private:
    int roll_no, right, wrong, net_score;
    public:
    void setData(int w,int x,int y,int z);
    void getData();
    float right_weightage();
    float wrong_weightage();
    void sort(testResult arr[]);
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
    cout<<"  "<<roll_no<<"      "<<right<<"      "<<wrong<<"        "<<net_score<<endl;
}
float testResult::right_weightage()
{
    return (right/(right+wrong))*100;
}
float testResult::wrong_weightage()
{
    return (wrong/(right+wrong))*100;
}
void testResult::sort(testResult arr[])
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
int pro4()
{
    testResult arr[5];

    arr[0].setData(101,12,8,60);
    arr[1].setData(102,9,11,45);
    arr[2].setData(103,14,6,70);
    arr[3].setData(104,17,3,85);
    arr[4].setData(105,8,12,40);

    arr[0].sort(arr);
    cout<<"Roll No.  "<<"Right  "<<"Wrong  "<<"Net Score"<<endl;
    for(int i=0;i<5;i++)
    {
        arr[i].getData();
    }
    return 0;
}
 */
//Program 5
class Matrix
{
    private:
    int arr[3][3];
    public:
    void setData();
    void getData();
    Matrix add(Matrix);
    Matrix sub(Matrix x);
    Matrix multiply(Matrix x);
    Matrix transpose();
    bool is_singular();
};
void Matrix::setData()
    {
        cout<<"Enter the value of 3x3 matrix:";
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                cin>>arr[j][i];
            }
        }
    }
void Matrix::getData()
{
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
} 
Matrix Matrix::add(Matrix x)
{
    Matrix temp; 
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
               temp.arr[j][i]=arr[j][i]+x.arr[j][i];
            }
        }
    return temp;
}
Matrix Matrix::sub(Matrix x)
{
    Matrix temp; 
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
               temp.arr[j][i]=arr[j][i]-x.arr[j][i];
            }
        }
    return temp;
}
Matrix Matrix::multiply(Matrix x)
{
    Matrix temp;
        for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
               temp.arr[j][i]=arr[j][0]*x.arr[0][i]+arr[j][1]*x.arr[1][i]+arr[j][2]*x.arr[2][i];
            }
        }
    return temp; 
    
}
Matrix Matrix::transpose()
{
    Matrix temp;
    cout<<"\nTranspose Matrix is:\n";
    for(int j=0;j<3;j++){
            for(int i=0;i<3;i++){
                  temp.arr[j][i]=arr[i][j];
            }
        }
    return temp;
}
bool Matrix::is_singular()
{
    int detreminant,a,b,c;
    a=arr[1][1]*(arr[2][2]*arr[3][3]-arr[2][3]*arr[3][2]);
    b=arr[1][2]*(arr[2][1]*arr[3][3]-arr[2][3]*arr[3][1]);
    c=arr[1][3]*(arr[2][1]*arr[3][2]-arr[2][2]*arr[3][1]);
    detreminant=a-b+c;
    if(detreminant==0)
    return 1;//singular martrix
    else
    return 0;//not
}

int pro5()
{
    Matrix a,b,c;
    // a.setData();
    // b.setData();
    // a.getData();
    // cout<<endl;
    // b.getData();

    // c=a.multiply(b);
    // cout<<endl;
    // c.getData();

    //transpose
    // a.setData();
    // cout<<endl<<"Matrix is:\n";
    // a.getData();
    // a=a.transpose();
    // a.getData();
    
    a.setData();
    cout<<a.is_singular();
    return 0;
}


//Program 3
class testResult
{
    private:
    int roll_no,right,wrong,net_score;
    static int right_weightage,wrong_weightage;
    public:
    void setRollno(int x){roll_no=x;}
    void setRight(int x){right=x;}
    void setWrong(int x){wrong=x;}
    void setnet_score(int x){net_score=x;}
    static void setright_weightage(int x){right_weightage=x;}
    static void setwrong_weightage(int x){wrong_weightage=x;}
 
    int getRollno(){return roll_no;}
    int getRight(){return right;}
    int getWrong(){return wrong;}
    int getnet_score(){return net_score;}
    static int getright_weightage(){return right_weightage;}
    static int getwrong_weightage(){return wrong_weightage;}  
};
int testResult::right_weightage;
int testResult::wrong_weightage;
void setTestResult(testResult &t,int r,int right,int wrong)
{
    t.setRollno(r);
    t.setRight(right);
    t.setWrong(wrong);
    t.setnet_score((right*testResult::getright_weightage())-(wrong*testResult::getwrong_weightage()));
}
void sortByNetScore(testResult arr[],int size)
{
    int round,i;
    testResult temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(arr[i].getnet_score()<arr[i+1].getnet_score())
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void showTestResults(testResult arr[],int size){
    cout<<endl;
    cout<<"--------------------------------------";
    cout<<endl;
    cout<<"Roll No  Right  Wrong  Net Score";
    for(int i=0;i<size;i++)
    {
        cout<<endl;
        cout<<arr[i].getRollno()<<"  ";
        cout<<arr[i].getRight()<<"  ";
        cout<<arr[i].getWrong()<<"  ";
        cout<<arr[i].getnet_score()<<"  ";
    }
}
int main()
{
    testResult arr[5];
    testResult::setright_weightage(3);
    testResult::setwrong_weightage(1);
    int r,right,wrong;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter details for test result "<<i+1<<endl;
        cout<<"Enter rollno: ";
        cin>>r;
        cout<<"Enter number of right answers: ";
        cin>>right;
        cout<<"Enter number of wrong answers: ";
        cin>>wrong;
        setTestResult(arr[i],r,right,wrong);
    }
    sortByNetScore(arr,5);
    showTestResults(arr,5);
    return 0;
}