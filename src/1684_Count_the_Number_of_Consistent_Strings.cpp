/*
1684. Count the Number of Consistent Strings
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.

Example 3:
Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
Output: 4
Explanation: Strings "cc", "acd", "ac", and "d" are consistent.
*/

#include "1684_Count_the_Number_of_Consistent_Strings.h"

int countConsistentStrings(std::string allowed, std::vector<std::string>& words) {
    bool allow = false;
    int count = 0;
    
    for (int i = 0; i < words.size(); i++) {
        bool end = true;
        int check = 0;
        int word = 0;
        int sign = 0;
        while (end) {
            if (sign == words[i].size() || check == allowed.size()) end = false;

            else if (words[i][sign] == allowed[check]) {
                // std::cout << words[i][sign] << " == " << allowed[check] << std::endl;
                allow = true;
                // std::cout << "allow == " << allow << std::endl;
                sign++;
                check = 0;
            }
            else if (words[i][sign] != allowed[check] && check < allowed.size()) {
                // std::cout << words[i][sign] << " != " << allowed[check] << std::endl;
                allow = false;
                // std::cout << "allow == " << allow << std::endl;
                check++;
            }
        }
        if (allow == true) count += 1;
    }
    return count;
}