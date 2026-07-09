class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> result;
        for(int i=0;i<nums.size();i++){
            result[nums[i]]++;
        }
        unordered_map<int,int> :: iterator it = result.begin();
        while(it!=result.end()){
            if(it->second>1){
                return true;
            }
            it++;
        }
        return false;
    }
};