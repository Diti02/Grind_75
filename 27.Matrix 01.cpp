    //TC: O(N*M)
    //SC: O(N*M)
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>vis(mat.size(),vector<int>(mat[0].size(),0));
        vector<vector<int>> dis(mat.size(), vector<int>(mat[0].size(),0));
        queue<pair<pair<int,int>,int>> q;
        int dr[]={-1,1,0,0};
        int dc[]={0,0,-1,1};

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }


        while(!q.empty()){
            auto it=q.front();
            int x=it.first.first;
            int y=it.first.second;
            int d=it.second;
            q.pop();
            dis[x][y]=d;
            for(int k=0;k<4;k++){
                int nr=x+dr[k];
                int nc=y+dc[k];
                
                if(nr>=0 && nc>=0 && nr<mat.size() && nc<mat[0].size() && vis[nr][nc]==0){
                    q.push({{nr,nc},d+1});
                    vis[nr][nc]=1;
                }
            }
        }
        return dis;
    }