class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start=0;
        int n=prices.size();
        int result=0;
        int min_buy=INT_MAX;
        for(int i=0;i<n;++i) {
            if(prices[i]<min_buy){
                min_buy=prices[i];
            }
            if(prices[i]-min_buy >= result){
                result = prices[i]-min_buy;
            }
        }

        return result;
    }
};
