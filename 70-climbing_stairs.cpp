//if you draw out the pattern and everything you'll see it's pretty much a slightly altered version of fibonacci

class Solution {
public:
    int climbStairs(int n) {
        int arr[46]; 
        arr[1] = 1;
        arr[2] = 2;
        
        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1]+arr[i-2];
        }
        return arr[n];
        
    }
};
