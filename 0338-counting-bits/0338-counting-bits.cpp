class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>arr(n+1,0);
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<32;j++)
            {
                if(((i>>j)&1)==1)arr[i]++;
            }
        }
        return arr;
    }
};