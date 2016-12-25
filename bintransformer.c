/* bintransformer.c */
#include<stdio.h>

int number;
int rest[256];
int i=0;

void output();

void transformation() {
  while(number>0) {
    rest[i++]=number%2;
    number=number/2;
  }
  output();
}

void output() {
  for(--i; i>=0; i) {
    printf("%d",rest[i--]);
  }
}
  
int main() {
   printf("dez: ");
   scanf("%i",&number);
   if(number>1073741823) {
     printf("Zahl zu gross!\n");
     return 1;
   }
   printf("bin: ");
   
   if(number==0) {
     printf("0");
   }
   else {
     transformation();
   }
   printf("\n");
   return 0;
}
    