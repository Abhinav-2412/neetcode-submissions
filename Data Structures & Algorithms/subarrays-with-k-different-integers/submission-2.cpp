class Solution {
public:
  int fn(vector<int>& nums, int k) {
        map<int,int>helper;
        int tail =0;
        int head = -1;
        int n = nums.size();
        int ans =0;
        while( tail < n){
            while( head + 1 <n and (helper.size() <k or (helper.size()==k  and helper.count(nums[head +1])))){
                head++;
                helper[nums[head]]++;
            }
            if( helper.size() <= k) ans += head - tail +1;
            if(tail <= head){
                helper[nums[tail]]--;
                if( helper[nums[tail]]== 0) helper.erase(nums[tail]);
                tail++;
            }
            else{
                tail++;
                head = tail -1;
            }
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return fn( nums, k) - fn( nums, k-1);
    }
};