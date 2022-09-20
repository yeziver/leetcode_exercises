//USING MAP

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freqs;
        for (auto x: nums) {
            freqs[x]++;
        }
        for (auto z: freqs) {
            if (z.second == 1) {
                return z.first;
            }
        }
        return -1;
        }
};


//LOOPING

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i+=2) {
            if (nums[i] != nums[i-1]) {
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
    }
};
