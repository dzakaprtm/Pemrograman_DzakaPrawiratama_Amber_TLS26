#include<iostream>
#include<string>
using namespace std;
string pesan,hasil="";
int main(){
    cout << "Masukkan pesan rahasia: ";
    cin>>pesan;
    for(int i=0;i<pesan.length();i++){
        if(i==0){
            hasil+=pesan[i];
        } 
        else{
            int nilaiSekarang=pesan[i]-'A'+1;
            int nilaiSebelumnya=pesan[i-1]-'A'+1;
            int nilaiBaru=nilaiSekarang+nilaiSebelumnya;
            nilaiBaru=(nilaiBaru-1)%26+1;
            char hurufBaru='A'+nilaiBaru-1;
            hasil+=hurufBaru;
        }
    }
    cout<<"Pesan setelah dienkripsi: "<<hasil<<endl;
    return 0;
}