class Solution {
public:
    bool selfdivisor(int num)
    {
        int copy=num;
        while(copy>0)
        {
            int i=copy%10;
            if(i==0 || num%i!=0)return false;
            copy/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++)
        {
            if(selfdivisor(i))result.push_back(i);
        }
        return result;
    }
};