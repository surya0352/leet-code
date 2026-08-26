class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int vol,maxWater=INT_MIN;
        while(left<right)
        {
            int width=right-left;
            if(height[left]<height[right])
            {
                vol=width*height[left];
                left++;
            }
            else
            {
                vol=width*height[right];
                right--;
            }
            maxWater=max(maxWater,vol);
        }
        return maxWater;
    }
};