class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int i,mx,sum=0,j,n=card.size();
        for(i=0;i<k;i++){
            sum+=card[i];
        }        
        //sum of 1st k cardPoints
        mx=sum;
        j=n-1;
        //using sliding window i = k+1 and j= n-1 
        //move the window back ward to include ending points and exclude beginning points
        while(i-1>=0 && i<=j){
            sum=sum-card[i-1]+card[j];
            mx=max(sum,mx);
            i--;
            j--;
        }
        return mx;
    }
};