class Solution {
public:
    
    int mySqrt(int x) {
          long r = x;
        while (r*r > x)
            r = (r + x/r) / 2;
        return r;
    }
    
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vect;
        for (int i = 0; i < nums.size()-1; i++) {
            vect.push_back(mySqrt(nums[i]));
        }
        return vect;
    }
};
