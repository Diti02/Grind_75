    //TC: O(n+m)
    //SC: O(c) c=no of distinct characters in map
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.size();i++){
            char c=ransomNote[i];
            if(mp.find(c)==mp.end()){
                return false;
            }
            else if(mp[c]==0){
                return false;
            }
            else {
                mp[c]--;
            }
        }
        return true;
    }