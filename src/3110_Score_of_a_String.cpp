/*
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.
Return the score of s.

Example 1:
Input: s = "hello"
Output: 13

Explanation:
The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. 
So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.
*/
#include "3110_Score_of_a_String.h"

int scoreOfString(std::string s) {
    int count = 0;
    int temp = 0;
    int i = 0;
    int j = 1;
   
    while (j < s.size()) {
      temp = s[i] - s[j];
      count += abs(temp);
      i++;
      j++;
   }

   return count;
}