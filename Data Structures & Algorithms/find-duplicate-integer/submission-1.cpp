class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    vector<int>frequency(nums.size(),0);
    for( int i = 0 ; i< nums.size(); i++){
    frequency[nums[i]]++;
    }
    for(int i = 0 ; i<frequency.size();i++){
        if(frequency[i]>1){
        return i;
        }
    }
    return -1;
    }
};