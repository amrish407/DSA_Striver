#include<bits/stdc++.h>
using namespace std;

int fib(int n){
        if(n<3)
                return 1;

        int prev1=0;
        int prev2=1;
        int present=1;
        for (int i = 3; i <= n; i++) {
          prev1 = prev2;
          prev2 = present;
          present = prev1 + prev2;
        }
        return present;
}
int main()
{
       int n;
       cin>>n;
       int ans=fib(n);
       cout<<ans;
}