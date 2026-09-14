class Solution {
public:
    bool isPalindrome(long long x) {

        // Negative number palindrome nahi ho sakta
        if (x < 0) {
            return false;
        }

        long long  original = x;
        long long  reverse = 0;

        while (x > 0) {

            // Last digit nikalna
            int digit = x % 10;

            // Reverse banana
            reverse = reverse * 10 + digit;

            // Last digit remove karna
            x = x / 10;
        }

        // Original aur reverse compare
        return original == reverse;
    }
};