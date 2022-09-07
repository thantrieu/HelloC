#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
float a[10005], c, s;
bool x[10005];
vector<float> b;
int n;
void capnhatkq() {
    s = 0;
    for (int i = 1; i <= n; i++)
        s = s + a[i] * x[i];
    if (s >= c) {
        b.push_back(s);
    }
}
void deQuy(int i) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        if (i == n)
            capnhatkq();
        else
            deQuy(i + 1);
    }
}
int main() {
    //    freopen("bai1.inp","r",stdin);
        ///File vi du:   3 5
        ///              3 3 3
        ///se co 2 gia tri b la: 6,9
    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    deQuy(1);
    sort(b.begin(), b.end());
    int dem = unique(b.begin(), b.end()) - b.begin();
    for (int i = 0; i < dem; i++)
        cout << b[i] << " "; ///Cac gia tri khac nhau cua b
}