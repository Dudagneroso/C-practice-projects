#include <stdio.h>
#include <stdlib.h>
float celsius (float f){
    return (f - 32.0) * (5.0/9.0);
}

int main()
{
    float f, c;
    printf("Digite o grau Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);

    printf("%.2f Fahrenheit e igual a %.2f Celsius", f, c);
    return 0;
}
