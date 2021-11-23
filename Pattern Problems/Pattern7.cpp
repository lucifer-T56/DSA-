// 7.   *****
//       ****
//        ***
//         **
//          *

#include<bits/stdc++.h>
using namespace std;
void disp(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > n-i+1; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= n-i+1; k++)
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