#include<iostream>
#include<cmath>
using namespace std;

//Code for the (Geeks For Geeks) Platform

class Solution {
  public:
    long long sum = 0;
    long long sumOfSeries(long long n) {
        // code here
        if(n==1){
            return 1; 
        }    
        return powl(n,3) + sumOfSeries(n-1);
    }
};