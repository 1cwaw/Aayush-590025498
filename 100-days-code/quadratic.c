#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, RealPart, ImagPart, root1, root2;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("You entered: a=%.2lf, b=%.2lf, c=%.2lf\n", a, b, c);

    discriminant = b*b - 4.*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct:\n");
        printf("root1 = %.2lf\nroot2 = %.2lf\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are real and equal:\n");
        printf("root1 = root2 = %.2lf\n", root1);
    }
    else {
        RealPart = -b/(2.*a);
        ImagPart = sqrt(discriminant)/(2.*a);
        printf("Roots are Complex\n");
        printf("root1 = %.2lf + %.2lfi\n", RealPart, ImagPart);
        printf("root1 = %.2lf - %.2lfi\n", RealPart, ImagPart);

    }

    return 0;
}
