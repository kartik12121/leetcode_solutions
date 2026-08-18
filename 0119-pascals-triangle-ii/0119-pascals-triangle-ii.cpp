class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int>arr(i+1,1);
            for(int j=1;j<i;j++)
            {
                arr[j]=v[i-1][j-1]+v[i-1][j];
            }
            v.push_back(arr);
        }
        return v[rowIndex];
    }
};