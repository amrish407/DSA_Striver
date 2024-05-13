#include<iostream>
using namespace std;

//  PROBLEM STATEMENT

/*

The frequency of an element is the number of times it occurs in an array.

You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and 
increment the element at that index by 1.

Return the maximum possible frequency of an element after performing at most k operations.

Example 1:
Input: nums = [1,2,4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
4 has a frequency of 3.


Example 2:
Input: nums = [1,4,8,13], k = 5
Output: 2
Explanation: There are multiple optimal solutions:
- Increment the first element three times to make nums = [4,4,8,13]. 4 has a frequency of 2.
- Increment the second element four times to make nums = [1,8,8,13]. 8 has a frequency of 2.
- Increment the third element five times to make nums = [1,4,13,13]. 13 has a frequency of 2.

*/



//Code for Leet Code Platform
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
        int maxFreq = 0;
        int left = 0;
        long sum = 0;

        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right];
            while ((long)(right - left + 1) * nums[right] - sum > k) {
                sum -= nums[left];
                ++left;
            }
            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
    
};