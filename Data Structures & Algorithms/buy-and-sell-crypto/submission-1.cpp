class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int maxi=0;
    for(int i = 0 ; i<prices.size(); i++){
        for(int j=i; j<prices.size();j++){
            ans=prices[j]-prices[i];
            maxi=max(ans,maxi);
            if(maxi<0){
                return prices[i];
            }
            
        }
    }
    return maxi;
        }
      };
  