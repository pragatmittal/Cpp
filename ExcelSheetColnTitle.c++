class Solution {
public:
    string convertToTitle(int columnNumber) {
        std::string result;
        while (columnNumber > 0) {
            int idx = (columnNumber - 1) % 26;
            result.insert(result.begin(), (char)(idx + 'A'));
            columnNumber = (columnNumber - 1) / 26;
        }

        return result;
    }
};