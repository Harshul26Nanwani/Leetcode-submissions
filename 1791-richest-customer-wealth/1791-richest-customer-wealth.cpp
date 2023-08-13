class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int x=0;
        int n=accounts.size();
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<accounts[i].size();j++){
                t+=accounts[i][j];
            }
            x=max(x,t);
        }
        return x;
    }
};