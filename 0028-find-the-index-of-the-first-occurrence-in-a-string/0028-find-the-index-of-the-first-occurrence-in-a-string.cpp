class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
      
        if (m > n) return -1;

        // Loop through all possible starting positions
        for (int st = 0; st <= n - m; st++) {
            int j = 0;
            
           
            while (j < m && haystack[st + j] == needle[j]) {
                j++;
            }
            

            if (j == m) {
                return st;
            }
        }

        return -1;
    }
};