#include<iostream>
using namespace std;

//Code For the (Geeks For Geeks) Platform

class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N<1)
            return;
        cout << "GFG";
        cout << " ";
        printGfg(N-1);
    }
};
