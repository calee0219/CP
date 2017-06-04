#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int n, K; cin >> n >> K;
    int a[88];
    map<int,int> m;
    set<int> v; // index
    set<pair<int,int> > last; // index, end pointer
    map<int,int> before; // index -> before index
    map<int,int> index;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        m[a[i]]++;
        before[i] = index[a[i]];
        last.insert(make_pair(i,a[i]));
        index[a[i]] = i;
    }
    int cost = 0;
    for(int i = 0; i < n; ++i) {
        m[a[i]]--;
        bool chk = 1;
        //for(int j = 0; j < v.size(); ++j) {
        //if(v[j] == a[i]) {
        //chk = 0;
        //break;
        //}
        //}
        if(v.find(make_pair(i,a[i])) == v.end()) {
            if(v.size() == K) {
                //bool chk2 = 1;
                //for(int j = 0; j < v.size(); ++j) {
                //if(m[v[j]] == 0) {
                //v.erase(v.begin() + j);
                //chk2 = 0;
                //break;
                //}
                //}
                //if(chk2) {
                //int far_d = 0;
                //int far_i = 0;
                //for(int j = 0; j < v.size(); ++j) {
                //for(int k = i+1; k < n; ++k) {
                //if(a[k] == v[j]) {
                //if(far_d < k-i) {
                //far_d = k-i;
                //far_i = j;
                //}
                //break;
                //}
                //}
                //}
                //v.erase(v.begin() + far_i);
                //}
                v.erase(last.end())
            }
            v.insert(a[i]);
            cost++;
        }
    }
    cout << cost << endl;
    return 0;
}
