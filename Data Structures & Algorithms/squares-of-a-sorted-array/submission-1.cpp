class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         vector<int>output;
         vector<int>a;
         vector<int>b;
         for( auto it: nums){
            if( it <= 0) a.emplace_back(it * it);
            else b.emplace_back(it * it);

         }
         reverse(a.begin(),a.end());
         merge(a.begin(),a.end(),b.begin(),b.end(),back_inserter(output));
         return output;
    }
};