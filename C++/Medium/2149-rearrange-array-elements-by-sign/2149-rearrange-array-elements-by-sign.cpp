class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> A1, A2;
        vector<int>ans;
        for (int x : nums) {
            if (x >= 0) {
                A1.push_back(x);
            } else {
                A2.push_back(x);
            }
        }
        
        for(int i=0;i<nums.size()/2;i++)
        {
            ans.push_back(A1[i]);
            ans.push_back(A2[i]);
        }
        return ans;
    }
};