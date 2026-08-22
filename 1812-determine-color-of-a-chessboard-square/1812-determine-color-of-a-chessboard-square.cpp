class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int i=coordinates[0]-'a';
        int j=coordinates[1];
        if(i%2==0)
        {
            return j%2==0;
        }
        return j%2!=0;
    }
};