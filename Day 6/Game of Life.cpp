class Solution {
public:
    int findLiveN(int i, int j, vector<vector<int>>& board){
        int si = board.size();
        int sj = board[0].size();
        int n=0;
        int a=(i==0 || j==0)?0:board[i-1][j-1];
        int b=(j==0)?0:board[i][j-1];
        int c=(i==0)?0:board[i-1][j];
        int d=(i==si-1 || j==sj-1)?0:board[i+1][j+1];
        int e=(j==sj-1)?0:board[i][j+1];
        int f=(i==si-1)?0:board[i+1][j];
        int g=(i==0 || j==sj-1)?0:board[i-1][j+1];
        int h=(j==0 || i==si-1)?0:board[i+1][j-1];
        n = a+b+c+d+e+f+g+h;
        return n;
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>> result = board;
        for(int i=0; i<board.size(); i++){
            for (int j=0; j<board[0].size(); j++){
                if(board[i][j]==0){
                    if(findLiveN(i,j,board)==3){
                        result[i][j]=1;
                    }
                }else{
                    if(findLiveN(i,j,board)<2){
                        result[i][j]=0;
                    }else if(findLiveN(i,j,board)>3){
                        result[i][j]=0;
                    }
                }
            }
        }
        board=result;   
    }
};