class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int count=0;
        for(int i=0;i<details.size();i++)
        {
            int n=details[i].length();
            string ageString = "";
            ageString += details[i][n-4];
            ageString += details[i][n-3];
            int age = stoi(ageString);
            if(age>60)
            {
                count++;
            }
        }
        return count;
    }
};