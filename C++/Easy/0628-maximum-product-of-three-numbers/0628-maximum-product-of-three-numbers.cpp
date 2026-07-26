class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int first = INT_MIN, sec = INT_MIN, third = INT_MIN;
         int smallest = INT_MAX, secondSmallest = INT_MAX;
        for (int x : nums) {
            if (x > first) {
                third = sec;
                sec = first;
                first = x;
            } else if (x > sec) {
                third = sec;
                sec = x;
            } else if (x > third) {
                third = x;
            }
            if (x <= smallest) {
                secondSmallest = smallest;
                smallest = x;
            } 
            else if (x < secondSmallest) {
                secondSmallest = x;
            }
        }
        return max(first*sec*third,smallest*secondSmallest*first);
    }
};