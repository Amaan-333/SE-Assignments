
#include<iostream>
using namespace std;
class CompleX
{
    public:
    int real,imaginary; 
    // parameterised constructor
    CompleX(int inReal=0,int inImaginary=0)
    {
        real=inReal;
        imaginary=inImaginary;
    }
    CompleX addComp(CompleX C1,CompleX C2)
    {
        CompleX temp;
        // add real part
        temp.real= C1.real+C2.real;
        // add complex part
        temp.imaginary=
        C1.imaginary+C2.imaginary;
        return temp;
    }

};

int main()
{
    CompleX C1(2,3);
    cout<<"Complex no. C1:"<<C1.real<<" + i"<<C1.imaginary<<"\n";
    CompleX C2(5,9);
    cout<<"Complex no. C2:"<<C2.real<<" + i"<<C2.imaginary<<endl;
    //third object
    CompleX C3;
    C3=C3.addComp(C1,C2);
    cout<<"Sum:"<<C3.real<<" + i"<<C3.imaginary;
    return 0;
}
