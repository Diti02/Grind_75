    //TC: O(N^2)
    //SC: O(N)
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
            if(nums[i]+nums[low]+nums[high]==0){
                st.insert({nums[i],nums[low],nums[high]});
                low++;
                high--;
            }
            else if(nums[i]+nums[low]+nums[high]<0){
                low++;
            }
            else{
                high--;
            }
            }
        }
        for(auto it: st){
            ans.push_back(it);
        }

        return ans;

    }