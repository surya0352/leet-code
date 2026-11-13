class Solution {
public:
    int search(vector<int>& nums, int target) {

        unordered_map<int, int> idx;
        for (int i = 0; i < nums.size(); i++) {
            idx[nums[i]] = i;
        }

        int start = 0;
        int end = nums.size() - 1;

        sort(nums.begin(), nums.end());
        int ans=-1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (nums[mid] == target) {
                ans = nums[mid];
                break;
            } else if (nums[mid] < target) {

                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        if(ans!=-1)
        {
            return idx[ans];
        }
        else
        {
            return ans;
        }
    }
};