class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> freq1;
        for (char ch : s) {
            freq1[ch]++;
        }
        unordered_map<char, int> freq2;
        for (char ch : t) {
            freq2[ch]++;
        }
        for (auto x : freq2) {
            if (x.second != freq1[x.first]) {
                return x.first;
            }
        }
        return ' ';
    }
};