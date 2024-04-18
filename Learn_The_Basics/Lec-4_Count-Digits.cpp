#include<iostream>
using namespace std;


int countDigits(int n){
	// Write your code here.
	int m = n;
	int ans = 0;
	while(m>0){
		int digit = m%10;
		if(digit !=0)
		ans = ans + (n%digit == 0);
		m = m/10;
	}
	return ans;
}
