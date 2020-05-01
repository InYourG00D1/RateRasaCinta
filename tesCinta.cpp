#include <iostream>
using namespace std;

int main(){

int j;
string nama,doi;

cout << " Nama Doi : ";
cin >> doi;
cout << " Nama Anda : ";
cin >> nama;

srand(time(NULL));
j =rand() % 100;

cout <<endl;
cout << doi << " Sepertinya Mempunyai Perasaan Kepada " << nama << " Sebesar : " << j << "%"<<endl;
}