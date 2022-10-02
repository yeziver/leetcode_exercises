// w/ built in funcs

Solution {
public:
    string rem(string s) {
        auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
            return std::ispunct(c);
        });
 
        s.erase(it, s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }
    
    bool isPalindrome(string s) {
        string temp = rem(s);
        string temp2 = rem(s);
        reverse(temp.begin(), temp.end());
        if (temp == temp2) {
            return true;
        } 
        return false;
    }
};

//making a new string from the old string

class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' and s[i] <= 'z') {
                res += s[i];
            } else if (s[i] >= 'A' and s[i] <= 'Z') {
                res += s[i] + 32;
            } else if(s[i] >= 48 and s[i]<= 57) { //for the numbers
                res += s[i];
            }
        }
        string ans = res;
        reverse(res.begin(), res.end());
        if (ans == res) return true;
        else return false;
    }
};


//scan from left to right and reverse and stuff yk

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        
        while (left < right) {
            if (tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;
            } else if (!isalpha(s[left]) && !isdigit(s[left])) {
                left++;
            } else if (!isdigit(s[right]) && !isalpha(s[right])) {
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
