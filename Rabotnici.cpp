#include <iostream>
#include<cstring>
using namespace std;

class Rabotnik{
private:
    char ime[30];
    char prezime[30];
    int plataR;
public:
    Rabotnik(){};
    Rabotnik(char *ime, char *prezime, int plataR){
    strcpy(this->ime,ime);
    strcpy(this->prezime,prezime);
    this->plataR=plataR;
    };
void getPlatapecati(){
cout<<"sadsaasdasd "<<ime<<endl;}

    int getPlata(){
    return plataR;}

    void pecati(){
    cout<<ime<<" "<<prezime<<" "<<plataR<<endl;
    }
};

class Fabrika{
private:
    Rabotnik r[100];
    int brojVraboteni;
public:
    Fabrika(){};
    Fabrika(Rabotnik *r,int brojVraboteni){
    for(int i=0;i<brojVraboteni;i++){
        this->r[i]=r[i];
    }
      this->brojVraboteni=brojVraboteni;
    };

void pecatiVraboteni(){
      cout<<"Site Vraboteni"<<endl;
    for(int i=0;i<brojVraboteni;i++){
     r[i].pecati();   }
    };

void pecatiSoPlata(int plataMin){
cout<<"Vraboteni so plata povisoka od: "<<plataMin;
for(int i=0;i<brojVraboteni;i++){
    if(r[i].getPlata()>plataMin){
        r[i].pecati();
    }
}
}

};



int main()
{
    char ime[30];
    char prezime[30];
    int  plataR;
    int brVraboteni;
    int minPlata;
    cin>>brVraboteni;
    Rabotnik r[brVraboteni];

    Fabrika f(r,brVraboteni);


    for(int i=0;i<brVraboteni;i++){
        cin>>ime;
        cin>>prezime;
        cin>>plataR;
        r[i]=Rabotnik(ime,prezime,plataR);
    }
    cout<<"Vnesi ja Minimalnata Plata"<<endl;
     cin>>minPlata;
     cout<<"----------------"<<endl;

    f.pecatiVraboteni();
    f.pecatiSoPlata(minPlata);

    return 0;
}

