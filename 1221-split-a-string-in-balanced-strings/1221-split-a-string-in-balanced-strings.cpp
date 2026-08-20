class Solution {
public:
    int balancedStringSplit(string s) {
       int count=0;
       int l=0;
       int r=0; 
       for(char ch:s)
       {
        if(ch=='R')r++;
        if(ch=='L')l++;
        if(r!=0 && r==l)
        {
            count++;
            r=0;
            l=0;
        }
       }
       return count;
    }
};