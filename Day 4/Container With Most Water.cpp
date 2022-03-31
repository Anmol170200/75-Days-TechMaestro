#include <climits>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int m=0;
        while(i<j){
            int area=(j-i)*(min(height[i],height[j]));
            m=max(m,area);
            if(height[i]>height[j]){
                j--;
            }
            else if(height[i]<=height[j]){
                i++;
            }
            
        }
        return m;
    }
};