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
