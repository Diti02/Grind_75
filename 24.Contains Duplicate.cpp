    //Using Map
    //TC: O(N)
    //SC: O(N)
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]++;
            }
            else{
                return true;
            }
        }
        return false;
    }
    //Using sorting
    //TC: O(NLogN)
    //SC: O(1)
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }