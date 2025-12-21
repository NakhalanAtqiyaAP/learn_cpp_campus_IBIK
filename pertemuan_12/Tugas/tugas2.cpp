#include <iostream>
#include <vector>

using namespace std;

struct Buku
{
  string nama_buku;
  string penulis;
  int jum_halaman;
  int tahun_terbit;
};

Buku cariBuku(string namaBuku, const vector<Buku> &daftarBuku)
{
    for (const auto &item : daftarBuku)
    {
        if (item.nama_buku == namaBuku)
        {
            return item;
        }
    }
    return{"Buku tidak ditemukan", "Penulis Tidak Ditemukan",0, 0};
}

int main()
{

  string nama_buku;
  char option;
  Buku hasil_pencarian;

  vector<Buku> listBuku ={
    {"Berani Tidak Disukai", "Ichiro Kishimi", 352, 2019},
    {"Berani Bahagia", "Ichiro Kishimi", 360, 2020},
    {"The Strangers", "Albert Camus", 140, 2016}
  };

  do
  {
   cout<<"Mau cari buku apa? :";
   getline(cin,nama_buku);
   
   hasil_pencarian = cariBuku(nama_buku, listBuku);

   if (hasil_pencarian.jum_halaman == 0)
   {
    cout<<"Nama buku tersebut tidak ada, pastikan input buku sesuai list";
   }else{
    cout<<"\n === Buku Ditemukan ==="<<endl;
    cout<<"Nama Buku        : "<<hasil_pencarian.nama_buku<<endl;
    cout<<"Penulis          : "<<hasil_pencarian.penulis<<endl;
    cout<<"Jumlah Halaman   : "<<hasil_pencarian.jum_halaman<<endl;
    cout<<"Tahun Terbit     : "<<hasil_pencarian.tahun_terbit<<endl;
   }
   
   cout<<"\nMau cari lagi? (y/n) : ";
   cin>>option;
  } while (option == 'y' || 'Y');
  
  



  return 0;
}