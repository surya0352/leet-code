class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size()-1;i+=2)
        {
            string num1=to_string(nums[i]);
            string num2=to_string(nums[i+1]);
            int number=stoi(num1+num2);
            vec.push_back(number); 
        }
        return *min_element(begin(vec),end(vec));
    }
};