class Solution {
public:

    int value(char ch) {

        if (ch == 'I') return 1;
        if (ch == 'V') return 5;
        if (ch == 'X') return 10;
        if (ch == 'L') return 50;
        if (ch == 'C') return 100;
        if (ch == 'D') return 500;
        if (ch == 'M') return 1000;

        return 0;
    }

    int romanToInt(string s) {

        int ans = 0;

        for (int i = 0; i < s.length(); i++) {

            int current = value(s[i]);

            // Check karo next value current se badi hai ya nahi
            if (i + 1 < s.length() && current < value(s[i + 1])) {

                ans = ans - current;
            }
            else {

                ans = ans + current;
            }
        }

        return ans;
    }
};