class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        nums.erase((remove(nums.begin(), nums.end(), 0)), nums.end());
        int newSize=nums.size();
        int n=size-newSize;
        for(int i=0;i<n;i++)
        {
            nums.push_back(0);
        }   
    }
};