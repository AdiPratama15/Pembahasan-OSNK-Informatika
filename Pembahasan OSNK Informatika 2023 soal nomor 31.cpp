#include <iostream>

using namespace std;

int a = 0, b = 0, c = 0, d = 0;
int ans = 0;
void kebersamaan(int x) {
	cout<<"ketika sebelum dijalankan fungsi kebersamaan("<<x<<"), maka nilai masing-masing variabel adalah;"<<endl;
  cout<<"nilai ans: "<<ans<<endl;
  cout<<"nilai a: "<<a<<endl;
  cout<<"nilai b: "<<b<<endl;
  cout<<"nilai c: "<<c<<endl;
  cout<<"nilai d: "<<d<<endl;
  cout<<"nilai x: "<<x<<endl;
  ans += a;
  a = b;
  b = c;
  c = d;
  d = x;
/*itu termasuk cuplikan dari implementasi yg mirip dengan struktur data Queue atau geser berantrian.*/
  cout<<"ketika sesudah dijalankan fungsi kebersamaan("<<x<<"), maka nilai masing-masing variabel adalah;"<<endl;
  cout<<"nilai ans: "<<ans<<endl;
  cout<<"nilai a: "<<a<<endl;
  cout<<"nilai b: "<<b<<endl;
  cout<<"nilai c: "<<c<<endl;
  cout<<"nilai d: "<<d<<endl;
  cout<<"nilai x: "<<x<<endl;
}

int main() {
  a += 4;
  b += 3;
  c += 7;
  d += 2;
  kebersamaan(5);
  kebersamaan(2);
  a += 2;
  c += 3;
  kebersamaan(3);
  d += 4;
  c += 4;
  kebersamaan(0);
  a += 5;
  b += 6;
  kebersamaan(1);
  c += 9;
  a += 7;
  c += 2;
  cout << ans << endl;
  return 0;
}
