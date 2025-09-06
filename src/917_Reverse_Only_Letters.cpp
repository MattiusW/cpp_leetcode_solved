/*
917. Reverse Only Letters
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.

Example:
Input: s = "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
*/

#include "917_Reverse_Only_Letters.h"

std::string reverseOnlyLetters(std::string s) {
    int ascii_UPPERCASE_start = 65; //A
    int ascii_UPPERCASE_end = 90; //Z
    
    int ascii_lowercase_start = 97; //a
    int ascii_lowercase_end = 122; //z
    
    char temp;

    bool left_swap = false;
    bool right_swap = false;
    
    int left = 0;
    int right = s.size() - 1; //string have space in end?

      while (left < right) {
        left_swap = false;
	    right_swap = false;
        if (int(s[left]) >= ascii_lowercase_start && int(s[left]) <= ascii_lowercase_end ||
            int(s[left]) >= ascii_UPPERCASE_start && int(s[left]) <= ascii_UPPERCASE_end
        ) left_swap = true;
        
        if (int(s[right]) >= ascii_lowercase_start && int(s[right]) <= ascii_lowercase_end ||
            int(s[right]) >= ascii_UPPERCASE_start && int(s[right]) <= ascii_UPPERCASE_end
        ) right_swap = true;
         
        if (left_swap == true && right_swap == true) {
	            temp = s[left];
	            s[left] = s[right];
	            s[right] = temp; 
                left++;
                right--;
	    }
        if (left_swap == false) left++;
        if (right_swap == false) right--;
    }
    return s;    
}
