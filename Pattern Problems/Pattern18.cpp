// 18.   **********
//       ****  ****
//       ***    ***
//       **      **
//       *        *
//       *        *
//       **      **
//       ***    ***
//       ****  ****
//       **********

#include<bits/stdc++.h>
using namespace std;

void disp(int n)
{
    for (int  i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout<<"*";   
        }
        for (int k = 1;  k <= 2*i-2 ; k++)
        {
            cout<<" ";
        }
        for (int l = i; l <= n ; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1 ; i<=n ; i++)
    {
        for (int j  = 1; j <= i; j++)
        {
             cout<<"*";
        }
        for (int k = 2*i-2; k < 2*n-2; k++)
        {
            cout<<" ";
        }
        
        for (int l = 1; l <= i ; l++)
        {
            cout<<"*";
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