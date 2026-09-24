class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int sum = 0;
            while (temp > 0) {
                int dig = temp % 10;
                sum += dig;
                temp /= 10;
            }
            if (sum == i) {
                ans = min(ans, i);
            }
        }
        if (ans == INT_MAX) {
            return -1;
        }
        return ans;
    }
};