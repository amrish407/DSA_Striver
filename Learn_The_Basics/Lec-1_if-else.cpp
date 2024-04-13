#include<iostream>
using namespace std;

//Code for coding ninja platform
/*
string compareIfElse(int a, int b) {
	// Write your code here
	if(a>b)
	return "greater";
	else if(a<b)
	return  "smaller";
	else if(a==b)
	return "equal"; 
}
*/


//code for our understanding
int main(){
    int a, b;
    cout << "Please enter a two numbers: ";
    cin >> a >> b;
    //Output to compare a with b and give the status of a(i.e 1st entered number)
    if(a>b)
	cout << "greater " << a;
	else if(a<b)
	cout << "smaller " << a;
	else if(a==b)
	cout << "equal " << a; 
}