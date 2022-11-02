class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        vector<int> highestViewsIndex;
        int max = 0;
        for (int i = 0; i < views.size(); i++) {
            if (view[i] > max) {
                max = view[i];
            }
        }
        for (int i = 0; i < views.size(); i++) {
            if (view[i] == max) {
                highestViewsIndex.push_back(i);
            }
        }
        
        vector<vector<string>> results;
        for (int i = 0; i < highestViewsIndex.size(); i++) {
            vector<string> temp;
            temp.push
        }
    }
};
