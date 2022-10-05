//https://math.stackexchange.com/questions/1933385/repeated-sum-of-square-of-digits-always-arrives-at-1-or-89?newreg=196ab08d425043ec80cf7ff4c22fb1f1

class Solution {
public:
    int digits(int x) {
        int result = 0;
        while (x > 0) {
            int temp = x%10;
            result += (temp*temp);
            x /= 10;
        }
        return result;
    }
    
    bool isHappy(int n) {
        n = digits(n);
        if (n == 89) {
            return false;
        } else if (n == 1) {
            return true;
        }
        
        return isHappy(n);
    }
};
