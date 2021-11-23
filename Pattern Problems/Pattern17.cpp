// 17.      1
//         212
//        32123
//       4321234
//        32123
//         212
//          1
// 77189 55555 - gas phone numbber 

#include<bits/stdc++.h>
using namespace std;

void  disp(int n)
{
    
    for (int i = 1; i <= 2*n-1; i++)
    {
        if(i <= n)
        {
            for (int j  = 1; j < n-i+1; j++)
            {
                cout<<" ";
            }

            for (int k = i; k >=  1; k--)
            {
                cout<<k;
            }

            for (int  l = 2; l <= i; l++)
            {
                cout<<l;
            }
            cout<<endl;
        }
        else
        {
            for (int p = i-n; p >= 1 ; p--)
            {
                cout<<" ";
            }
            
            for (int j = n-(i-n); j >= 1 ; j--)
            {
                cout<<j;
            }
            
            for (int k = 2; k <=n-(i-n) ; k++)
            {
                cout<<k;
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
