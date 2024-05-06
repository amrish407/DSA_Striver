#include<iostream>
using namespace std;

//Code for the Coding Ninja Platform

// Simple way of checking Armstrong number (371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371)

bool checkArmstrong(int n){
	//Write your code here
	int m=n;
	int original = n;
	int sum=0;
	int count = 0;
	while(n>0){
		count++;
		n=n/10;
	}

	while(m>0){
		sum = sum + pow(m%10,count);
		m = m/10;
	}

	if(sum==original)
		return true;
	else
		return false;
}
