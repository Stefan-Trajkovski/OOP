#include <stdio.h>
#include <stdlib.h>
//edna nedela ima 5 dena. sab i nedela ne se raboti
typedef struct SkiLift {
char imeSki[15];
int maxbrojKorisnici;
int pusten;
}SkiLift;

typedef struct SkiCenter{
char imeSkijacki[15];
char drzava[20];
SkiLift sl[20];
int brSkiLift;


}SkiCenter;
void najgolemKapacitet(SkiCenter *sc, int n){
int i,j;
int suma=0;
int max=0;
int max1=0;
int suma1;
int pamtiIndex;
for(i=0;i<n;i++){

max=0;
        for(j=1;j<sc[i].brSkiLift;j++){
        max=max+sc[i].sl[0].maxbrojKorisnici;

        printf("\n\n\nMAXOTTT EEEE %d\n\n\n",max);
            if(max<sc[i].sl[j].maxbrojKorisnici){
                suma=max+sc[i].sl[j].maxbrojKorisnici;
                max=sc[i].sl[j].maxbrojKorisnici;
                pamtiIndex=i;
            }
        }
printf("%s\n%s\n %d",sc[pamtiIndex].imeSkijacki,sc[pamtiIndex].drzava,suma);
}


}



int main()
{

    int n,i,j;
	scanf("%d", &n);
	SkiCenter sc[n];
	for (i = 0; i < n; i++){
		scanf("%s",sc[i].imeSkijacki);
		scanf("%s",sc[i].drzava);
		scanf("%d",&sc[i].brSkiLift);
		//vnesi ime
		//vnesi drzava
		//vnesi broj na liftovi

        for(j=0;j<sc[i].brSkiLift;j++){
            scanf("%s",sc[i].sl[j].imeSki);
            scanf("%d",&sc[i].sl[j].maxbrojKorisnici);
            scanf("%d",&sc[i].sl[j].pusten);



        }
        //za sekoj ski lift vnesi:
			//vnesi ime
            //vnesi maksimalen broj korisnici
            //vnesi dali e pusten vo funkcija
	}

    //povik na funkcijata najgolemKapacitet
    najgolemKapacitet( sc,  n);
	return 0;
}

