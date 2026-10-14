class Solution {
public:
    int findComplement(int num) {
        int rem,mul=1,sum=0;
        // if(num==0){
        //     return 1;
        // }
        while(num){
            rem=num%2;
            rem=rem^1;
            num=num/2;
            sum=sum+mul*rem;
            mul=mul*2;


        }
        return sum;

    }
};
