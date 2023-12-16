#include <iostream>

using namespace std;

int main() {
  int m = 30;
  int n = 10;
  /* kalau dikasih sama dengan dan dikasih data atau nilai kedalam variabel,
  maka disebut dengan inisialisasi.
  /deklarasi adalah ngasi tipe data tapi tidak harus int. boleh string, 
  boleh char, dll*/
  int penghitung_tiap_cetak_bintang = 0;
  for (int i = 0; i < m; i++) {
    if (i % 2 == 0) { //bilangan genap
      for (int j = 0; j < i; j++) {
        cout << (penghitung_tiap_cetak_bintang + 1) << ".) ";
        cout << "saat i bilangan genap yaitu i=" << i << " dan " << "j=" << j << " cetak simbol (*)" << endl;
        penghitung_tiap_cetak_bintang++;
      }
    } else {
      for (int j = 0; j < n; j++) {
        cout << (penghitung_tiap_cetak_bintang + 1) << ".) ";
        cout << "saat i bilangan ganjil yaitu i=" << i << " dan " << "j=" << j << " cetak simbol (*)" << endl;
        penghitung_tiap_cetak_bintang++;
      }
    }
  }
  cout << "Total banyaknya output simbol (*) : " << penghitung_tiap_cetak_bintang++;

  /*
  ketika i bernilai genap maka simbol * cuma diulang cetak sebanyak i itu sendiri.
  contoh:
  ketika i=0 maka dicetak simbol * sebanyak 0 kali atau tidak dicetak sama kali.
  ketika i=2 maka dicetak simbol * sebanyak 2 kali.
  ketika i=4 maka dicetak simbol * sebanyak 4 kali.
  dst....
  kamu jumlah pakai rumus Sn.
  2+4+6+.....+28.
  a = 2
  b = 2
  Un = 28 (yang terakhir)
  
  hasil Sn (aritmatika)= 210. (genap)
  
  ketika i bernilai ganjil maka simbol * diulang cetak sebanyak 10 kali.
  Karena nilai n = 10.
  ketika i bernilai 1,
  maka dicetak simbol bintang sembanyak 10 kali;
  **********
  bilangan ganjil dibawah 30
  ada 15 bilangan ganjil, sedangkan tiap bilangan ganjil dicetak 10x.
  150 kali cetak simbol bintang dari ganjil aja.
  
  Finally,
  ketika dijumlah antara cetakan bintang ketika perulangan i 
  ganjil dan genap;
  total = genap+ganjil
  total = 210 + 150
  total = 360.
  */
  return 0;
}
