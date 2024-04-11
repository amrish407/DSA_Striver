#include<iostream>
using namespace std;

int main() {
	char alphabet;
	cin >> alphabet;

	if(alphabet >= 'A' && alphabet <='Z')
		cout << "1";
	else if(alphabet >= 'a' && alphabet <= 'z')
		cout << "0";
	else 
		cout << "-1";
	
}

