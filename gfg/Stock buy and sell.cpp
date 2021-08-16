class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> ans;
        vector<int> v;
        int i=0;
        while(i<n-1){
            while((i<n-1) && (A[i+1]<=A[i]))
                i=i+1;
            if(i==n-1){
                break;
            }
            int buy=i++;
            
            while ((i < n) && (A[i] >= A[i - 1]))
                i++;
            int sell=i-1;
            v.push_back(buy);
            v.push_back(sell);
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
