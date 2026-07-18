class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        int max_vowel = 0, max_conso = 0;
        for (char ch : s) {
            freq[ch]++;
        }
        for (auto x : freq) {
            if (x.first == 'a' || x.first == 'e' || x.first == 'i' ||
                x.first == 'o' || x.first == 'u') {
                max_vowel = max(max_vowel, x.second);
            } else {
                max_conso = max(max_conso, x.second);
            }
        }
        return max_vowel + max_conso;
    }
};