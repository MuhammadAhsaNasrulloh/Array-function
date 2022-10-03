#include <iostream>
#include <string>
using namespace std;

int main() {
	int angka [] = {3, 5, 6, 8, 12};
	cout << "Angka" << angka [2] << endl;
	char huruf [] = {'x', 'y', 'z'};
	printf ("Huruf %c \n", huruf[0]);
	string nama [3] = {"demir", "wibi", "ahsan"};
    cout << "nama = "<<nama[2];
    
    int nilai[3][4] =
    {
    	{10, 20, 30, 40},
    	{50, 60, 70, 80},
    	{90, 100}
	};
	cout << "\nNilai = " << nilai[2][1] <<endl;
	
  int x = 0;
  for(x; x <= 5; x++){
  	cout << angka[x]<<endl;
  }
}