    //TC: O(N)
    //SC: O(N)
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        //add the new interval
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]>newInterval[0]){
                intervals[i][1]=max(intervals[i][1],newInterval[1]);
                break;
            }
        }
        //merge the overlapping intervals
        for(int i=1;i<intervals.size();i++){            
            if(ans.back()[1]>=intervals[i][0]){
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);                
            }
            else{
                ans.push_back(intervals[i]);
                
            }
            
        }
        return ans;
        
    }