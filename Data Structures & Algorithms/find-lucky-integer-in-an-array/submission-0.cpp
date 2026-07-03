#include <bits/stdc++.h>
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>helper(501,0);
        for( auto it: arr) helper[it]++;
        int maxi = -1;
        for(int i =1; i<helper.size();i++)
        {
            if( helper[i] == i) maxi = max( maxi, i);
        }
        return maxi;
    }
};