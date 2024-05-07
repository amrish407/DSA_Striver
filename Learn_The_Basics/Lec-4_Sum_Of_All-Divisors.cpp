#include<iostream>
using namespace std;

//Code for the Coding Ninja Platform

int sumOfAllDivisors(int n){

    // Write your code here.
    int sum = 0;
/*

    //Brute Force Method and also Time Complexity is More

    for (int i = 1; i <= n; i++) {
        for( int j = 1; j <= i; j++){
            if (i % j == 0) 
                sum = sum + j;
        }
    }
*/

    //Best Approach which Reduces the Time Complexity

    for(int i=1; i<=n; i++){
        sum = sum + i*(n/i);
    }
    return sum;

}