#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double R, r, H, v, s, l;
	cin >> R >> r >> H;
	v= M_PI * (R * R + R * r + r * r)/3;
	l= sqrt (H * H + (R - r)*(R - r));
	s= M_PI * (R + r ) * l;
	cout << v <<" "<< s << endl;
	
}