#include <stdio.h>
#include <stdlib.h>
#define MIL 1.609
int main()
{
    // Mil Sorusu
    // Bir arabanin gittigi yolu mil cinsinden girdi olarak alan ve
    //bunu km'ye ceviren bir program yaziniz.(1 mil =1.609 km)
    float mil_yol,km_yol;
    printf("Arabanin gittigi yol\n");
    scanf("%f",&mil_yol);
    km_yol=mil_yol*MIL;
    printf("Araba %f  mil yol gitmistir.",km_yol);
}
