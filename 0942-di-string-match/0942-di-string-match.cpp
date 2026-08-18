class Solution {
public:
    vector<int> diStringMatch(string s) {
       int d=s.length();
       int i=0;
       vector<int>result;
       for(auto a:s)
       {
        if(a=='D')
        {
            result.push_back(abs(d));
            d--;
        }
        else
        {
            result.push_back(abs(i));
            i--;
        }
       }
       result.push_back(abs(i));
       return result;

    }
};