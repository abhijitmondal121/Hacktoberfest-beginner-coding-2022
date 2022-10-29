class Solution {
public:
    //doing long long int coz mid*mid can overflow in case of 2^31 -1 case
    
    long long int binarySearch(int n){
    
    int s=0, e=n;
       long long int mid=s+(e-s)/2;
        
        long long int ans=-1;
        
        while(s<=e){
            long long int square = mid*mid;
            
            // if perfect square to ye case pe return ho jayega
            if(square==n){
                return mid;
            }
            
            //if not perfect square toh iss wale case me nearest choti value stored hogi
            if(square<n){
                ans=mid;
                s=mid+1;
            }
            // agar greater hai toh end update karke loop phir chalayenge
            else
            {
            e=mid-1;           
                }
            mid=s+(e-s)/2;
        }
        return ans;
        
    }
    
    
    int mySqrt(int x) {
        return binarySearch(x);
    }
};
