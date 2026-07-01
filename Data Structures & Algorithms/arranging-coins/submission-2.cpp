class Solution {
public:
    int arrangeCoins(int n) {
        int s = 1;
        int e = n;
        int ans = 0;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (1LL * mid * (mid + 1) / 2 >= n) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        if (1LL * ans * (ans + 1) / 2 == n)
            return ans;

        return ans - 1;
    }
};