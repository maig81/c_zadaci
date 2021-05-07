// Napisati C program za izracunavanje povrsine trougla u ravni ako su zadate koordinate temena

#include <stdio.h>
#include <math.h>

main1()
{
    float x_a, x_b, x_c, y_a, y_b, y_c, a, b, c, polovina_obima, povrsina;

    printf("Unesite koordinate temena:\n");

    printf("Teme 1:\n");
    scanf_s("%f %f", &x_a, &y_a);
    printf("Teme 2:\n");
    scanf_s("%f %f", &x_b, &y_b);
    printf("Teme 3:\n");
    scanf_s("%f %f", &x_c, &y_c);

    // Duzina stranica
    a = sqrt(pow(x_a-x_b,2) + pow(y_a-y_b,2));
    b = sqrt(pow(x_b-x_c,2) + pow(y_b-y_c,2));
    c = sqrt(pow(x_c-x_a,2) + pow(y_c-y_a,2));
    polovina_obima = (a + b + c)/2;

    // Povrsina trougla
    povrsina = sqrt(polovina_obima * (polovina_obima-a)*(polovina_obima-b)*(polovina_obima-c));

    printf("Povrsina trougla je %f", povrsina);

}
