class Solution {
public:
    bool isPalindrome(int x) {
        
       int y=0,nums=x;
       long int ans=0;
        
        while(x>0){
            y=x%10;
            ans=ans*10 + y;
            x=x/10;
        }
        if(ans==nums){
            return true;
        }
        else{
            return false;
        }
    }
};