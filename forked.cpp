#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        long long xk, yk, xq, yq;
        cin >> xk >> yk;
        cin >> xq >> yq;

        set<pair<long long, long long>> kingPos, queenPos;

        // all 8 moves
        vector<pair<long long,long long>> moves = {
            {a,b}, {a,-b}, {-a,b}, {-a,-b},
            {b,a}, {b,-a}, {-b,a}, {-b,-a}
        };

        // positions attacking king
        for(auto m : moves) {
            kingPos.insert({xk + m.first, yk + m.second});
        }

        // positions attacking queen
        for(auto m : moves) {
            queenPos.insert({xq + m.first, yq + m.second});
        }

        // count intersection
        int ans = 0;
        for(auto p : kingPos) {
            if(queenPos.count(p)) ans++;
        }

        cout << ans << endl;
    }
}