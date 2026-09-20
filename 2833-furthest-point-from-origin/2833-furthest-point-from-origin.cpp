class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l=0,r=0,s=0;
        for(char i:moves)
        {
            if(i=='L')l++;
            else if(i=='R')r++;
            else s++;
        }
        if(l>r)return l+s-r;
        return r+s-l;
    }
};