#include<iostream>
using namespace std;

//Code for coding Ninja Platform

long reverseBits(long n) {
  // Write your code here.

    long int reversedNum = 0;

   for (int i = 0; i < 32; ++i) {
        long int bit = (n >> i) & 1;
        reversedNum |= (bit << (31 - i));
    }

    return reversedNum;

}


/*

// Converting number to bits
int main() {
    int num = 10; // The integer to convert to bits


    // Iterate through each bit and print it

    for (int i = 31; i >= 0; --i) { // Assuming 32-bit integer
        int bit = (num >> i) & 1; // Shift the number i positions to the right, then bitwise AND with 1
        cout << bit; // Output the bit
    }
    cout << endl;


    // Reversing the bits position

    for(int j=0; j<32; j++){
        int reverse = (num >> j) & 1;
        cout << reverse;
    }


    //Bits to integer

    string binary = "1010"; // Binary Representation 
    int number = 0; // Initialize integer to 0

    for (int k = 0; k < binary.length(); k++) {
        // Convert character '0' or '1' to integer 0 or 1
        int bitss = binary[k] - '0';

        // Shift the current number to the left by 1 position and add the new bit
        number = (number << 1) | bitss;
    }

    cout << endl;
    // Output the integer
    cout << "Integer representation of " << binary << " is: " << num << endl;

    return 0;

}

*/
