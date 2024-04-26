    //TC:
    // unordered_map:O(N)->for searching worst case O(N), then TC O(N^2), normally it is O(1)
    // map:O(NlogN)
    // SC:O(N)        
    vector<int> twoSum(vector<int>& nums, int target) {  
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(mp.find(req)!=mp.end()){
                return {i,mp[req]};
            }
            mp[nums[i]]=i;
        }
        return {-1,1};
    }