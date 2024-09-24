class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.size() <= numRows) return s;

        vector<string> rows(numRows);  
        int curRow = 0;   
        int direction = -1;  

        for (int i = 0; i < s.size(); ++i) {
            rows[curRow] += s[i]; 

            if (curRow == 0 || curRow == numRows - 1) {
                direction = -direction;
            }

            curRow += direction;
        }
        
        string result;
        for (int i = 0; i < rows.size(); ++i) {
            result += rows[i];
        }
        return result;
    }
};
