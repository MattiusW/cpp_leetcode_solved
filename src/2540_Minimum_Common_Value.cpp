#include "2540_Minimum_Common_Value.h"

int getCommon(std::vector<int>& nums1, std::vector<int>& nums2) {
      int j = 0;
        
        for (int i = 0; i < nums1.size(); i++)
        {   
            while (nums2[j] < nums1[i] && j < nums2.size() - 1)
            {
                j++;
            }

            if (nums1[i] == nums2[j])
            {
                return nums1[i];
            }
        }
        
        return -1;
}
