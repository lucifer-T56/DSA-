// 5.  *
//     **
//     ***
//     ****
//     *****
//     ****
//     ***
//     **
//     *


#include<bits/stdc++.h>
using namespace std;

void disp(int n)
{
    for(int i=1 ; i<=(2*n)-1 ; i++)
    {
        if(i<=n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for (int j = 1; j <= ((2*n)-1)-i+1; j++)
            {
                cout<<"*";
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