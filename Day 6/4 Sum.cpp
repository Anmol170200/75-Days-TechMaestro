class Solution {
public:
   vector<vector<int>> fourSum(vector<int>& nums, int t) {
        sort( nums.begin(), nums.end() );
        
        int n= nums.size();
        vector<vector<int>> ans;
        for( int i=0 ; i < n-3; i++ ){
            if( (i>0 && nums[i] == nums[i-1]) ){
                continue;
            }
            for( int j = i+1 ; j< n-2; j++ ){
                if( nums[j] == nums[j-1] && j-1 != i  ){
                    continue;
                }
                int k = j+1, l = n-1;
                while( k < l ){
                    long long s = nums[i];
                    s+= nums[j];
                    s+= nums[k];
                    s+= nums[l];
                    if( s == t) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);
                        ans.push_back(temp);
                        while( k<n && nums[k] == temp[2] ){
                            k++;
                        }
                        while( l>0 && nums[l] == temp[3] ){
                            l--;
                        }
                    }
                    else if( s<t ){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};