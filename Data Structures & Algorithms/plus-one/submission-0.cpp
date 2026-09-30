class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int carry = 1;

        int i = digits.size() - 1;

        while (i >= 0) {

            int sum = digits[i] + carry;

            digits[i] = sum % 10;

            carry = sum / 10;

            i--;
        }

        if (carry == 1) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};