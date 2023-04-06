//1. Karena algorithma dapat membantu mengatasi masalah dalam berbagai bidang seperti matematika, ilmu komputer, dan ilmu pengetahuan sosial dengan cepat dan efisien                                        
//2. prosedural dan objek 
//3. faktor faktor yang mempengaruhi efisiensi waktu eksekusi suatu program adalah 
//4. 
//5. Bubblesort
#include <iostream> 
using namespace std;

int rama[29];                      // Membuat Array dengan panjang data 29           
int n;                             // Membuat variable inputan n

void input() {

	while (true) {
		cout << "Masukan elemen/jumlah data array : \n";
		cin >> n;
		if (n <= 29)
			break;
		else {
			cout << "array hanya bisa memiliki makasimal 29 elemen";
		}
	}

	cout << endl;
	cout << "=======================================" << endl;
	cout << "          masukkan elemen array        " << endl;
	cout << "=======================================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "masukan data ke-" << (i + 1) << ";";
		cin >> rama[1];
	}
}

void insertionsort() {         // Procedure Insertionsort
	int temp;                  // Membuat variable data temporer atau penyimpangan sementara
	int j;                     // Membuat variable j sebagai penanda 

	for (int i = 1; i < n; i++) {        // Looping dengan i dimulai dari 1 hingga n-1

		temp = rama[i];                  // simpan nilai arr[i] ke variable sementara temp

		j = i - 1;                       // setting nilai j sama dengan i-1;

		while (j >= 0 && rama[j] > temp)   // Looping while dimana bilai j lebih besar sama dengan 0 dan
			                              // arr[j] lebih besar daripada temp 
		{
			rama[j + 1] = rama[j];          // setting nilai j sama dengan i-1;
			j--;                          // Decrement nilai by 1
		}

		rama[j + 1] = rama[j];              // simpan arr[j] ke dalam variable arr[j+]

		cout << "\nStep " << i << ": ";   // Output ke layar 
		for (int k = 0; k < n; k++) {     // Looping nilai k dimulai dari 0 hingga n-1 
			cout << rama[k] << " ";       // Output ke layar 
		}
	}
}

void display() {              // Procedure Display
	cout << endl;                                  // Output baris koosong 
	cout << "\n===================================" << endl;   // Output ke layar 
	cout << "Element array yang telha tersusun" << endl;     // Output k elayar 
	cout << "=================================" << endl;       // Output ke layar 

	for (int j = 0; j < n; j++) {                     // Looping dengan j dimuylai dari 0 hingga n-1
		cout << rama[j] << endl;                       // Output ke layar 
	}
	cout << endl;                                     // Output baris kosong
}

int maiin()
{
	input();                // memanggil input
	insertionsort();        // memanggil insertionsort
	display();              // memanggil display
	
}
