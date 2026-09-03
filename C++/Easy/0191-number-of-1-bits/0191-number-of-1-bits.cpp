class Solution {
public:
    int hammingWeight(int n) {
        vector<int>ans;
        while(n>0)
        {
            int dig=n%2;
            ans.push_back(dig);
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        int count=0;
        for(int it:ans)
        {
            if(it==1)
            {
                count++;
            }
        }
        return count;

    }
};