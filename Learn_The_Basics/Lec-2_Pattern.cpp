#include<iostream>
using namespace std;


    /*  PATTERN 1
            *****
            *****
            *****
            *****
            *****
    */

/* 
   int main(){
   int n;
   cout << "Please Enter the size of Matrix :";
   cin >> n;

   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout << "*";
    }
    cout << endl;
   }

   return 0;
}
*/



    /*
        PATTERN 2
            *
            **
            ***
            ****
            *****
    */

   int main(){
    int n;
    cout << "Enter the size of the Matrix: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
   }


