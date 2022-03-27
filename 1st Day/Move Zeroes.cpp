class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return ;
        }   
    int i=0;
        int j=1;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]==0){
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]!=0){
                i++;
                j++;
            }
        }
        return;
    }
};