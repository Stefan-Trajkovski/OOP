#include <stdio.h>
#include <stdlib.h>
 #include <ctype.h>
 #include<string.h>
 typedef struct Student{
 char ime[20];
 char prezime[20];
 int brojIndeks;
 int poeni;
 }Student;


void sort(Student *s,Student *k,int n){
    int i,j;
    int temp;
    char temp2[30];
   for(i=0;i<n;i++){
    for(j=i+1; j<n;j++){
    if(s[i].poeni < s[j].poeni){

        k[i]=s[i];
        s[i]=s[j];
        s[j]=k[i];
    }
    }
    s[i].ime[0]=toupper(s[i].ime[0]);
    s[i].prezime[0]=toupper(s[i].prezime[0]);
    printf("%s   %s   %d   %d\n",s[i].ime,s[i].prezime,s[i].brojIndeks,s[i].poeni);
    }
}


 int main(){
int i,j,n;
int poeni;

scanf("%d ",&n);
Student s[n];
Student k[n];
for(i=0;i<n;i++){
      int vkPoeni=0;

    scanf("%s\n %s\n %d\n ",&s[i].ime, &s[i].prezime, &s[i].brojIndeks);
for(j=0;j<4;j++){
    scanf("%d",&poeni);
    vkPoeni=vkPoeni+poeni;
}
printf("vkupnite poeni na %d se %d\n",i,vkPoeni);
s[i].poeni=vkPoeni;
}
    sort(s,k,n);
    return 0;
}
