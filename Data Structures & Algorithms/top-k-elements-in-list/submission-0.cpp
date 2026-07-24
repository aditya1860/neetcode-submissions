class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<pair<int,int>> freq; 

        for(int i = 0; i < nums.size(); i++)
        {
    
            bool alreadyCounted = false;

            for(int j = 0; j < i; j++)
            {
                if(nums[i] == nums[j])
                {
                    alreadyCounted = true;
                    break;
                }
            }

            if(alreadyCounted)
                continue;

            int count = 0;


            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                    count++;
            }

            freq.push_back({count, nums[i]});
        }

        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        vector<int> ans;

        for(int i = 0; i < k; i++)
        {
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};