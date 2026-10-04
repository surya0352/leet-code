class Solution {
public:
    int minRotations(string s) {
        int from=0;
        int to=s[0]-'0';
        int rot=0;
        for(int i=1;i<=s.length();i++)
            {
                int diff=abs(from-to);
                 rot += min(diff, 10 - diff);
                from=to;
                to=s[i]-'0';
            }
        return rot;
    }
};