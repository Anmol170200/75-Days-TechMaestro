#include <climits>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=INT_MAX;
        int sum=INT_MAX;
        for(int i=0;i<=n-2;i++){
            int a=i+1;
            int b=n-1;
            while(a<b){
                int ssum=nums[i]+nums[a]+nums[b];
                int diff=abs(ssum-target);
                if(diff<m){
                    sum=ssum;
                    m=diff;
                }
                if(ssum<target){
                    a++;
                }
                else if(ssum>target){
                    b--;
                }
                else if(ssum==target){
                    return ssum;
                }
                
            }
        }
        return sum;
        
    }
};