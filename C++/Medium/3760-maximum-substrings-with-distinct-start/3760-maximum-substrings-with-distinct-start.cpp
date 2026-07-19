class Solution {
public:
    int maxDistinct(string s) {
        string str;
        for(char ch:s)
        {
            if(str.find(ch)==string::npos)
            {
                str+=ch;
            }
        }
        return str.length();
    }
};