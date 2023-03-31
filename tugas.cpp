#include <iostream>
using namespace std;
int main() { 

int quiz,uts,uas;
float rata2,nilai_akhir;
string huruf_mutu;

//Input Quiz, UTS, UAS
cout << "Masukkan Nilai Quiz :";
cin >> quiz;
cout << "Masukkan Nilai UTS :";
cin >> uts;
cout << "Masukkan Nilai UAS : ";
cin >> uas;

//Hitung Rata2=(Quiz+UTS+UAS)/3
rata2=(quiz+uts+uas)/3;

//Jika Rata2>60; LULUS ; GAGAL : 
string keterangan = rata2 > 60 ? "Lulus": "Gagal";

//Nilai Akhir = (25 % * Quiz)+(35%*UTS)+(40%*UAS)
nilai_akhir=(0.25 * quiz)+(0.35 * uts) +(0.40 * uas);

//If Nilai>=0 && Nilai<45 ; Huruf_Mutu =“E”
if (nilai_akhir>=0 and nilai_akhir<45){
    huruf_mutu="E";
} else if (nilai_akhir>=45 and nilai_akhir<55){
    huruf_mutu="D";
} else if (nilai_akhir>=55 and nilai_akhir<68){
    huruf_mutu="C";
} else if (nilai_akhir>=68 and nilai_akhir<80){
    huruf_mutu="B";
} else if (nilai_akhir>=80 and nilai_akhir<100){
    huruf_mutu="A";
} else { huruf_mutu = "-";}

cout << "Nilai Rata-Rata :" << rata2 << endl;
cout << "Keterangan :" << keterangan << endl;
cout << "Nilai Akhir :" << nilai_akhir << endl;
cout << "Huruf Mutu : " << huruf_mutu << endl;

if (rata_rata >60) {
	cout << "LULUS" << endl:
} else {
cout << "GAGAL"<< endl;
}
return 0;
}
