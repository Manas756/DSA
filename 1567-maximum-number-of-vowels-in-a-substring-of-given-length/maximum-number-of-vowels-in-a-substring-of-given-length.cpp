class Solution {
public:
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || 
           c == 'o' || c == 'u';
}
int maxVowels(string s, int k) {
    int count = 0;
    // Count vowels in the first window of size k
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i]))
            count++;
    }
    int maxi = count;
   // Start sliding the window

    for (int i = k; i < s.length(); i++) {
 //the character at i-k is no longer part of the window
        if (isVowel(s[i-k]))
            count--;

        if (isVowel(s[i]))
            count++;

        maxi = max(maxi, count);
    }

    return maxi;
}
};