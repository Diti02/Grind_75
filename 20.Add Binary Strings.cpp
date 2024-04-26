    //TC: O(max(n,m))
    //SC: O(1)
    string addBinary(string a, string b) {
        int i=a.size()-1;
        int j=b.size()-1;
        int sum=0,carry=0;
        string ans="";
        while(i>=0 && j>=0){
            int x=a[i]-'0';
            int y=b[j]-'0';
            sum=(x+y+carry)%2;
            carry=(x+y+carry)/2;
            char c=sum+'0';
            ans=c+ans;
            i--;
            j--;
        }
        while(i>=0){
            int x=a[i]-'0';
            sum=(x+carry)%2;
            carry=(x+carry)/2;
            char c=sum+'0';
            ans=c+ans;
            i--;
        }

        while(j>=0){
            int x=b[j]-'0';
            sum=(x+carry)%2;
            carry=(x+carry)/2;
            char c=sum+'0';
            ans=c+ans;
            j--;
        }

        while(carry!=0){
            char c= (carry%2)+'0';
            ans=c+ans;
            carry=carry/2;
        }

        return ans;
    }