#include <stdio.h>

int main(void) {
  int i[5] = {1,4,9,16,25};
    printf("%d %d %d %d\n",i[2],i[3-2],i[4]-1,i[4+1]);
  char name[] = "COMPUTER";
    printf("%c %c %c %c\n",name[0],name[4],name[3+4],name[8]);
  int number[] = {3,7,12,24,45};
    number[3] = number[1];
    number[1] = number[3];
    printf("%d %d\n",number[1],number[3]);
  int numberr[] = {3,7,12,24,45}, temp;
    temp = numberr[3];
    numberr[3] = numberr[1];
    numberr[1] = temp;
    printf("%d %d\n",numberr[1],numberr[3]);
  long cpu[5][2] = { 8088,4, 8086,4, 80286,10, 80386,20, 80486,40 };
    printf("%d %d %d %d\n",cpu[5][2],cpu[0][1],cpu[4][2],cpu[4][0+1]);
} 