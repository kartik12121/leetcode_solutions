class Solution {
public:
    int maxDepth(string s) {
        int open=0;
       int  maxm=0;
        for(char ch:s)
        {
            if(ch=='(')open++;
            else if(ch==')')open--;
            maxm=max(maxm,open);        }
        return maxm;
    }
};