// 9.  *********
//      *******
//       *****
//        ***
//         *

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        for (int j = n; j > n-i+1; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= (2*(n-i+1))-1; k++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    
}