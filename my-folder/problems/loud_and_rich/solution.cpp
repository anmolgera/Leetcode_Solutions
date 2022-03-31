class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
      const int N = quiet.size();
        vector<vector<int>> graph(N);
        vector<int> indegrees(N, 0);
        for (auto& r : richer) {
            ++indegrees[r[1]];
            graph[r[0]].push_back(r[1]);
        }
        
        deque<int> q;
        for (int i = 0; i < indegrees.size(); ++i) {
            if (indegrees[i] == 0) {
                q.push_back(i);
            }
        }
        
        vector<int> answers(N);
        iota(answers.begin(), answers.end(), 0);
        while (!q.empty()) {
            auto idx = q.front();
            q.pop_front();
            for (auto next : graph[idx]) {
                if (quiet[answers[next]] > quiet[answers[idx]]) {
                    answers[next] = answers[idx];
                }
                if (--indegrees[next] == 0) {
                    q.push_back(next);
                }
            }
        }
        return answers;
     
    }
};