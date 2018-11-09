#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
#include <string.h> 
#include "windows.h" 

struct chitatel 
{ 
char fio[20]; 
char book[20]; 
int bilet; 
int wozwr; 
}; 

struct chitatel chitatels[20]; 
struct chitatel buffer; 

int i,j,n,menu,k,x,bilet1,wozwr1,z=0,y,r, s; 
char fio1[20],book1[20]; 


int main() 
{ setlocale(LC_ALL,"Russian"); 
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 


printf("Vvedite skolko chitateley: "); 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
printf("Chitatel ¹%d\n", i+1); 

puts("Vvedite F.I.O.: "); 
fflush(stdin); 
gets(chitatels[i].fio); 


puts("Nazwanie knigi: "); 
fflush(stdin); 
gets(chitatels[i].book); 

puts("Vvedite nomer bileta: "); 
scanf("%d", &chitatels[i].bilet); 

puts("Vvedite datu wozwrata: "); 
scanf("%d", &chitatels[i].wozwr); 

} printf("\n\n"); 

while(1) 
{ 
printf("\nOperaciia: "); 
printf("\nSort-1 "); 
printf("\nPoisk-2 "); 
printf("\nIzmenenie-3 "); 
printf("\nUdalenie-4 "); 
printf("\nSpisok-5 "); 
printf("\nVihod-6 \n"); 
scanf("%d",&menu); 
switch(menu) 
{ 
case 1: 
{ 
printf("\nKriterii sort:\n"); 
printf("1-fio\n"); 
printf("2-naz knigi\n"); 
printf("3-nomer bileta\n"); 
printf("4-data wozwrata\n"); 
printf("0-vihod iz kriteria\n"); 
printf("Vibor kriteria "); 
scanf("%d",&x); 

switch(x){ 
case 0:break; 
case 1:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if(strcmp(chitatels[i].fio,chitatels[j].fio)>0){ 
buffer=chitatels[i]; 
chitatels[i]=chitatels[j]; 
chitatels[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
} 
break; 
} 
case 2:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (strcmp(chitatels[i].book,chitatels[j].book)>0){ 
buffer=chitatels[i]; 
chitatels[i]=chitatels[j]; 
chitatels[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
} 
break; 
} 
case 3:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (chitatels[i].bilet>chitatels[j].bilet){ 
buffer=chitatels[i]; 
chitatels[i]=chitatels[j]; 
chitatels[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
} 
break; 
} 
case 4:{ 
for (i=0; i<n-1; i++) 
for (j=i+1; j<n; j++) 
if (chitatels[i].wozwr>chitatels[j].wozwr){ 
buffer=chitatels[i]; 
chitatels[i]=chitatels[j]; 
chitatels[j]=buffer; 
} 

for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
} 
break; 
} 

} 
break; 
} 
case 2: 
{ 
while(1) 
{ 
printf("\nKriterii sort:\n"); 
printf("1-fio\n"); 
printf("2-naz knigi\n"); 
printf("3-nomer bileta\n"); 
printf("4-data wozwrata\n"); 
printf("0-vihod iz kriteria\n"); 
printf("Vibor kriteria "); 
scanf("%d",&x); 
switch(x) 
{ 
case 0:break; 
case 1: 
{ 
z=0; 
printf("vvedite fio: "); 
fflush(stdin); 
gets(fio1); 
for(i=0;i<n;i++) 
{ 
if(strcmp(fio1,chitatels[i].fio)==0) 
{ 
printf("chitatel ¹%d\n",i+1);
 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
z++; 
} 
} 
if(z==0) 
printf("ne naideno\n"); 
break; 
} 
case 2: 
{ 
z=0; 
printf("nazvanie knigi: "); 
fflush(stdin); 
gets(book1); 
for(i=0;i<n;i++) 
{ 
if(strcmp(book1,chitatels[i].book)==0) 
{ 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
z++; 
} 
} 
if(z==0) 
printf("ne naiden\n"); 
break; 
} 
case 3: 
{ 
z=0; 
printf("bilet: "); 
fflush(stdin); 
scanf("%d",&bilet1); 
for(i=0;i<n;i++) 
{ 
if(bilet1==chitatels[i].bilet) 
{ 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
z++; 
} 
} 
if(z==0) 
printf("Ne naiden\n"); 
break; 
} 
case 4: 
{ 
z=0; 
printf("Wozwrat: "); 
fflush(stdin); 
scanf("%d",&wozwr1); 
for(i=0;i<n;i++) 
{ 
if(wozwr1==chitatels[i].wozwr) 
{ 
printf("chitatel ¹%d\n",i+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
z++; 
} 
} 
if(z==0) 
printf("Ne naiden\n"); 
break; 
} 

} 
if(x==0) 
break; 
continue; 
} 
break; 
} 
case 3: 
{ 
while(1) 
{ 
printf("\nVvedite ¹ cchitatelya kogo izmenit "); 
scanf("%d",&r); 
printf("\nvvedite kriterii \n1-fio \n2-naz knigi \n3-bilet \n4-wozwrat \n0-vihod \n"); 
scanf("%d",&y); 
switch(y) 
{ 
case 0:break; 
case 1:{ 
printf("novaia familia: "); 
fflush(stdin); 
gets(fio1); 
strcpy(chitatels[r-1].fio,fio1); 
break; 
} 
case 2: 
{ 
printf("nov naz knigi: "); 
fflush(stdin); 
gets(book1); 
strcpy(chitatels[r-1].book,book1); 
break; 
} 
case 3: 
{ 
printf("nov nomer bileta: "); 
scanf("%d",&bilet1); 
chitatels[r-1].bilet=bilet1; 
break; 
} 
case 4: 
{ 
printf("nov data wozwrata: "); 
scanf("%d",&wozwr1); 
chitatels[r-1].wozwr=wozwr1; 
break; 
} 

} 
if(y==0) 
break; 
continue; 
} 
break; 
} 
case 4: 
{ 
printf("Vvedite ¹ chitatelya kogo udalit "); 
scanf("%d",&s); 
s--; 
printf("\n\n"); 
printf("chitatel ¹%d udalen\n",s+1); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 

for(s;s<=n;s++) 
{ 
strcpy(chitatels[s].fio, chitatels[s+1].fio); 
strcpy(chitatels[s].book, chitatels[s+1].book); 
chitatels[s].bilet = chitatels[s+1].bilet; 
chitatels[s].wozwr = chitatels[s+1].wozwr; 
} 
n--; 
break; 
} 
case 5: 
{ 
for(i=0;i<n;i++) 
{ 
printf("\n\n"); 
printf("fio: %s ",chitatels[i].fio); 
printf("naz knigi: %s ",chitatels[i].book); 
printf("bilet: %d ",chitatels[i].bilet); 
printf("wozwrat knigi: %d ",chitatels[i].wozwr); 
} 
break; 
} 
case 6:exit(1); 
} 
continue; 
} 
return 0; 
}
