    //Moores Voting Algorithm
    //TC: O(N)
    //SC: O(1)
    int majorityElement(vector<int>& nums) {
        int c=0,c2=0;
        int element=nums[0];
        for(int i=0;i<nums.size();i++){
            if(c==0){
                c++;
                element=nums[i];
            }
            else if(nums[i]==element){
                c++;
            }
            else{
                c--;
            }
        }

        for(int i=0;i<nums.size();i++){
            if(element==nums[i]){
                c2++;
            }
        }
        if(c2>nums.size()/2){
            return element;
        }

        return element;
    }