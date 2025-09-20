#include "2000_Reverse_Prefix_of_Word.h"

std::string reversePrefix(std::string word, char ch) {
    char temp = ' ';
    int j = 0;
    int k = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == ch)
        {
            // std::cout << word[i] << " = " << ch << std::endl;
            k = i;
            while (j < k)
            {   
                temp = word[j];
                // std::cout << temp << " temp = word[j]: " << word[j] << std::endl;
                word[j] = word[k];
                // std::cout << word[j] << " word[j] = word[i]; " << word[i] << std::endl;
                word[k] = temp;
                // std::cout << word[k] << " word[i] = temp " << temp << std::endl;
                // std::cout << word << std::endl;
                j++;
                k--;
            }
            break;
        }
    }
    return word;
}