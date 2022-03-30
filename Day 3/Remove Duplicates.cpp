class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       int i=0;
        int j=0;
        int n=nums.size();
        if(n<2){
            return n; 
        }
        while(i<n && j<n){
            nums[i]=nums[j];
            while(j<n && nums[i]==nums[j]){
                j++;
            }
            i++;
        }
        return i;
    }
};
/* int ans=1;
        int i=1;int j=1;
        int value=nums[0];
        while(j<nums.size()){
            if(value==nums[j]){
                j++;
            }
            else {
                
                ans++;
                nums[i]=nums[j];
                j++;
                if(i<nums.size()){
                    i++;
                }
                
                value=nums[i];
            }
        
        }
        return ans;
        */