class Solution {
public:
    int reverse(int x) {
        long long num=x;
        long long revnum=0; int sign=0;
        if(num<0){num=-num;
        sign=1;

        }
        while (num>0){
            int digit=num%10;
            num=num/10;
            revnum=10*revnum+digit;
        }
        if (sign==1){
            revnum=-revnum;
        }
        if(revnum<INT_MIN||revnum>INT_MAX){
            return 0;
        }else{
      return  revnum;}
        
    }
};