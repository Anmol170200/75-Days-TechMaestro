class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int left=0;
        
        for(int j=0;j<nums.size();j++){
            sum=sum-nums[j];
            if(left==sum){
                return j;
            }
            left=left+nums[j];
        }
        return -1;
    }
};