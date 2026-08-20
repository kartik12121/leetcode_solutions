class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(auto word:words)
        {
            bool same=true;
            for(auto ch:word)
            {
                if(!allowed.contains(ch))
                { same=false;
                break;
                }
            }
            if(same==true)count++;
        }
        return count;
    }
};