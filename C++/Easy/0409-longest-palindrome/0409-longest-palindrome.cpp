class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }
        int counter = 0, ans = 0;
        for (auto x : freq) {
            ans += (x.second / 2) * 2;
            if (x.second % 2 == 1) {
                counter++;
            }
        }
        if (counter > 0) {
            return ans + 1;
        }
        return ans;
    }
};