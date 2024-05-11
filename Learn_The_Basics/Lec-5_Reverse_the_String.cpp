// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>            //For std:: string
#include<cstring>           //For strlen function
using namespace std;

int main() {

    // Reverse the String
    string str = "RADHE";
    
    int left = 0;
    int right = str.length() - 1;
    
    while(left<right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    
    cout << str;

    return 0;
}