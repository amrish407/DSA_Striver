#include<iostream>
using namespace std;

//Code for the (Geeks For Geeks) Platform

class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N<1)
            return;
        printNos(N-1);
        cout << N << " ";
    }
};