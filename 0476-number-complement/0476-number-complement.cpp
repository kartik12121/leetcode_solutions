class Solution {
public:
    int findComplement(int num) {
        int i=num,count=0;
        while(i!=0)
        {
            i=i>>1;
            count++;
        }
        unsigned int a=pow(2,count);
        return num^(a-1);
    }
};