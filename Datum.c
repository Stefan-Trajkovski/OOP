#include <stdio.h>
#include <stdlib.h>
 typedef struct Date {
 int year;
 int month;
 int day;
 }Date;
 //-1 ako se razlicni i mesec i denovi,a godini isti.
// 2 ako se isti mesecite a razlicni denovite.
  //3 ako se razlicni god, a isti mesecite i denovite.
   // 4 ako se razl godinite mes isti a razl denovite
      //  5 ako se razl god isti mes ist denovite,
      //  6 ako se razl god razl mes razl den
        int  compare(Date d1,Date d2){
      if(d1.year==d2.year){
        if(d1.month==d2.month){
            if(d1.day==d2.day){
                return 0;
            }
        }

        else if(d1.month!=d2.month){
            if(d1.day!=d2.day){
                return -1;
            }

        }
        else if(d1.month==d2.month){
            if(d1.day!=d2.day){
                return 2;
            }
        }
      }
      else {
        if(d1.month==d2.month){
            if(d1.day==d2.day){
                return 3;
            }
            else{
                return 4;
            }
        }

        else if(d1.month!=d2.month){
            if(d1.day==d2.day){
                return 5;
            }
            else{
                return 6;
            }
        }


      }



  }


int main()
{
    int godini;
    int meseci;
    int denovi;
    Date d1;
    Date d2;
   printf("Vnesi prvi :Godina/Mesec/Den.\n");

scanf("%d %d %d",&d1.year,&d1.month,&d1.day);
printf("a");
   printf("Vnesi vtori :Godina/Mesec/Den.\n");
   scanf("%d %d %d",&d2.year,&d2.month,&d2.day);
   //-1 ako se razlicni i mesec i denovi,a godini isti.
// 2 ako se isti mesecite a razlicni denovite.
  //3 ako se razlicni god, a isti mesecite i denovite.
   // 4 ako se razl godinite mes isti a razl denovite
      //  5 ako se razl god razlicni mes ist denovite,
      //  6 ako se razl god razl mes razl den
   if(compare(d1,d2) == 0){
    printf("Isti se");
   }
   else if(compare(d1,d2) == -1){
    meseci=abs(d1.month-d2.month)*30;
    denovi=abs(d1.day-d2.day);
    printf("Razlikata vo denovi e %d\n",meseci+denovi);
   }
   else if(compare(d1,d2)==2){
    denovi=abs(d1.day-d2.day);
    printf("Razlikata vo denovi e %d\n", denovi);
   }
   else if(compare(d1,d2)==3){
    godini=abs(d1.year-d2.year)*360;
    printf("Razlikata vo denovi e %d\n", godini);
   }
   else if(compare(d1,d2)==4){
       godini=abs(d1.year-d2.year)*360;
       denovi=abs(d1.day-d2.day);
    printf("Razlikata vo denovi e %d\n", godini+denovi);
   }
   else if(compare(d1,d2)==5){
    meseci=abs(d1.month-d2.month)*30;
    godini=abs(d1.year-d2.year)*360;
    printf("Razlikata vo denovi e %d\n", godini+meseci);
   }
   else  {
    meseci=abs(d1.month-d2.month)*30;
    godini=abs(d1.year-d2.year)*360;
    denovi=abs(d1.day-d2.day);
    printf("Razlikata vo denovi e %d\n", godini+denovi+meseci);
   }


    return 0;
}
