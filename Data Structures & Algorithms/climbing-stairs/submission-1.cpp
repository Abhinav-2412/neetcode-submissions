#include <bits/stdc++.h>
class Solution {
public:
    int dp[46];
    int fn( int x){
        if( x == 1 or x == 2) return x;
        if(dp[x] != -1) return dp[x];
        return dp[x] = fn( x -1) + fn(x -2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return fn(n);
    }
};
