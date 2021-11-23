//  1.  *****
//     *****
//     *****
//     *****
//     *****
    



#include<bits/stdc++.h>
using namespace std;

void disp(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (size_t i = 0; i < n; i++)
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
    return 0;
}