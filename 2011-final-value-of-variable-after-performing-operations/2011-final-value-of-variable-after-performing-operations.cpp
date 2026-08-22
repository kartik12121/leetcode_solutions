class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        for(auto i:operations)
        {
            if(i[0]=='-' || i[1]=='-')c--;
            else c++;
        }
        return c;
    }
};