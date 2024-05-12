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



//  Best Approach

/******************************************************************************************
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

*********************************************************************************************************/


//  CHARACTER HASHING

/**************************For Lower Case Characters*****************************************************

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;                 //FORMULA -> corresponding value = given character - 'a'
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}

 *******************************************************************************************************/


/*****************************For Both UpperCase and LowerCase Character*********************************

int main() {

    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}

*********************************************************************************************************/





//                                 How to HASH large numbers like 10^9 or higher:                          
/**************************
 
 map and unordered_map in C++ / HashMap in Java:
 map<int,int> or unordered_map<int,int> (Declaration of map and unordered map in c++)

 Difference between map and unordered map
 ->Map stores all the elements in the sorted order of keys.
 ->Unordered map does not follow any specific order.

 Let’s understand the difference considering the array: [1, 2, 3, 1, 3, 2, 12]. Here, the maximum element of 
 the array is 12. So, if we apply array hashing, we need an array of size 13. But if we apply the 
 map data structure, it will be the following:

 12 -> 1
 3  -> 2    The lenght of the map data structure will be the number of unique elements in the given array.
 2  -> 2    So, we are using lesser memory as compared to the array hashing.
 1  -> 2

Note:   If we want to fetch the value of a key that does not exist in the map, the map will always return 0 in C++
        and null in Java.

***************************/


int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map: 
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}



//  We can perform the CHARACTER HASHING using the same MAP DATA STRUCTURE.
//      map<char,int> or unordered_map<char,int>