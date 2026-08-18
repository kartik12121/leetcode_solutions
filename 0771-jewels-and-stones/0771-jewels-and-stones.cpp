class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto i:stones)
        {
            if(jewels.contains(i))count++;
        }
        return count;
    }
};