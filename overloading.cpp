#include<iostream>
using namespace std;
int main()
{
    int n;int comp;
    cout<<"Enter your rows :"<<endl;
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        if(n<=5)
        comp=n-i;
        else
        comp=i-n;
        for(int j=0;j<comp;j++)
        cout<<"*"<<endl;
    }
    return 0;
}






