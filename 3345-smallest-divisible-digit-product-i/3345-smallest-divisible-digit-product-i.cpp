class Solution {
public:
    int smallestNumber(int n, int t) {
        int pro=1;
        int current;
        for(int i=n;i<n+t;i++)
        {
            current=i;
            while(current>0)
            {
                pro*=current%10;
                current=current/10;
            }
            if(pro%t==0)return i;
            pro=1;
        }
        return -1;
    }
};