#include<iostream>
#include<vector>
using namespace std;

//Code for the (Geeks For Geeks) Platform

//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        long long int fact = 1;
        vector<long long int>arr;
        for(long long int i = 2; fact<=N; i++){
            arr.push_back(fact);
            fact = fact*i;
        }
        
        return arr;
        
    }
};