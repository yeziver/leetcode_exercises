//i used a similar search as the one used in problem 35, search insert position, since both are binary searches and quite similar

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (target > nums[nums.size()-1]) {
            return -1;
        } else if (target < nums[0]) {
            return -1;
        }
        
        int st = 0; //iterating
        int en = nums.size()-1; //end of each section
        int mid; //middle...
        
        while (st <= en) {
            mid = (st+en)/2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                en = mid-1;
            } else {
                st = mid+1;
            } //update mid to fit requirements
        }
        return -1;
    }
};
