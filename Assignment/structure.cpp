#include<iostream>
#include<string.h>
using namespace std;
struct Book
{
    private:
        int bookid;
        char title [50];
        float price;
    public:
        void setBookid(int id)
        {
            if(id<0)
                bookid=-id;
            else
                bookid=id;
        }
        void display()
        {
            cout<<bookid<<" "<<title<<" "<<price<<endl;
        }
        void input()
        {
            cout<<"Enter bookid title and price";
            cin>>bookid;
            if(bookid<0)
            bookid=-bookid;
            cin.ignore();
            cin.getline(title,50); 
            cin>>price;
        }
};

int main()
{
     Book b1={100,"C in Depth", 546.0f};
     Book b2,b3;
    b2.setBookid(-5);
    strcpy(b2.title, "C++ Made Easy");
    b2.price=630.0f;
    b3.input();
    b3.display();
    return 0;
}
  