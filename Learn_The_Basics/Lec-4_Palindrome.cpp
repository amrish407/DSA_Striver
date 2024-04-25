#include<iostream>
using namespace std;

//Code for the Coding Ninja
bool palindrome(int n)
{
    // Write your code here
    int m = n;
    int reverse = 0;
    while(m>0){
        int digit = m%10;
        reverse = reverse*10 + digit;
        m = m/10;
    
    }

    if(reverse == n)
        return true;
    else
        return false;
}
