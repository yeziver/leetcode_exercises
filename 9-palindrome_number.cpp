//FASTEST SPEED
//USES BUILT IN REVERSAL AND THEN COMPARES

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string temp = str;
        reverse(temp.begin(), temp.end());
        if (temp == str) {
            return true;
        } else {
            return false;
        }
    }
};

//CONVERTES TO STRING AND COMPARES NUMBERS FROM END TO MIDDLE

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        string str = to_string(x);
        string temp = str;
        int left = 0, right = temp.length()-1;
        
        while (left < right) {
            if (temp[left] != temp[right]) {
                return false;
            } 
            left++;
            right--;
        }
        return true;
    }
};

//MANUAL REVERSAL OF NUMBER

class Solution {
public:
    bool isPalindrome(int x) {
        unsigned long result = 0;
        unsigned long temp = x;
        while (x > 0) {
            result = (result*10)+(x%10);
            x /= 10;
        }
        if (result == temp) {
            return true;
        } else {
            return false;
        }
    }
};
