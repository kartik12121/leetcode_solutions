class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>result(2,0);
        int pixel=0;
        for(int i=0;i<s.length();i++)
        {
            int chwidths=widths[s[i]-'a'];
            if(pixel+chwidths<=100)
            {
                pixel+=chwidths;
            }
            else 
            {
                result[0]++;
                pixel=0;
                i--;
            }
        }
        result[0]++;
        result[1]=pixel;
        return result;

    }
};