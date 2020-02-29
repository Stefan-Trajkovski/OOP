#include <stdio.h>
#include <stdlib.h>
typedef struct drzava{
char ime[20];
char prezime[20];
char glavenGrad[20];
int brZiteli;
}drzava;

    void  maximum(drzava *d,int n){

    int i;
    int max;
    int pamtiIndex;

    max=d[0].brZiteli;
    for( i=1;i<n;i++){
    if( max <d[i].brZiteli){
        max=d[i].brZiteli;
        pamtiIndex=i;

    }
}
    printf("_-_  %s %s %d   _-_",d[pamtiIndex].ime,d[pamtiIndex].glavenGrad, d[pamtiIndex].prezime,  d[pamtiIndex].brZiteli);


    }




 int main(){
int n,i;
scanf("%d",&n);
struct drzava d[n];

for(int i=0; i<n;i++){
    scanf("%s %s %s %d",&d[i].ime, &d[i].prezime, &d[i].glavenGrad, &d[i].brZiteli);



}
 maximum(d,n);

    return 0;
}
