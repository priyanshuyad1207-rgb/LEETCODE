class Solution {
public:
    int findMin(vector<int>& nums) {

        int n=nums.size();
        int ans=nums[0];

        int start=0,end=n-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]>=ans){
                start=mid+1;

            }
            else{
                ans=nums[mid];
                end=mid-1;
            }
         
        }

        return ans;
    }
};
