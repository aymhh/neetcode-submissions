class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        } else {
            unordered_map<string, int> anagramCountA;
            unordered_map<string, int> anagramCountB;

            for (int i = 0; i < s.length(); i++) {
                anagramCountA[string(1, s[i])]++;
                anagramCountB[string(1, t[i])]++;
            }

            if (anagramCountA == anagramCountB) {
                return true;
            } else {
                return false;
            }
        }
    }
};
