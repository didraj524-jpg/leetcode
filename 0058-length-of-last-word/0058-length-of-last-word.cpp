class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();int count=0;int k=0;
      for(int i=n-1;i>=0;i--){
        if(s[n-1]!=' '){
        if (s[i]!=' '){
            count++;
        }
         if(s[i]==' '&&s[i+1]!=' '){
            return count;
         }
        }
        if(s[n-1]==' '){
             if (s[i]!=' '){
            count++;
        }
        if(s[i]==' '&&s[i+1]!=' '){
            k++;
            if(k>1){return count;}
        }
        }
      }

      return count; 
    }
};