#include <stdio.h>

int main(void) {
    float area=0, raggio=0, circonferenza=0;
    /*while (raggio<=20) {
        circonferenza = (2*3.14)*raggio;
        printf("il perimetro e': %.2f \n", circonferenza);

        area = raggio*raggio*(3.14);
        printf("l'area del cerchio e': %.2f \n", area);

        raggio++;
    }*/
    for (raggio = 1; raggio <= 20; raggio++) {
        circonferenza = (2*3.14)*raggio;
        printf("il perimetro e': %.2f || ", circonferenza);
        area = raggio*raggio*(3.14);
        printf("l'area del cerchio e': %.2f \n", area);
    }
}