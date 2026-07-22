class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int n:arr)
        {
            freq[n]++;
        }
        int ans=-1;
        for(auto x:freq)
        {
            if(x.first==x.second)
            {
                ans = max(ans, x.first);
            }
        }
        return ans;
    }
};