
#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, m;
    while(cin >> n >> m) {
        vector<pair<int, int> > job(n + 1), guy(m);
        vector<int> map(m);
        int mx = 0, index = 0, left = 0;
        job[0] = make_pair(0, 0);
        for(int i = 1; i <= n; ++ i) {
            cin >> job[i].first >> job[i].second;
        }
        for(int i = 0; i < m; ++ i) {
            cin >> guy[i].first;
            guy[i].second = i;
        }
        sort(job.begin(), job.end(), [&](pair<int, int> a, pair<int, int> b){return a.first < b.first;});
        sort(guy.begin(), guy.end(), [&](pair<int, int> a, pair<int, int> b){return a.first < b.first;});
        for(int i = 0; i <= n; ++ i) {
            mx = max(mx, job[i].second);
            job[i].second = mx;
        }
        while(left < m && index < n + 1) {
            if(guy[left].first >= job[index].first) ++ index;
            else {
                map[guy[left].second] = job[index - 1].second;
                ++ left;
            }
        }
        for(int i = left; i < m; ++ i) {
            map[guy[i].second] = job[n].second;
        }
        for(int i = 0; i < m; ++ i) {
            cout << map[i] << endl;
        }
    }
    return 0;
}