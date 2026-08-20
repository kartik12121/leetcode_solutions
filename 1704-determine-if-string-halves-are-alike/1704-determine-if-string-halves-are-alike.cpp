class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0;
        int mid=s.length()/2;
        int vowel1=0;
        int vowel2=0;
        string vowel="aeiouAEIOU";
       while(i<mid)
       {
        int j=mid+i;
        if(vowel.find(s[i])!=string::npos)vowel1++;
        if(vowel.find(s[j])!=string::npos)vowel2++;
        i++;
       }
        return vowel1==vowel2;
    }
};