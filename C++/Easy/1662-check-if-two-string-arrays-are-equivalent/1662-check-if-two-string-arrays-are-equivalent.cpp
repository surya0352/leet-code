class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        string w1="",w2="";
        for(int i=0;i<n1;i++)
        {
            w1+=word1[i];
        }
        for(int i=0;i<n2;i++)
        {
            w2+=word2[i];
        }
        if(w1==w2)
        {
            return true;
        }
        return false;
    }
};