#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> first_names(n);
        vector<string> last_names(n);

        for (int i = 0; i < n; i++) {
            cin >> first_names[i] >> last_names[i];
        }

        map<string, int> count_map;
        for (int i = 0; i < n; i++) {
            count_map[first_names[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (count_map[first_names[i]] == 1) {
                cout << first_names[i] << endl;
            } else {
                cout << first_names[i] << " " << last_names[i] << endl;
            }
        }
    }

    return 0;
}
