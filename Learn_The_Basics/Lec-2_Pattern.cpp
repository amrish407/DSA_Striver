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

/*
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
*/




    /*
        PATTERN 3
            1
            12
            123
            1234
            12345
    */

/*
   int main(){
    int n;
    cout << "Please Enter the size of the Matrix: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<i; j++){
            count++;
            cout << count;
        }
        cout << endl;
    }

    return 0;
   }
*/



    /*
        PATTERN 4
            1
            22
            333
            4444
            55555
    */

/*
   int main(){
    int n;
    cout << "Please Enter the size of the Matrix: ";
    cin >>n;

    int count=0;
    for(int i=0; i<n; i++){
        count++;
        for(int j=0; j<=i; j++){
            cout << count;
        }
        cout << endl;
    }

    return 0;
   }
*/




    /*
        PATTERN 5
            *****
            ****
            ***
            **
            *
    */

int main() {    
    int n;
    cout << "Please Enter the size of the Matrix: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
