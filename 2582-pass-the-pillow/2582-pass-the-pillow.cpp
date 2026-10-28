class Solution {
public:
    int passThePillow(int n, int time) {
        int i=0,direction=-1;
        while(time>0)
        {
            if(i==n-1 || i==0)direction*=-1;
            i+=direction;
            time--;
        }
        return i+1;
    }
};