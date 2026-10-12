class Solution {
public:
    bool isPrefixAndSuffix(string a,string b)
    {
        int n1=a.size();
        int n2=b.size();
        if(n1>n2)return false;
        return b.substr(0,n1)==a && b.substr(n2-n1)==a;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int count=0;
         for(int i=0;i<words.size();i++)
         {
            for(int j=i+1;j<words.size();j++)
            {
                if(isPrefixAndSuffix(words[i],words[j]))count++;
            }
         }
         return count;
    }
};