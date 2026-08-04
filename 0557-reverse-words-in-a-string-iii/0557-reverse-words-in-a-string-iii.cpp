class Solution {
public:
string reverse(int i,int j,string s)
{
    while(i<j)
    {
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
}
    string reverseWords(string s) {
        int i=0;
        int j=0;
        while(j<=s.size())
        {
            if(j==s.size() || s[j]==' ')
            {
               s=reverse(i,j-1,s);
                i=j+1;
            }
            j++;
        }
        return s;
    }
};