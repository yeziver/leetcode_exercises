class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target > nums[nums.size()-1]) {
            return nums.size();
        } else if (target < nums[0]) {
            return 0;
        }
        
        int l = 0; //iterating
        int r = nums.size()-1; //end of each section
        int mid = l+(r-l)/2; //middle...
        
        while (l < r) {
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] >= target) {
                r = mid;
            } else {
                l = mid+1;
            }
            mid = l+(r-l)/2; //update mid to fit requirements
        }
        return mid;
    }
};
