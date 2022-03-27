class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==1){
            nums[0]=nums[0]*nums[0];
            return  nums;
        }
        vector<int> ans(nums.size());
            for(int i=0;i<nums.size();i++){
                nums[i]=nums[i]*nums[i];
            }
            int x=ans.size()-1;
            int j=0;
            int k=nums.size()-1;
            while(j<=k){
                if(nums[j]>=nums[k]){
                    ans[x]=nums[j];
                    j++;
                    x--;
                }
                else if(nums[j]<nums[k]){
                    ans[x]=nums[k];
                    k--;
                    x--;
                }  
        }
        return ans;
    }  
};


