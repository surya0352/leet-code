class Solution {
public:
    void make(vector<string>&v,int n,int open,int close,string s)
    {
        if(open==n&&close==n)
        {
            v.push_back(s);
            return ;
        }
        if(open<n)
        {
            make(v,n,open+1,close,s+'(');
        }
        if(close<open)
        {
            make(v,n,open,close+1,s+')');
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=0;
        int close=0;
        make(ans,n,open,close,"");
        return ans;
    }
};