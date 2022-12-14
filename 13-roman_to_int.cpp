#include <iostream>
#include <set>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val;
        val['I']= 1;
        val['V']= 5;
        val['X']= 10;
        val['L']=50;
        val['C']= 100;
        val['D']= 500;
        val['M']= 1000;
        int result = 0;
        for (int i = s.size()-1; i >= 0; i--) {
            if (i != 0 && val[s[i-1]] < val[s[i]] ) {  //if the numeral is smaller than the one before it
                result += val[s[i]] - val[s[i-1]];
                i--;
                continue;
            }
            result += val[s[i]];
        }
        return result;
    }
};
