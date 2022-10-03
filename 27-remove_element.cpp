class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> duplicate(nums.size());
        int count = 0;
        copy(nums.begin(), nums.end(), duplicate.begin());
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = 0;
        }
        
        for (int i = 0; i < duplicate.size(); i++) {
            if (duplicate[i] == val) {
                continue;
            } else {
                nums[count] = duplicate[i];
                count++;
            }
        }
        
        return count;;
    }
};
