// 451. Sort Characters By Frequency

// custom sort function to sort vector based on lengths of string
bool compareSizes(const string &lhs, const string &rhs) {
    return lhs.length() > rhs.length();
}

class Solution {
public:
    string frequencySort(string s) {
        vector<string> freq(100,"");
		
		// to store each letters occurence with that character
        for (char a : s) freq[a-'0'] += a;
		
		// sorting the vector based on lengths in decreasing order
        sort(freq.begin(), freq.end(), compareSizes);
		
		string ans = "";
		// adding it to ans string based on the frequency
        for (string str : freq) ans += str;
        return ans;
    }
};
