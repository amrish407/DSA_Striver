#include<iostream>
using namespace std;

//Code for the Coding Ninja Platform (T.C is less than n i.e O(log n))

int calcGCD(int n, int m){
    // Write your code here.   
    while(n > 0 && m > 0){
        if(n>m){
            n = n%m;
        }
        else 
            m = m%n;
    }
    if(n ==0)  
        return m;
    else 
        return n;
}

//Code for our Understanding where T.C is O(n)
// Basic Brute Force Approach
/*
int main() {
    // Write C++ code here
    int n,m;
    cout << "Enter the number to find the GCD of: ";
    cin >> n >> m;
    
    int gcd=0;
    for(int i=1; i<=m; i++ ){
        if(n%i==0 && m%i==0)
            gcd = i;
    }
    cout << gcd;

    return 0;
}
*/

// Making the Complexity less than O(n)
/*
    int main(){
        int n,m;
        cout << "Please Enter a number to find the GCD of: ";
        cin >> n >> m;

        while(n>0 && m>0){
            if(n>m)
                n=n%m;
            else
                m=m%n;
        }
        if(n==0)
            cout << m;
        else 
            cout << n;
    }
*/