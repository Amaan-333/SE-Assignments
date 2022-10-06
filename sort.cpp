#include<iostream>
using namespace std;
int n,i,j,marks[10],sort[10];
int min;


void entry()
{
    cout<<"Enter list length";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>marks[i];
    }

    for (i = 0; i < n; i++)
    {
        cout<<marks[i]<<endl;

    }
    
}


void selection_sort()
{
    for (i = 0; i < n; i++)
    {
        min=i;
        for (j=i+1;j<n;j++)
        {
            if (marks[j]>marks[min]);
                min=j;

        }
        

    }
    
}



int main(int argc, char const *argv[])
{
    return 0;
}
