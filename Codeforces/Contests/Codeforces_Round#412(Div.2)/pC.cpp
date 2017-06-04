#include <iostream>
using namespace std;

int main()
{
    //#define int long long
    int T; cin >> T;
    while(T--) {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        if((p == q && x != y) || (p == 0 && x != 0)) {
            cout << -1 << endl;
            continue;
        } else if((p == q && x == y) || (p == 0 && x == 0)) {
            cout << 0 << endl;
            continue;
        }
        int xx = (x%p)? x/p+1: x/p;
        int yy = ((y-x)%(q-p))? (y-x)/(q-p)+1 : (y-x)/(q-p);
        //cout << xx << yy << endl;
        cout << (long long)max(xx, yy)*q-y << endl;
    }
    return 0;
}
