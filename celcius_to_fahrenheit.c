# include <stdio.h>

int main(void) {
    float cel, fahrenheit;
    float lower, upper, step;
    lower = 0;
    upper = 150;
    step = 10;

    cel = lower;
    printf("Celcius to Fahrenheit conversion table \n");
    while(cel <= upper) {
        fahrenheit = ((9.0 / 5.0) * cel) + 32.0;
        printf("%3.0f %6.1f\n", cel, fahrenheit);
        cel = cel + step;
    }
}
