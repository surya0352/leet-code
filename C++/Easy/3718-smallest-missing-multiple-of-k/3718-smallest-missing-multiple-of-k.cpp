class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        for (int x : nums) {
            maxi = max(maxi, x);
        }
        int count=0;
        for (int i = 1; i <= maxi; i++) {
            if (i % k == 0) {
                if (find(nums.begin(), nums.end(), i) == nums.end()) {
                    return i;
                }
                else{
                    count++;
                }
            }
        }
        return count*k+k;
    }
};