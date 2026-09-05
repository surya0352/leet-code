class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        for (int i = 0; i < coordinates.size() - 2; i++) {
            int m1 = coordinates[i + 1][0] - coordinates[i][0];
            int m2 = coordinates[i + 1][1] - coordinates[i][1];
            int n1 = coordinates[i + 2][0] - coordinates[i][0];
            int n2 = coordinates[i + 2][1] - coordinates[i][1];
            if (m2*n1!=n2*m1) {
                return false;
            }
        }
        return true;
    }
};