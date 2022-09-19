class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, finalLen = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                len++;
            }
            else{
                if(len != 0){
                    finalLen = len;
                    len = 0;
                }
            }
            if(len != 0)
                finalLen = len;
        }
        return finalLen;
    }
};
