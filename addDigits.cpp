/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.*/
class Solution {
public:
    int addDigits(int num) {
        int s=0;
        while(num)
        {
            s=s+(num%10);
            num=num/10;
        }
        if(s<10)
        return s;
        else
        return addDigits(s);
        
    }
};