// 13.      *
//         * *
//        *   *
//       *     *
//      *********


#include<bits/stdc++.h>
using namespace std;
void disp(int n)
{
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j < n-i+1; j++)
        {
            cout<<" ";
        }
        if(i<n)
        {
            for (int k = 1; k<=2*i-1; k++)
            {
                if(k == 1 || k == 2*i-1)
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
            for (int k = 1; k<=2*i-1; k++)
                cout<<"*";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    disp(n);
}