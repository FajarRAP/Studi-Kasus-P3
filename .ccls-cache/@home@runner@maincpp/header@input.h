using namespace std;
 class input{
  public:
  void cetak(){
    // cout<<"1. AYAM GEPREK = 21000 \n2. AYAM GORENG = 17000 \n3. UDANG GORENG = 19000 \n4. CUMI GORENG = 20000 \n5. AYAM BAKAR = 25000"<<endl;
    cout<<"Silahkan Di Pesan"<<endl; 
    cout<<"1. Ayam Bakar   : ";cin>>pcsm_ayambakar;
    cout<<"2. Ayam Goreng  : ";cin>>pcsm_ayamgoreng;
    cout<<"3. Ayam Geprek  : ";cin>>pcsm_ayamgeprek;
    cout<<"4. Cumi Goreng  : ";cin>>pcsm_cumigoreng;
    cout<<"5. Udang Goreng : ";cin>>pcsm_udanggoreng;

  }
void kirimdata(){
  senddata.open("titit.txt");
  senddata<<pcsm_ayambakar<<endl;
  senddata<<pcsm_ayamgoreng<<endl;
  senddata<<pcsm_ayamgeprek<<endl;
  senddata<<pcsm_cumigoreng<<endl;
  senddata<<pcsm_udanggoreng;
  senddata.close();
}

 private:
    ofstream senddata;
    int pcsm_ayamgeprek, pcsm_ayamgoreng, pcsm_udanggoreng, pcsm_cumigoreng, pcsm_ayambakar;
    
 };