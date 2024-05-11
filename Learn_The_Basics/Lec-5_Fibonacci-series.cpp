#include<iostream>
using namespace std;

//Code for the Leet Code Platform

//Brute Force Approach
/*******************************************************************************
class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else{
            int prev1 = 0;
            int prev2 = 1;
            int current;
            while(n>1){
                current = prev1 + prev2;
                prev1 = prev2;
                prev2 = current;
                n--;
            }
            return current;
        }
    }
};
**********************************************************************************/



//Best Approach
class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else{
            int F[n+1];
            F[0] = 0;
            F[1] = 1;
    
            for(int i=2; i<=n; i++){
                F[i] = F[i-1] + F[i-2];
            }

            return F[n];
        }
    }
};