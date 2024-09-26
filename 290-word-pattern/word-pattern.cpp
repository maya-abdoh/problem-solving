class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        
        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, int> charIndex;
        unordered_map<string, int> wordIndex;
        
        for (int i = 0; i < pattern.size(); ++i) {
            char c = pattern[i];
            string w = words[i];
            
            if (charIndex[c] != wordIndex[w]) {
                return false;
            }

            charIndex[c] = i + 1;
            wordIndex[w] = i + 1;
        }
    
        return true;
    }
};
