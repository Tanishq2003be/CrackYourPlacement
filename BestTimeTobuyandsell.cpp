class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]-mini>maxi)
            maxi=prices[i]-mini;

            if(prices[i]<mini)
            mini=prices[i];
        }
        return maxi;
    }
};