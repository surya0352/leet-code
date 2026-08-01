class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans;
        for (int i = 0; i <= n; i++) {
            if (i == 0)
                ans.push_back(0);
            else
                ans.push_back(ans[i / 2] + i % 2);
        }
        return ans;
    }
};