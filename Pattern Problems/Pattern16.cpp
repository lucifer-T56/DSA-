// 16.           1
//             1   1
//           1   2   1
//         1   3   3   1
//       1   4   6   4   1

#include<bits/stdc++.h>
using namespace std;
void disp(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        int val = 1;
        for (int  j = 1; j < n-i ; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<val<<"   ";
            int l = val * (i-k)/(k+1);
            val = l;
        }
        cout<<endl;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    disp(n);
}