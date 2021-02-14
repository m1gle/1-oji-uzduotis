#include <iostream>
#include <string>

using std::endl;
int main () {
std::string x= "*";
std::string s= " ";
std::string vardas;
std::string lytis;
std::string pasisveikinimas;
int eiles;

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

std::cout<<"Iveskite eiluciu ilgi (>2): "<<endl;
std::cin>>eiles;

int ilgis= (eiles-1)*(vardas.size()+pasisveikinimas.size()+5)+7;
int eilesIlgis=vardas.size()+pasisveikinimas.size()+5;
std::string X[ilgis];

//Eilučių kūrimas
for(int i=0;i<eilesIlgis;i++){
    X[i]=x;
}

int k=eilesIlgis; 
int m=k+eilesIlgis;
for(int j=0;j<(eiles/2-1);j++){
for(int i=k;i<m;i++){
    X[i]=s;
}
    X[k]=x;
    X[m-1]=x;
    k=k+eilesIlgis;
    m=k+eilesIlgis;
}

X[k]=x;
X[k+1]=s;
X[k+2]=pasisveikinimas;
X[k+3]=vardas;
X[k+4]="!";
X[k+5]=s;
X[k+6]=x;

m=m+7;
k=k+7;

int y=eiles/2-1;
if(eiles%2==0) y--;

for(int j=0;j<y;j++){
    for(int i=k;i<m;i++){
        X[i]=s;
    }
    X[k]=x;
    X[m-1]=x;
    k=k+eilesIlgis;
    m=k+eilesIlgis;
}

for(int i=k;i<ilgis;i++){
    X[i]=x;
}

for(int i=0;i<ilgis;i++){
    std::cout<<X[i];
    if((i+1)%eilesIlgis==0 and i<eilesIlgis*(eiles/2)) std::cout<<endl;
    else if (i>(eilesIlgis*(eiles/2)+5) and (i-6)%eilesIlgis==0) std::cout<<endl;
}

}
