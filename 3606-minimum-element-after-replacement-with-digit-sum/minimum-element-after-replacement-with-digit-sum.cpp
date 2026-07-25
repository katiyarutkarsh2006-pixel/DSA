class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i= 0;i<nums.size();i++){
            int val = nums[i];
            int sum = 0;
            while(val!=0){
                int digit = val%10;
                sum = sum+digit;
                val = val/10;
            }
            nums[i] = sum;
        }
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
};