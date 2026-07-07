class Solution {
public:
    long long sumAndMultiply(int n) {



        vector<int> arr;

        while (n > 0) {
            arr.push_back(n % 10);
            n = n / 10;
        }
        int digsum = 0;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                digsum += arr[i];
            }
        }

        int sum = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            if (arr[i] != 0) {
                sum = sum * 10 + arr[i];
            }
        }

        long long ans = (long long)sum * digsum;

        return ans;
        
    }
};