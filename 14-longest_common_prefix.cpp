

class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    string first = strs[0];
    for (int i = 0; i < first.size(); i++) {
        for (int j = 1; j < strs.size(); j++) {
            string temp = strs[j];
            if (temp[i] != first[i]) {
                return result;
            }
        }
        result += first[i];
    }
    return result;
}};
