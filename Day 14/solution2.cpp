class Solution {
public:
    int reverse(int x) {
        long revnum=0;
        while(x!=0){
            int last=x%10;
           if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && last > 7)) return 0;
           if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && last < -8)) return 0;
            revnum=revnum*10+last;
            x=x/10;
        }
        return revnum;
    }
};