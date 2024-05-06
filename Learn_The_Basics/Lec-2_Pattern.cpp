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

/*
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
*/



    /*
        PATTERN 6
            12345
            1234
            123
            12
            1
    */

/*
   int main(){
    int n;
    cout << "Please Enter the size of the Matrix: ";
    cin >> n;

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<(n-i); j++){
            count++;
            cout << count;
        }
        cout << endl;
    }
   }
*/




    /*
        PATTERN 7   (Hard for me in 1st Attempt)
                *
               *** 
              *****
             *******
            *********
    */

   int main(){
    int n;
    cout << "Please Enter the size for the Pyramid: ";
    cin >> n;

    int i,j,k,l;
    for(i=0; i<n; i++){
        for(j=0; j<(n-i-1); j++){
            cout << " ";
        }
            for(k=j; k<n; k++){
                cout << "*";
            }
                for(l=0; l<(n-j-1); l++){
                    cout << "*";
                }
        cout << endl;
    }
   }