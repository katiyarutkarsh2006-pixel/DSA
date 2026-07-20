class Solution {
public:
    int alternateDigitSum(int n) {
        int count = 0;
        int reverse = 0;
        while(n!=0){
            int digit = n%10;
            reverse = reverse*10+digit;
            n = n/10;
        }
        int sum = 0;
        while(reverse!=0){
            int digit2 = reverse%10;
            if(count%2==0){
                sum = sum + digit2;
            }
            else{
                sum = sum - digit2;
            }
            reverse = reverse/10;
            count++;
        }
        return sum;
    }
};