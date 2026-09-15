class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int x:nums)
        {
            freq[x]++;
        }
        int sum=0;
        for(auto x:freq)
        {
            if(x.second==1)
            {
                sum+=x.first;
            }
        }
        return sum;
    }
};