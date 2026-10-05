class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if( n > m) return false;
        vector<int>helper(256,0);
        for( auto it: s1)helper[it]++;
        vector<int>checker(256,0);
        int counter =0;
        int required = n;
        int tail =0;
        int head = -1;
        while(tail <m){
            while( head +1 <m and counter<required){
                head++;
                checker[s2[head]]++;
                if(helper[s2[head]] and checker[s2[head]] <= helper[s2[head]])counter++;

            }
            if( counter == required and head - tail + 1 == n) return true;

            if( tail <=head){
                if(helper[s2[tail]] and checker[s2[tail]] <= helper[s2[tail]])counter--;
                checker[s2[tail]]--;
                tail++;
            }
            else{
                tail++;
                head = tail -1;
            }
        }
        return false;
        

    }
};
