class Solution {
public:
    bool isPalindromic(string s) {
        string ans = "";
        for (char ch : s) {
            int ascii = int(ch);
            string bin = "";
            while (ascii > 0) {
                int rem = ascii % 2;
                bin += (rem + '0');
                ascii /= 2;
            }
            reverse(bin.begin(), bin.end());
             while (bin.length() < 8) {
                bin = "0" + bin;
            }
            ans += bin;
        }
        string rev = ans;
        reverse(rev.begin(), rev.end());
        if (ans == rev) {
            return true;
        }
        return false;
    }
};