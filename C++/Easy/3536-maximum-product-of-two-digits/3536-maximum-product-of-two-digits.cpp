class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        while(n>0)
        {
            int dig=n%10;
            nums.push_back(dig);
            n/=10;
        }
        sort(nums.begin(),nums.end());
       int size=nums.size();
       return nums[size-1]*nums[size-2];
    }

};