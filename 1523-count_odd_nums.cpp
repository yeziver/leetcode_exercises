//BRUTE FORCE METHOD (VERY SLOW)

class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            if (i % 2 != 0) {
                count ++;
            }
        }
        return count;
    }
};

///////

class Solution {
public:
    int countOdds(int low, int high) {
        int diff = high-low;
        int result = diff/2;
        if (high % 2 || low % 2) {
            result++;
        }
        return result;
    }
};
