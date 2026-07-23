class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            if(val<=9){
                sum1 = sum1+val;
            }
            else{
                sum2 = sum2+val;
            }
        }
        if(sum1>sum2 || sum2>sum1){
            return true;
        }
        return false;
    }
};