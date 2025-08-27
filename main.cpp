#include "src/1929_Concatenation_of_Array.cpp"
#include "src/3110_Score_of_a_String.cpp"
#include "src/3467_Transform_Array_by_Parity.cpp"
#include<iostream>

int main(void) {

    // Riddle solution - 1929 Concatenation of Array
    vector<int> nums = { 1, 2, 1 };
    vector<int> full_ans = getConcatenation(nums);
    cout << "Original nums: ";
    for (auto i : nums) cout << i << " ";
    cout << "Concatenation nums: ";
    for (auto j : full_ans) cout << j << " ";
    cout << endl;

    // Riddle solution - 3110 Concatenation of Array
    string s1 = "hello";
    int ans1 = scoreOfString(s1);
    cout << "String: " << s1 << " == "<< ans1 << endl;
    
    //Riddle solution - 3467 Transform Array by Parity
    vector<int> nums3467 = {4,3,2,1};
    vector<int> ans = transformArray(nums3467);
    for (auto i : ans) std::cout << i << " ";
}
