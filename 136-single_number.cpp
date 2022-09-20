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
