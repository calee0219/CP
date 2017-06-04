#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int p, x, y;
    cin >> p >> x >> y;
    int s = (x / 50) % 475;
    int a[25];
    for(int i = 0; i < 25; ++i) {
        s = (s * 96 + 42) % 475;
        if(s+26 == p) {
            cout << 0 << endl;
            return 0;
        }
        a[i] = s+26;
        //cout << s+26 << '\t';
    }
    int z = (x-y)/50;
    //cout << z << endl;
    //for(int i = 0; i < 25; ++i) {
        //arr[i] = ((arr[i] - z*50) % 475 + 475) % 475;
        //cout << arr[i] << " ";
    //}
    //cout << endl;
    int arr[25];
    for(int i = 0; i < 25; i++) arr[i] = a[i];
    bool brr = false;
    int i;
    for(i = 0; ; ++i) {
        s = ((x + 50*i)/50) % 475;
        for(int j = 0; j < 25; ++j) {
            s = (s * 96 + 42) % 475;
            if(s+26 == p) {
                brr = true;
                break;
            }
        }
        if(brr) break;
    }
    int up = i;
    for(int i = 0; i < 25; i++) arr[i] = a[i];
    brr = false;
    for(i = 0; i < z+5; ++i) {
        s = ((x - 50*i)/50) % 475;
        for(int j = 0; j < 25; ++j) {
            s = (s * 96 + 42) % 475;
            if(s+26 == p) {
                brr = true;
                break;
            }
        }
        //for(int j = 0; j < 25; ++j) {
            //if(arr[j] == p) {
                //brr = true;
                //break;
            //}
            //arr[j] = ((arr[j] - 50) % 475 + 475) % 475;
        //}
        if(brr) break;
    }
    int down = i;
    //cout << z << " " << up << " " << down << endl;
    if (down <= z) {
        cout << 0 << endl;
        return 0;
    }
    if(up & 1)
        cout << up/2+1 << endl;
    else
        cout << up/2 << endl;
    return 0;
}
