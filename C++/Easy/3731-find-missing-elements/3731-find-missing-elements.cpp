class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {

            int match = nums[i] + 1;

            while (match < nums[i + 1]) {
                ans.push_back(match);
                match++;
            }
        }
        return ans;
    }
};