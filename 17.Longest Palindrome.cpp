    //TC: O(n)
    //SC: O(n)
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int c=0;
        int val=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it: mp){
            if(it.second %2 ==0){
                c+=it.second;
            }
            else{
                c+=it.second-1;
                val=1;//to consider odd element occurence once in the mid pos
            }
        }
        c+=val;
        return c;
    }