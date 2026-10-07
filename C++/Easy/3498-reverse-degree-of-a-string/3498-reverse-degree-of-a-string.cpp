class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int alp=('z'-s[i]+1)*(i+1);
            sum+=alp;
        }
        return sum;

    }
};