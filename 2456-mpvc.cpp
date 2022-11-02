class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        vector<int> highestViewsIndex;
        int max = 0;

        for (int i = 0; i < creators.size(); i++) {
            for (int j = i+1; j < creators.size(); j++) {
                if (creators[i] == creators[j]) {
                    if (views[i] > views[j]) {
                        views[i] += views[j];
                        views.erase(views.begin()+j);
                        ids.erase(ids.begin()+j);
                        creators.erase(creators.begin()+j);
                        j--;
                    } else if (views[j] > views[i]) {
                        views[j] += views[i];
                        views.erase(views.begin()+i);
                        ids.erase(ids.begin()+i);
                        creators.erase(creators.begin()+i);
                        j--;
                    } else {
                        views[i] += views[j];
                        views.erase(views.begin()+j);
                        ids.erase(ids.begin()+j);
                        creators.erase(creators.begin()+j);
                        j--;     
                    }

                }
            }
        }

        for (int i = 0; i < views.size(); i++) {
            if (views[i] > max) {
                max = views[i];
            }
        }
        for (int i = 0; i < views.size(); i++) {
            if (views[i] == max) {
                highestViewsIndex.push_back(i);
            }
        }
        
        vector<vector<string>> results;
        for (int i = 0; i < highestViewsIndex.size(); i++) {
            vector<string> temp = {"",""};
            int cur = highestViewsIndex[i];
            temp[0] = creators[cur];
            temp[1] = ids[cur];
            results.push_back(temp);
        }

        if (results.size() == 1) {
            return results;
        }

        return results;
    }
};
