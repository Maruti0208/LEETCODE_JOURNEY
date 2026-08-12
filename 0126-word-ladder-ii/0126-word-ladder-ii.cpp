class Solution {
public:
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;

    void dfs(string x, string b, vector<string>& path) {
        if (x == b) {
            vector<string> v = path;
            reverse(v.begin(), v.end());
            ans.push_back(v);
            return;
        }

        for (string y : mp[x]) {
            path.push_back(y);
            dfs(y, b, path);
            path.pop_back();
        }
    }

    vector<vector<string>> findLadders(string b, string e, vector<string>& w) {
        unordered_set<string> s(w.begin(), w.end());

        if (!s.count(e))
            return {};

        queue<string> q;
        q.push(b);

        unordered_set<string> used;

        while (!q.empty()) {
            int n = q.size();
            used.clear();

            while (n--) {
                string x = q.front();
                q.pop();

                for (int i = 0; i < x.size(); i++) {
                    char old = x[i];

                    for (char ch = 'a'; ch <= 'z'; ch++) {
                        x[i] = ch;

                        if (!s.count(x))
                            continue;

                        mp[x].push_back(x.substr(0, i) + old + x.substr(i + 1));
                        used.insert(x);
                    }

                    x[i] = old;
                }
            }

            for (string x : used)
                s.erase(x);

            if (used.count(e))
                break;

            for (string x : used)
                q.push(x);
        }

        vector<string> path = {e};
        dfs(e, b, path);

        return ans;
    }
};