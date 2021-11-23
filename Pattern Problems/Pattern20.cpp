// 20.    ****
//        *  *
//        *  *
//        *  *
//        ****

#include<iostream>
using namespace std;

void disp(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n-1 ; j++)
        {
           if(i==1 || j==1 || i==n || j==n-1)
           {
               cout<<"*";
           }
           else
           {
               cout<<" ";
           }
        }
         cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    disp(n);
}