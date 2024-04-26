    //TC: O(N)
    //SC: O(1)
    bool isPalindrome(string s) {
        int l=0,h=s.size()-1;
        while(l<=h){
            if(!isalpha(s[l])){
                l++;
                continue;//VVI
            }
            if(!isalpha(s[h])){
                h--;
                continue;//VVI
            }
            if(tolower(s[l])!=tolower(s[h])){
                return false;
            }
            else{
            l++;
            h--;     
            }       
        }
    return true;
    }
