//TC: O(N*M)
   //SC: O(N*M)
   void dfs(vector<vector<int>>& image, int sr, int sc, int color){
    int originalColor = image[sr][sc];
    if(originalColor == color) // If the current pixel already has the target color, no need to flood fill.
        return;
    
    image[sr][sc] = color; // Update color of current pixel
    
    int dr[] = {0, 0, -1, 1};
    int dc[] = {-1, 1, 0, 0};
    
    for(int k = 0; k < 4; k++){
        int newRow = sr + dr[k];
        int newCol = sc + dc[k];
        if(newRow >= 0 && newCol >= 0 && newRow < image.size() && newCol < image[0].size() && image[newRow][newCol] == originalColor){
            dfs(image, newRow, newCol, color); // Perform DFS on neighboring pixels
        }
    }
}

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image, sr, sc, color);
        return image;
    }
