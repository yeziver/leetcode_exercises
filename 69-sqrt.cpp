class Solution {
public:
    int mySqrt(int x) {
        for (unsigned long int i = 0; i <= x; i++) {
            if (i * i == x) {
                return i;
            }
            if (i * i > x) {
                return i -1;
            }
        }
        return -1;
    }
};


//ALGORITHM

class Solution {
public:
    int mySqrt(int x) {
          long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
    }
};
