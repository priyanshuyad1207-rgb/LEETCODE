class Solution {
public:
    string add(string num1, string num2) {
    int n1 = num1.size() - 1;
    int n2 = num2.size() - 1;

    int carry = 0;
    string sum;

    while(n2 >= 0){
        int ans = (num1[n1]-'0') + (num2[n2]-'0') + carry;

        carry = ans / 10;
        sum += char(ans % 10 + '0');

        n1--;
        n2--;
    }

    while(n1 >= 0){
        int ans = (num1[n1]-'0') + carry;

        carry = ans / 10;
        sum += char(ans % 10 + '0');

        n1--;
    
