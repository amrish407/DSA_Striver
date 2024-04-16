#include<iostream>
using namespace std;

int sum_even_odd(int n){
	int rem, even, odd;
	even = 0;
	odd = 0 ;

	while(n>0){
		rem = n%10;
			if(rem%2 == 0)
				even = even + rem;
			else
				odd = odd + rem;
		n = n/10;
	}
	
	cout << even << " " << odd << endl;
	
}

int main(){
	int n;
	cin >> n;

	sum_even_odd(n);
}
