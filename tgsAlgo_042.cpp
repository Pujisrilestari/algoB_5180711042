#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace :: std;


int main(){
char member;
float diskon,discon;
string id,nomor_id,nm,nb[20];
int du,jumlah,hb[20],jumlah_barang[30],total1,total2=0;
string nama[10];


cout<<"Apakah Anda Member : ";cin>>member;
if(member=='y' || member == 'Y')
{
    cout<<" Silakan Masukan No identitas : ";cin>>nomor_id;

 if(nomor_id=="A001"){
    cout<<"No.Identitas  : "<<nomor_id<<endl;
    cout<<"Nama          : Dinda"<<endl;
}
else if(nomor_id=="A002"){
    cout<<"No.Identitas  : "<<nomor_id<<endl;
    cout<<"Nama          : Irvan "<<endl;
}
else if(nomor_id=="A003"){
    cout<<"No. identitas : "<<nomor_id<<endl;
    cout<<"Nama          : Duwi "<<endl;
}
else if(nomor_id=="A007"){
    cout<<"No. identitas : "<<nomor_id<<endl;
    cout<<"Nama          : Putri"<<endl;
}
else if(nomor_id=="A008"){
    cout<<"No. identitas : "<<nomor_id<<endl;
    cout<<"Nama          : Rio"<<endl;}
}

else if(member=='T' || member || 't'){
    cout<<"Silakan Masukkan Nama : ";cin>>nama[0];
    cout<<"Masukan No Identitas  : ";cin>>nomor_id;
    cout<<endl;}
cout<<"Berapa Jumlah Barang : ";cin>>jumlah;cout<<endl;
for(int i=0;i<jumlah;i++){
    cout<<"Barang ke - "<<i+1<<endl;
    cout<<"Silakan Masukkan Nama Barang   : ";cin>>nb[i];
    cout<<"Silakan Masukkan Jumlah barang : ";cin>>jumlah_barang[i];
    cout<<"Silakan masukkan Harga Barang  : ";cin>>hb[i];
    cout<<endl;

    total1=jumlah_barang[i]*hb[i];
    total2=total2+total1;
}
    cout<<"Total Harga             : "<<total2<<endl;
if(member=='y'||member=='Y'){
    diskon=5/(float)100;

    cout<<" Selamat Diskon Anda Adalah      : "<<discon<<endl;
    cout<<" Silakan Total Yang Harus Dibayar:"<<total2-discon<<endl;
    cout<<" Silakan Masukkan Uang           : ";cin>>du;
    cout<<" Terima kembalian               : "<<du-(total2-discon);

}

else if(member=='t'||member=='T'){
        cout<<"Anda tidak mendapat Discon "<<endl;
  cout<<" Silakan Masukkan Uang            : ";cin>>du;
  cout<<" Terima kembalian                : "<<du-total2;
}
return 0;
}
