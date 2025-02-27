class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> frequency_map;
        for(int i=0;i<nums.size();i++){
            frequency_map[nums[i]]++;
            if(frequency_map[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
