class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> m;
        istringstream ss(str);
        int i = 0;
        for (string word ; ss >> word ; i++){
            if (m.find(pattern[i]) != m.end()){
                if (m[pattern[i]] != word) return false;
            }
            else {
                for (unordered_map<char, string>::iterator it = m.begin() ; it != m.end() ; it++){
                    if (it->second == word) return false;
                }
                m[pattern[i]] = word;
            }
        }
        return i == pattern.size();
    }
};