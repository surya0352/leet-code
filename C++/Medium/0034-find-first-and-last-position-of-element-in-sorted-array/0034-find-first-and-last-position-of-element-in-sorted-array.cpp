class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                int leftindex = i;
                int rgtindex = i;

              while (rgtindex + 1 < nums.size() &&
       nums[rgtindex + 1] == target) {
                    rgtindex++;
                }

                return {leftindex, rgtindex};
            }
        }

        return {-1, -1};
    }
};