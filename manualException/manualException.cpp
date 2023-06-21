#include <iostream>
using namespace std;

int main() {
	try {
		cout << "selamat belajar di prodi ti umy" << endl;
		throw 0.5; //melemparkan sebuah integer maka
		cout << "pertanyaan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok inii akan di eksekusi
		cout << "pengecualian akan di eksekusi" << endl;
	}
	catch(...) {
		/*jika selain integer maka block ini tidak akan di eksekusi*/
		cout << "defaultpengecualian di eksekusi" << endl;
	}
	return 0;
}
