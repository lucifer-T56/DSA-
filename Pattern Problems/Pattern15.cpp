// 15.      *
//         * *
//        *   *
//       *     *
//      *       *
//       *     *
//        *   *
//         * *
//          *

#include<bits/stdc++.h>
using namespace std;

void disp(int n)
{
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i <= n)
        {
            for (int j = 1; j < n-i+1; j++)
            {
                cout<<" ";
            }
            for (int  k = 1; k <= 2*i-1; k++)
            {
                if(k == 1 || k==2*i-1)
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
        else
        {
            for (int j = 1; j <= i-n; j++)
            {
                cout<<" ";
            }
            for (int k = 1; k <= 2*(2*n-i)-1; k++)
            {
                if(k==1 || k==2*(2*n-i)-1)
                cout<<"*";
                else
                cout<<" ";
            }
            cout<<endl;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    disp(n);
}