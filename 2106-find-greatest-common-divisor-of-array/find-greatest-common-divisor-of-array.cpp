class Solution {
public:

    int MaxNum(vector<int>& nums){
        int max = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
            }
        }
        return max;
    }

    int MinNum(vector<int>& nums){
        int min = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                min = nums[i];
            }
        }
        return min;
    }
    int findGCD(vector<int>& nums) {
        int max_num = MaxNum(nums);
        int min_num = MinNum(nums);
        if (min_num == 0){
             return max_num;
        }
    return gcd(min_num, max_num % min_num);
    }
};