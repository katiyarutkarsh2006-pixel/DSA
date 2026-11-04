class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int length = nums.size();
        for(int i=0;i<=nums.size();i++){
            if(length % (i+1) == 0){
                sum = sum + (nums[i]*nums[i]);
            }
        }
        return sum;
    }
};