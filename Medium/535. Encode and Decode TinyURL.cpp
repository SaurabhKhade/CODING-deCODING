class Solution {
    vector<string> store = {""};
    int counter = 0;
public:
    string encode(string longUrl) {
        store[counter] = longUrl;
        return to_string(counter++);
    }

    string decode(string shortUrl) {
        return store[stoi(shortUrl)];
    }
};