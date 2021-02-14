#include <iostream>
#include <string>

using std::endl;
int main () {
std::string x= "*";
std::string s= " ";
std::string vardas;
std::string lytis;
std::string pasisveikinimas;
std::cout<<"Iveskite varda: "<<endl;
std::cin>>vardas;

std::cout<<"Iveskite savo lyti moteris/vyras: "<<endl;
std::cin>>lytis;
if(lytis=="moteris"){
pasisveikinimas= "Sveika, ";
}

if(lytis=="vyras"){
pasisveikinimas= "Sveikas, ";
}

int ilgis= vardas.size()+pasisveikinimas.size()+5;
std::string A[ilgis];
std::string B[ilgis];
std::string C[7];
std::string D[ilgis];
std::string E[ilgis];

//1-oji ir 5-oji eilutė
for(int i=0;i<ilgis;i++){
    A[i]=x;
    E[i]=x;
}

//3-oji (pasisveikinimo) eilutė
C[0]=x;
C[6]=x;
C[1]=s;
C[5]=s;
C[2]=pasisveikinimas;
C[3]=vardas;
C[4]="!";

//2-oji ir 4-oji eilutė
B[0]=x;
D[0]=x;
B[ilgis-1]=x;
D[ilgis-1]=x;
for(int i=1;i<ilgis-1;i++){
    B[i]=s;
    D[i]=s;
}

//spausdinimas
for(int i=0;i<ilgis;i++){
    std::cout<<A[i];
}
std::cout<<endl;

for(int i=0;i<ilgis;i++){
    std::cout<<B[i];
}
std::cout<<endl;

for(int i=0;i<7;i++){
    std::cout<<C[i];
}
std::cout<<endl;

for(int i=0;i<ilgis;i++){
    std::cout<<D[i];
}
std::cout<<endl;

for(int i=0;i<ilgis;i++){
    std::cout<<E[i];
}


}
