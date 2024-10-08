#include <stdio.h>

int main(void) {
    float area, raggio, perimetro;
    raggio = 1;
    while (raggio<=20) {
        perimetro = (2*3.14)*raggio;
        printf("il perimetro e': %.2f \n", perimetro);

        area = raggio*raggio*(3.14);
        printf("l'area del cerchio e': %.2f \n", area);

        raggio++;
    }

}
