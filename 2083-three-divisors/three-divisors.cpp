class Solution {
public:
    bool isThree(int n) {
        int divisor_count;

        for(int i=1;i<=n;i++){
            if(n%i==0){
                divisor_count++;
            }
        }
        
        if(divisor_count==3){
            return true;
        }
        return false;
    }
};