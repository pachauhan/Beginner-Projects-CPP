#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    //check if first half of string is equal to reverse of second half of string
    //if string length is odd, middle character is skipped
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            cout << "not palindrome";
            exit(0);
        }
    }
    
    cout << "palindrome";
    
    return 0;
    
}
