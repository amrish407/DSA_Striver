#include<iostream>
#include<string>
#include<cstring>
#include<cctype>        //isalnum is a function defined in the <cctype>

/*   
In C++, isalnum is a function defined in the <cctype> header, which is used to check whether a character 
is an alphanumeric character. An alphanumeric character is a character that is either a letter (a-z or A-Z) 
or a digit (0-9).

The isalnum function takes a single argument of type int, which represents the value of a character as an 
integer. It returns an integer value:

-> Non-zero if the character is an alphanumeric character.
-> 0 if the character is not an alphanumeric character.
*/

using namespace std;


//Code for the Leet Code Platform

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left<=right){
            if(!isalnum(s[left]))           
                left++;
            else if(!isalnum(s[right]))
                right--;
            else if(!(tolower(s[left]) == tolower(s[right])))
                return false;
            else{
                left++;
                right--;
            }
        }

        return true;      
    }
};