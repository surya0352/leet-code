class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int num = 0;
        for (int i = 0; i < word.length(); i++) {
            num += (i / 8) + 1;
        }

        return num;
    }
};