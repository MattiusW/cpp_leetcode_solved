#include "src/1684_Count_the_Number_of_Consistent_Strings.cpp"
#include "src/1929_Concatenation_of_Array.cpp"
#include "src/3110_Score_of_a_String.cpp"
#include "src/3467_Transform_Array_by_Parity.cpp"
#include<iostream>

int main(void) {
    cout << "Riddle solution - 1929 Concatenation of Array:" << endl;
    vector<int> nums = { 1, 2, 1 };
    vector<int> full_ans = getConcatenation(nums);
    cout << "Original nums: ";
    for (auto i : nums) cout << i << " ";
    cout << "Concatenation nums: ";
    for (auto j : full_ans) cout << j << " ";
    cout << endl;

    cout << "Riddle solution - 3110 Concatenation of Array:" << endl;
    string s1 = "hello";
    int ans1 = scoreOfString(s1);
    cout << "String: " << s1 << " == "<< ans1 << endl;
    
    cout << "Riddle solution - 3467 Transform Array by Parity:" << endl;
    vector<int> nums3467 = {4,3,2,1};
    vector<int> ans = transformArray(nums3467);
    for (auto i : ans) std::cout << i << " ";
    cout << endl;

    cout << "Riddle solution - 1684_Count the Number of Consistent Strings:" << endl;
    vector<std::string> words1684 = {"cc","acd","b","ba","bac","bad","ac","d"};
    string allowed1684 = "cad";
    int ans1684 = countConsistentStrings(allowed1684, words1684);
    for (auto i : words1684) cout << i << " "; 
    cout << ";allow: " << allowed1684 << " ;count == " << ans1684 << endl;
}

