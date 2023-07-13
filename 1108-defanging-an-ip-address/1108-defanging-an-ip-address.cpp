class Solution {
public:
    string defangIPaddr(string address) {
        
        string str;
        
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
            {
                string s="[.]";
                str=str+s;
            }
            else{
                str=str+address[i];
            }
        }
        
        return str;
    }
};