class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        long long i = 1;
        while (n > 0) {
            int dig = n % 10;
            int place = dig * i;
            if (dig != 0) {
                ans.push_back(place);
            }
            i = i * 10;
            n /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};