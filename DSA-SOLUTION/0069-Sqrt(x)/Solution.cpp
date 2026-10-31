class Solution {
public:
    int mySqrt(int x) {

        if(x<2){
            return x;
        }
        int start=0,end=x,ans;
        while(start<=end){
            int mid=(start+end)/2;
            if(mid==x/mid){
                return mid;
            }
            else if(mid<x/mid){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;

            }
        }
        return ans;
        
    }
};
