#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> s1, s2, s3;
    bool no_change = true;
    for(int i = 0; i < n; ++i) {
        int str1, str2;
        cin >> str1 >> str2;
        s1.push_back(str1);
        s2.push_back(str2);
        s3.push_back(str2);
        if(s1[i] != s2[i]) no_change = false;
    }
    if(!no_change) {
        cout << "rated" << endl;
        return 0;
    }
    sort(s2.begin(), s2.end());
    reverse(s2.begin(), s2.end());
    //for(int i = 0; i < s2.size(); ++i) cout << s2[i] << '\t';
    for(int i = 0; i < n; ++i) {
        if(s2[i] != s3[i]) {
            cout << "unrated" << endl;
            return 0;
        }
    }
    cout << "maybe" << endl;
    return 0;
}
