#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int minStartValue(std::vector<int>& nums) 
{   
    std::vector<int> prefix;

    prefix.push_back(nums[0]);
    
    int ans = prefix[0];

    // std::cout << "Orginal nums: " << std::endl;
    // for (int i : nums)
    // {
    //     std::cout << i << " ";
    // }        
    // std::cout << std::endl;

    for (int i = 1; i < nums.size(); i++) 
    {
        prefix.push_back(nums[i] + prefix[prefix.size() - 1]);
        ans = std::min(ans, prefix[i]);
    }

    // std::cout << "Prefix nums: " << std::endl;

    // for (int i : prefix) std::cout << i << " ";

    // std::cout << std::endl;
    
    return ans < 0 ? abs(ans) + 1 : 1;
}