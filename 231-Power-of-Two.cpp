class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        while (n > 1) {
            // If at any point it's not divisible by 2, it's not a power of two
            if (n % 2 != 0) {
                return false;
            }
            n = n / 2;
        }

        // If it divided cleanly down to 1, it's a power of two
        return n == 1;
    }
};