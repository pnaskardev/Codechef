#include <iostream>
using namespace std;
 
// Returns true if the binary representation of `n` is a palindrome
bool isPalindrome(unsigned n)
{
    // `rev` stores reverse of a binary representation of `n`
    unsigned rev = 0;
 
    // do till all bits of `n` are processed
    unsigned k = n;
    while (k)
    {
        // add the rightmost bit to `rev`
        rev = (rev << 1) | (k & 1);
        k = k >> 1;     // drop last bit
    }
 
    // Returns true if `reverse(n)` is the same as `n`
    return n == rev;
}
 
int main()
{
    int n = 1;          // 1001
 
    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is not a palindrome";
    }
 
 
    return 0;
}