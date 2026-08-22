class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n;
        int digsum=0;
        int digprod=1;
        while(k>0){
            digsum+=k%10;
            digprod*=k%10;
            k=k/10;
        }
        int final=digprod+digsum;
        if(n%final==0){
            return true;
        }
        return false;
    }
};