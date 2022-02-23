class Solution {
  public:
    long long int UnboundedSubsetSum(int arr[],int W,int n)
    {
    long long int t[n+1][W+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<W+1;j++)
        {
            if(i==0)
            {
                t[i][j]=0;
            }
            if(j==0)
            {
                t[i][j]=1;
            }
        }
    }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<W+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=t[i][j-arr[i-1]] + t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][W];
    }
    long long int count(int S[], int m, int Sum) {
        return UnboundedSubsetSum(S,Sum,m);
    }
};
