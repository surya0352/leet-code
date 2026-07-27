class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string oper:operations)
        {
            if(oper=="--X"||oper=="X--")
            {
                x--;
            }
            else if(oper=="X++"||oper=="++X")
            {
                x++;
            }
            
        }
        return x;
    }
};