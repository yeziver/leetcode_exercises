//used recursion + binary sort

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int temp(int l, int r) {
        if (l >= r) {
            if (isBadVersion(r)) {
                return r;
            } else {
                return r+1;
            }
        }
        int m = r - (r - l) / 2;
        
        if (isBadVersion(m)) {
            return temp(1, m-1);
        } else {
            return temp(m+1, r);
        }
    }
    
    int firstBadVersion(int n) {
        return temp(1, n);
    }
};
