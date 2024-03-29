class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>temp;
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==1){
            return ans;
        }
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows==2){
            return ans;
        }
        for(int i=2;i<numRows;i++){
            vector<int> t;
            t.push_back(1);
            for(int j=0;j<temp.size()-1;j++){
                int d=temp[j]+temp[j+1];
                t.push_back(d);
            }
            if(t.size()==temp.size()){
                t.push_back(1);
            }
            temp=t;
            ans.push_back(t);
        }
        return ans;

    }
};