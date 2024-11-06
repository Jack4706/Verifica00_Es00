#include <stdio.h>

int main() {

    const int NVAL = 10;
    const float TMIN = -20.0f;
    const float TMAX = 50.0f;
    int i, errore;
    float temperatura, valmin;
    valmin = TMAX + 1;

    for (i = 0; i < NVAL; i++) {
        do {
            errore = 0;
            printf("inserisci la temperatura:");
            scanf("%f", &temperatura);
            if ((temperatura < TMIN) || (temperatura > TMAX)) {
                errore = 1;
                printf("la temperatura deve essere compresa tra %.1f e %.1f\n", TMIN, TMAX);
            }
        } while (errore == 1);
        if (temperatura < valmin) {
            valmin = temperatura;
        }
    }
    printf("il valore della temperatura minima e' %.1f\n", valmin);

    return 0;
}
