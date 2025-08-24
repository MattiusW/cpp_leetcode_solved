/*
Given an integer array nums of length n, 
you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] 
for 0 <= i < n (0-indexed).
Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

Example:
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
*/

#include <iostream>
#include<vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans = nums;

    for (int i = 0; i < nums.size(); i++) ans.push_back(nums[i]);
    
    return ans;
}

int main()
{   
    vector<int> nums = { 1, 2, 1 };
    vector<int> full_ans = getConcatenation(nums);
    for (auto i : full_ans) cout << i << " ";
}