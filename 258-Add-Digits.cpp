class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;    
            }
            num = sum;        // now num becomes 11, so the outer loop runs again!
        }
        return num;
    }
};