#include <stdio.h>
#define STEP 20
#define MAX 300
int main() {
   float fdeg = 0;
   printf("--------------------------------\n");
   printf("|\t华氏度\t|\t摄氏度\t|\n");
   while (fdeg <= MAX){
    float cdeg =  (fdeg - 32) * (5.0 / 9.0);
    printf("|\t%.0f\t|\t%.2f\t|\n", fdeg, cdeg);
    fdeg = fdeg + STEP;
   }
   printf("--------------------------------\n");
   return 0;
}
