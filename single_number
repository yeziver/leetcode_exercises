#include <iostream>
#include <algorithm>
#include <vector>

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end()); // doesn't work because it only checks if there are duplicates not 
        bool wasUnique;
        for (int i = 0; i < nums.size(); i++) {
            wasUnique = (it == nums.end());
            if (wasUnique) {
                return nums[i];
                continue;
            } 
        }
        return 0;
    }
};
