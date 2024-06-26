    //TC: O(NlogN)
    //SC: O(N)
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<int, pair<int,int>> ,vector< pair<int, pair<int,int>> >,  greater< pair<int, pair<int,int>> >> pq;
               
        for(int i=0;i<points.size();i++){
            int dis=pow(points[i][0],2)+pow(points[i][1],2);
            pq.push({dis,{points[i][0],points[i][1]}});
        }
        vector<vector<int>> ans;
        while(!pq.empty() && k!=0){
            auto it=pq.top().second;
            ans.push_back({it.first,it.second});
            pq.pop();
            k--;
        }
        return ans;
    }