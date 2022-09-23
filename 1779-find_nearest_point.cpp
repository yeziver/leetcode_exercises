class Solution {
public:
  int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
      sort(points.begin(), points.end());
      int least = INT_MAX;
      int dist;
      int index = -1;
      for (int i = 0; i < points.size(); i++ ) {
          if (x == points[i][0] || y == points[i][1]) {
              dist = abs(points[i][0] - x) + abs(points[i][1] - y);
              if (dist < least) {
                  least = dist;
                  index = i;
              }
          }
      }
     return index;
  }
};
