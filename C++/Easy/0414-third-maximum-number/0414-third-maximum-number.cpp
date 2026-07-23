class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> num;
        vector<int> ans;
        for (int x : nums) {
            num.insert(x);
        }
        for (int x : num) {
            ans.push_back(x);
        }
        if (ans.size() < 3) {
            return ans[ans.size() - 1];
        }
        return ans[ans.size() - 3];
    }
};