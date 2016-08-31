#include <iostream>
#include <cmath>
using namespace std;
int main() {
double R, r, H, v, s, l, p=3.14;
cin >> R >> r >> H;
v= p * (R * R + R * r + r * r)/3;
l= sqrt (H * H + (R - r)*(R - r));
s= p * (R + r ) * l;
cout << v <<" "<< s << endl;
}