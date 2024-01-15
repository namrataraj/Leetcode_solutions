/*Given an integer n, return the number of prime numbers that are strictly less than n.

*/

class Solution {
public:
/*.  GIVES TLE.  
bool isprime(int n){
    if(n==1)
    return false;
    if((n%2==0) &&(n!=2))
    return false;
    for(int i=2;(i*i)<=n;i++)
    {
        if(n%i==0)
        return false;
        
    }return true;
}
    int countPrimes(int n) {
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(isprime(i))
            c++;
        }
        return c;*/


        //.   seive of eratosthenes
int countPrimes(int n) {
    if(n == 0 or n ==1)
    return 0;
    //creating a vector isPrime & marking every integer as trueintitally
vector<bool> isPrime(n,true);
//marking 0 and 1 as false because obviously they are not prime
isPrime[0] = isPrime[1] = false;

int cnt = 0;
for(int i = 2;i<sqrt(n);i++){//looping from 2 to n-1
    if(isPrime[i] == true){//if it is marked as true then mark all it's multiple as false,
    //because they can't be prime as i is already their factor
        for(int j =2*i;j<n;j+=i){
            isPrime[j] = false;
        }
    }
}
//loop through the isPrime vector and if its marked as true then increment the cnt
for(int i = 2;i<n;i++){
    if(isPrime[i] == true){
        cnt++;
    }
}
return cnt;
}
};