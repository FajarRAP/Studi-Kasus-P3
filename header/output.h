using namespace std;

class Output{
	public : 
		void cetak(){
			cout << "=Struk pembelian=" << endl;
			cout << "Yang dibeli : " << endl;
			cout << " Ayam Bakar   -> " << data_file[0] << endl;
      cout << " Ayam Goreng  -> " << data_file[1] << endl;
      cout << " Ayam Geprek  -> " << data_file[2] << endl;
      cout << " Cumi Goreng  -> " << data_file[3] << endl;
			cout << " Udang Goreng -> " << data_file[4] << endl;
			cout << "Harga total Rp. " << data_file[5] << endl;
			cout << "Diskon      Rp. " << data_file[6] << endl;
      cout << "Ongkir      Rp. " << data_file[7] << endl;
      cout << "Pot Ongkir  Rp. " << data_file[8] << endl;
			cout << "Harga bayar Rp. " << data_file[9] << endl; 
		}

		void getData(){
			ambil_data.open("titit.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
        index++;
			}
			ambil_data.close();
		}

		private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};