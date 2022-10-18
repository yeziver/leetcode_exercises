class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        if (strs.size() == 1) {
            return strs[0];
        }
        int count = 0;
        string result = "";
        for (int i = 0; i < strs.size(); i++) {
            for (int j = i+1; j < strs.size(); j++) {
                string temp = strs[i];
                string temp2 = strs[j];
                if (temp[count] == temp2[count]) {
                    result.push_back(strs[i][count]);
                    count++;
                } else {
                    return result;;
                }
            }
            count++;
        }
        return result;
    }
};
