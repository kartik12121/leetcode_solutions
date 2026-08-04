class Solution {
public:
    int countBinarySubstrings(string s) {
        int previous=0;
        int current=1;
        int n=s.size();
        int total=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])current++;
            else
            {
                total+=min(previous,current);
                previous=current;
                current =1;
            }
        }
        return total+min(previous,current);
    }
};