class Solution {
public:
    string convert(string text, int totalRows) {
        if (totalRows == 1 || text.size() <= totalRows) return text;

        vector<string> zigzagRows(totalRows);  
        int currentRow = 0;   
        int rowDirection = -1; 

        for (int i = 0; i < text.size(); ++i) {
            zigzagRows[currentRow] += text[i];   

            if (currentRow == 0 || currentRow == totalRows - 1) {
                rowDirection = -rowDirection;
            }

            currentRow += rowDirection;
        }
        
        string finalResult;
        for (int i = 0; i < zigzagRows.size(); ++i) {
            finalResult += zigzagRows[i];
        }
        return finalResult;
    }
};
