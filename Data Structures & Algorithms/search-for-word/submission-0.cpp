class Solution {
public:
    bool findWord(vector<vector<char>>& board,int i,int j,string word,int idx,vector<vector<bool>>& visited){
        if(idx >= word.length()) return true;

        int m = board.size();
        int n = board[0].size();

        visited[i][j] = true;

        if(j-1 >= 0 && !visited[i][j-1] && word[idx] == board[i][j-1]){
            if(findWord(board,i,j-1,word,idx+1,visited)) return true;
        }

        if(i-1 >= 0 && !visited[i-1][j] && word[idx] == board[i-1][j]){
            if(findWord(board,i-1,j,word,idx+1,visited)) return true;
        }

        if(j+1 < n && !visited[i][j+1] && word[idx] == board[i][j+1]){
            if(findWord(board,i,j+1,word,idx+1,visited)) return true;
        }

        if(i+1 < m && !visited[i+1][j] && word[idx] == board[i+1][j]){
            if(findWord(board,i+1,j,word,idx+1,visited)) return true;
        }

        visited[i][j] = false;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        vector<vector<bool>> visited(m,vector<bool> (n,false));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(word[0] == board[i][j]){
                    if(findWord(board,i,j,word,1,visited)){
                        return true;
                    }
                }
            }
        }


        return false;
    }
};