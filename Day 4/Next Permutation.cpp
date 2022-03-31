class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int i=0;
        int in=0;


        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
            
        }
        if(i<0){
            reverse(nums.begin(),nums.end());
        }
        else{
        for(in=n-1;in>i;in--){
            if(nums[in]>nums[i]){
                break;
            }
        }
        
        
        int temp=nums[i];
        nums[i]=nums[in];
        nums[in]=temp;
        reverse(nums.begin()+i+1,nums.end());
        }
    }
};