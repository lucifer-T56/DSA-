// 19.    *        *
//        **      **
//        ***    ***
//        ****  ****
//        **********
//        ****  ****
//        ***    ***
//        **      **
//        *        *

#include<bits/stdc++.h>
using namespace std;

void disp(int n)
{
       for(int i=1 ; i<=n; i++)
       {
              for(int j=1 ; j<=i ; j++)
              {
                     cout<<"*";
              }
              for (int k = 1; k <= 2*(n-i); k++)
              {
                     cout<<" ";
              }
              for(int j=1 ; j<=i ; j++)
              {
                     cout<<"*";
              }

              cout<<endl;
       }

       int sp=2;
       for(int i=1 ; i<= n-1 ; i++)
       {
              for(int j=i ; j<= n-1; j++)
              {
                     cout<<"*";
              }
              for(int k=1 ; k<=sp ; k++)
              {
                     cout<<" ";
              }
              for(int j=i ; j<= n-1; j++)
              {
                     cout<<"*";
              }
              sp+=2;
              cout<<endl;
       }


}

int main()
{
       int n;
       cin>>n;
       disp(n);
}