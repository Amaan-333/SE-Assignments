#include<iostream>
using namespace std;

class Publication
{
    public:
    int price;
    string title;
    

};

class Book: public Publication
{   public:
    int pages;
    
    public:
    void getdata(int x,int p)
    {
        price=x;
        pages=p;

    }
    public:
    void putdata()
    {
        cout<<"The price of Book is "<<price<<endl;
        cout<<"Pages: "<<pages<<endl;
    }

};

class Tape: public Publication
{   public:
    int minutes;
    Tape()
    {
        cout<<"The length of cassette"<<minutes;

    }

};

int main()
{
    Book obj;
    obj.getdata(500,1000);
    obj.putdata();
    

    return 0;
}





