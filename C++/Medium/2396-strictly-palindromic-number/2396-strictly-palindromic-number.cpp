class Solution {
public:
    string baseConvert(int n, int b) {
        string ans = "";

        while (n > 0) {
            int rem = n % b;
            ans += (rem + '0');
            n /= b;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i < n - 1; i++) {
            string after = baseConvert(n, i);
            string rev = after;
            reverse(after.begin(), after.end());
            if (after != rev) {
                return false;
            }
        }
        return true;
    }
};