//TUGAS BIG SCENE PEMROGRAMAN - TETI LAB SKILL 2024

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    float Rumus, Volume_Kubus, Volume_Balok, Volume_Tabung, Volume_Limas_Segi_Empat, Volume_Bola;
    int Bangun_Ruang, Pilihan, Sisi, Panjang, Lebar, Tinggi, Jari_jari, Panjang_Alas, Lebar_Alas;
    float phi = 3.14, a = 0.33 , b=1.33;

cout<<"***** Menghitung Volume Bangun Ruang ***** "<<endl;
    cout<<"1.Volume Kubus"<<endl;
    cout<<"2.Volume Balok"<<endl;
    cout<<"3.Volume Tabung"<<endl;
    cout<<"4.Volume Limas Segi Empat"<<endl;
    cout<<"5.Volume Bola"<<endl;
    cout<<"Masukkan Pilihan = ";
    cin>>Bangun_Ruang;
    cout<<endl;

    //Mencari Volume Kubus
    if(Bangun_Ruang == 1){
    cout<<"Volume Kubus \n";
    cout<<"Masukkan sisi : "; cin>>Sisi;
    Rumus=Sisi*Sisi*Sisi;
    cout<<"Volumenya adalah = "<<Rumus;
    }

    //Mencari Volume Balok
    else if(Bangun_Ruang == 2){
    cout<<"Volume Balok \n";
    cout<<"Masukkan Panjang : "; cin>>Panjang;
    cout<<"Masukkan Lebar :"; cin>>Lebar;
    cout<<"Masukkan Tinggi :"; cin>>Tinggi;
    Rumus=Panjang*Lebar*Tinggi;
    cout<<"Volumenya adalah = "<<Rumus;
    }
    
    //Mencari Volume Tabung
     else if(Bangun_Ruang == 3){
    cout<<"Volume Tabung\n";
    cout<<"Masukkan Tinggi :"; cin>>Tinggi;
    cout<<"Masukkan Jari-jari :"; cin>>Jari_jari;
    Rumus= phi*Jari_jari*Jari_jari*Tinggi;
    cout<<"Volumenya adalah = "<<Rumus;
    }

    //Mencari Volume Limas Segi Empat
     else if (Bangun_Ruang == 4){
    cout<<"Volume Limas Segi Empat\n";
    cout<<"Masukkan Panjang Alas :"; cin>>Panjang_Alas;
    cout<<"Masukkan Lebar Alas:"; cin>>Lebar_Alas;
    cout<<"Masukkan Tinggi :"; cin>>Tinggi;
    Rumus= Panjang_Alas*Lebar_Alas*Tinggi*a;
    cout<<"Volumenya adalah = "<<Rumus;
    }

    //Mencari Volume Bola
     else if (Bangun_Ruang == 5){
    cout<<"Volume Bola\n";
    cout<<"Masukkan jari-jari :"; cin>>Jari_jari;
    Rumus = b*phi*Jari_jari*Jari_jari*Jari_jari;
    cout<<"Volumenya adalah = "<<Rumus;
    }
}

