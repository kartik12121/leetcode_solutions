class Solution {
public:
    int maxScore(string s) {
         int bestscore=0;
         int ones=0;
         for(auto i:s)
         {
            if(i=='1')ones++;
         }
         int leftones=0;
         int leftzeroes=0;
         for(int i=0;i<s.length()-1;i++)
         {
            if(s[i]=='0')leftzeroes++;
            else leftones++;
            int score=leftzeroes+(ones-leftones);
            bestscore=max(bestscore,score);
         }
         return bestscore;
    }
};