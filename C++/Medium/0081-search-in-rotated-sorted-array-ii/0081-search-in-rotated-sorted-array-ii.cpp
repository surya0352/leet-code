class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        sort(nums.begin(), nums.end());
        while (start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] == target) {
                return true;
                break;
            } else if (nums[mid] < target) {

                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};