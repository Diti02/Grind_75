//TC: O(NlogN)
//SC: O(1)
int firstBadVersion(int n) {
        long long low=1, high=n, ans=0;
        while(low<=high){
            long long mid=(low+high)/2;
            if(isBadVersion(mid)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }