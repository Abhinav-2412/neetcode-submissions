#define ll long long
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<ll>pq;
        ll ans =0;
        for(auto it: gifts) pq.emplace(it);
        while(k--){
            ll x = pq.top();
            pq.pop();
            pq.emplace(sqrt(x));
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};