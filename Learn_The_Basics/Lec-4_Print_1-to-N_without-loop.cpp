#include<iostream>
#include<vector>
using namespace std;

//Code for the Coding Ninja Platform
/*
vector<int> printNos(int x) {
    // Write Your Code Here
    if(x==1){
        return {1};
    } 
    vector<int> arr = printNos(x-1);
    arr.push_back(x);
    return arr;
}
*/


//Code for Our Understanding

    vector<int> generateArray(int n) {
    // Base case: if n is 1, return a vector containing only 1
    if (n == 1) {
        return {1};
    }
    // Recursive call with n-1
    vector<int> arr = generateArray(n - 1);
    // Append n to the vector
    arr.push_back(n);
    return arr;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    vector<int> result = generateArray(n);

    // Print the generated array
    cout << "Generated array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
