#include <bits/stdc++.h>
using namespace std;


//  NUMBER HASHING


//Brute Force Approach
/*
    int f(number, a[]) {
        int count = 0;
        for(int i=0; i<n; i++){
            if(a[i] == number)
                count++;
        }
        return count;
    }

    This approach is not a better approach as for each querry it will iterate n times. For example if we have
    5 queries than for each querry it will iterate and total time complexity will be 5n, therefore this
    approach is not a suitable approach for the bigger/more number of queries.
*/

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;       //Number of queries we want to find (Example -> 3)
    while (q--) {
        int number;
        cin >> number; //Enter each querry (Example -> 1 5 6)
        // fetching:
        cout << hash[number] << endl;   //will give that how many times 1 5 6 are present
    }
    return 0;
}
