class Solution {
public:
    string deciBin(uint32_t n) {
        string ans = "";

        for (int i = 0; i < 32; i++) {
            int rem = n % 2;
            ans += (rem + '0');
            n /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
   
    uint32_t binDeci(string num) {
        uint32_t ans = 0;

        for (int i = 0; i < num.size(); i++) {
            int dig = num[i] - '0';
            ans = ans * 2 + dig;
        }

        return ans;
    }

    int reverseBits(int n) {
        uint32_t bina = (uint32_t)(n);
        string number = deciBin(bina);
        reverse(begin(number), end(number));
        return (int)binDeci(number);
    }
};