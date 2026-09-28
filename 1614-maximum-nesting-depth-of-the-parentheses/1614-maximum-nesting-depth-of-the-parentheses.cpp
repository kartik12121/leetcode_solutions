class Solution {
public:
    int maxDepth(string s) {
        int open=0;
       int  maxm=0;
        for(char ch:s)
        {
            if(ch=='('){open++;
             maxm=max(maxm,open); }
            else if(ch==')'){open--;
            if(open<0)open=0;}
       }
        return maxm;
    }
};