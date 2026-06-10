#include <bits/stdc++.h>
using namespace std;

/* ==============================
   STRING UTILITY FUNCTIONS
   ============================== */

// 1. Get length (manual)
int getLength(const string &s) {
    int len = 0;
    for (char c : s) len++;
    return len;
}

// 2. Reverse string
string reverseString(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

// 3. Check palindrome
bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

// 4. Convert to uppercase
string toUpperStr(string s) {
    for (char &c : s) {
        c = toupper(c);
    }
    return s;
}

// 5. Convert to lowercase
string toLowerStr(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

// 6. Count vowels
int countVowels(const string &s) {
    int count = 0;
    for (char c : s) {
        char ch = tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

// 7. Remove spaces
string removeSpaces(string s) {
    string res = "";
    for (char c : s) {
        if (c != ' ') res.push_back(c);
    }
    return res;
}

// 8. Frequency of characters
void frequency(string s) {
    unordered_map<char, int> mp;
    for (char c : s) mp[c]++;
    
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }
}

// 9. Check substring
bool isSubstring(string s, string sub) {
    return s.find(sub) != string::npos;
}

// 10. Concatenate strings
string concat(string a, string b) {
    return a + b;
}

/* ==============================
   MAIN FUNCTION (TESTING)
   ============================== */

int main() {
    string s1 = "hello world";
    string s2 = "hello";

    cout << "Length: " << getLength(s1) << endl;

    cout << "Reverse: " << reverseString(s1) << endl;

    cout << "Palindrome: " << isPalindrome(s2) << endl;

    cout << "Upper: " << toUpperStr(s1) << endl;

    cout << "Lower: " << toLowerStr(s1) << endl;

    cout << "Vowels: " << countVowels(s1) << endl;

    cout << "No spaces: " << removeSpaces(s1) << endl;

    cout << "Substring: " << isSubstring(s1, "world") << endl;

    cout << "Concat: " << concat(s1, s2) << endl;

    cout << "\nFrequency:\n";
    frequency("aabbbcc");

    return 0;
}