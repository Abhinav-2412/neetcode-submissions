#define ll long long
#define v vector<ll>
class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        v helper( 256,0);
        for( auto it: t) helper[it]++;
        ll n = s.length();
        ll required = t.size();
        ll tail = 0;
        ll head = -1;
        v check(256,0);
        ll counter = 0;
        ll i =-1;
        ll mini = 1e9;
        while( tail <n){
            while( head + 1 < n and counter < required){
                head++;
                check[s[head]]++;
                if( helper[s[head]]>0 and check[s[head]] <= helper[s[head]]) counter++;
            }
            if( counter == required){
                  if( head - tail + 1 < mini){
                    mini = head - tail +1;
                    i = tail;
                  }
            }
            if( tail <= head){
                if(helper[s[tail]] and check[s[tail]] == helper[s[tail]]) counter--;
                check[s[tail]]--;
                tail++;
            }
            else{
                tail++;
                head = tail -1;
            }
        }
        if(i == -1) return "";
        return s.substr(i, mini);
    }
};
