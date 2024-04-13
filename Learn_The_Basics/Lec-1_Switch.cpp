#include<iostream>
#include<math.h>
using namespace std;

//Code for coding ninja platform (Takeuforward DSA Strivers question)
/*
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	switch(ch){
		case 1:
		return M_PI*pow(a[0],2);
		break;
		case 2:
		return a[0]*a[1];
		break;
	}

}
*/


//code for our understanding

int main(){
    int choice;
    cout << "For Area of Circle choose 1 and For Rectangle choose 2: ";
    cin >> choice;
    int parameters[2];
    cout << "Enter Radius/Length and Breadth: ";
    cin >> parameters[0] >> parameters[1];


    switch(choice){
		case 1:
		cout << 3.14*pow(parameters[0],2);
		break;
		case 2:
		cout << parameters[0]*parameters[1];
		break;
	}

}


