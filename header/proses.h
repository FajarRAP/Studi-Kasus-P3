using namespace std;

class proses{
  public:
    void getdata(){
      ambildata.open("titit.txt");
      sementara=0;
      while(!ambildata.eof()){
        switch(sementara){
          case 0:
            ambildata>>q_ab;
            sementara++;
            break;
          case 1:
            ambildata>>q_ag;
            sementara++;
            break;
          case 2:
            ambildata>>q_agp;
            sementara++;
            break;
          case 3:
            ambildata>>q_cg;
            sementara++;
            break;
          case 4:
            ambildata>>q_ug;
            sementara++;
            break;
        }
      }
      ambildata.close();
    }

    int jarakrumah(){
      cout<<"Masukkan jarak (km) : ";
      cin>>jarak;
      return jarak;
    }
  
    void hitung(){
      if(jarakrumah()<3){
        ongkir=15000;
        if(total>150000){
          potongan=ongkir-7000;
          diskon=total*0.35;
          total=total-diskon;
        }
      }else{
        ongkir=25000;
        if(total>150000){
          potongan=ongkir-17000;
          diskon=total*0.35;
          total=total-diskon;
        }
      }
    }

    void senddata(){
      total=(q_ab*ab)+(q_ag*ag)+(q_agp*agp)+(q_cg*cg)+(q_ug*ug);
      kirimdata.open("titit.txt");
      kirimdata<<q_ab<<"x"<<ab<<endl;
      kirimdata<<q_ag<<"x"<<ag<<endl;
      kirimdata<<q_agp<<"x"<<agp<<endl;
      kirimdata<<q_cg<<"x"<<cg<<endl;
      kirimdata<<q_ug<<"x"<<ug<<endl;
      kirimdata<<total<<endl;
      hitung();
      kirimdata<<diskon<<endl;
      kirimdata<<ongkir<<endl;
      kirimdata<<potongan<<endl;
      kirimdata<<total+ongkir-potongan;
      kirimdata.close();
    }
  private:
    ifstream ambildata;
    ofstream kirimdata;
    int q_ab, q_ag, q_agp, q_cg, q_ug;
    int ab=25000, ag=17000, agp=21000, cg=20000, ug=19000;
    int sementara, ongkir, potongan, jarak;
    float diskon, total;
};