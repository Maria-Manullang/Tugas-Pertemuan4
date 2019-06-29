#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
 void setcolor(unsigned short color) {
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon,color);
    }

int main()
{
    int nq,nm,nf;
    char nama[20],kel[5],no[5],Grade,jawab;
    float na;

    do{
    system("cls");
    cout << "Nomor Induk Siswa\t: ";cin>>no;
    //gets(no);
    cout << "Nama Siswa\t\t: ";cin>>nama;
   // gets(nama);
    cout << "Kelas\t\t\t: "; cin>>kel;
    cout << "Nilai Quis\t\t: "; cin>>nq;
    cout << "Nilai MID\t\t: "; cin>>nm;
    cout << "Nilai Final\t\t: "; cin>>nf;

    //process
    na=(2*nq+3*nm+5*nf)/10;

    if(na >= 80 && na <= 100){
        Grade = 'A';
    }else if(na >= 70 && na <=79){
        Grade = 'B';
    }else if(na >= 60 && na <=69){
        Grade = 'C';
    }else if(na >=50 && na <= 59){
        Grade = 'D';
    }else {
        Grade = 'E';
    }

    //output
    cout<<"\n======================================\n";
    cout<<"Nama Siswa\t\t: " <<nama<< endl;
    cout<<"Kelas\t\t\t: " <<kel<< endl;
    setcolor(12);
    //printf("Nilai Akhir\t\t: ", na);
    cout<<"Nilai Akhir\t\t: " <<na<< endl;
    setcolor(12);
    cout<<"Nilai Grade\t\t: " <<Grade<<endl;

    setcolor(7);
    cout<<"\nApakah Ingin Ulang Lagi[y]?";cin>>jawab;

    }while(jawab=='Y'||jawab=='y');

    return 0;
}
