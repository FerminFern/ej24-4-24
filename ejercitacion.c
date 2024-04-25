#include <stdio.h>
#define p printf
#define s scanf

/*
//Ejercicio 1
 int main (){
    int year;

    p("Ingrese un a%co <3: ", 164);
    s("%d", &year);

    if((year%4) == 0)
        p("El a%co ingresado es bisiesto!", 164);
    else
        p("El a%co no es bisiesto :(", 164);

    return 0;
}; */

/* //Ejercicio 2
 int main (){
    int num1, num2;

    p("Ingrese dos n%cmeros: \n", 163);
    s("%d", &num1);
    s("%d", &num2);

    if(num1%num2)
        p("La divisi%cn no es exacta :/", 162);
    else
        p("La divisi%cn es exacta!!",162);
    return 0;
}; */

/*  //Ejercicio 3
int main(void){
    int num1, num2;

    p("Ingrese dos n%cmeros: \n", 163);
    s("%d", &num1);
    s("%d", &num2);

    if (num2)
        if(num1%num2)
            p("La divisi%cn no es exacta :/", 162);
        else
            p("La divisi%cn es exacta!!",162);
    else
        p("NO SE PUEDE DIVIDIR POR CERO!!!");
    return 0;
};  */

// Ejercicio 4

/* int main(void){
    int num1, num2;

    p("Ingrese dos n%cmeros:\n", 163);
    s("%d", &num1);
    s("%d", &num2);

    if(num1>num2)
        p("El n%cmero %d es mayor que %d",163,num1,num2);
    else if (num1<num2)
        p("El n%cmero %d es menor que %d",163,num1,num2);
    else
        p("El n%cmero %d es igual que %d",163,num1,num2);
    return 0;
};  */

// Ejercicio 5
/* int main(void)
{
    int distancia, km, m, cm;

    p("Ingrese una distancia en cent%cmetros:\n", 161);
    s("%d", &distancia);

    km = distancia / 100000;
    m = distancia / 100 - km * 1000;
    cm = distancia - m * 100 - km * 100000;
    if (distancia >= 0)
    {
        p("La distancia es: \n");
        p("%dKm, %dm, %dcm", km, m, cm);
    }
    else
        p("la distancia no es valida");
    return 0;
} */

// Ejercicio 2.1
/* int main()
{
    int num, ingreso;
    p("ingrese su edad \n");
    s("%d", &num);
    p("ingrese sus ingresos \n");
    s("%d", &ingreso);

    if (num > 21 && ingreso >= 80000)
        p("esta en condiciones de tributar");
    else
        p("no esta en condiciones de tributar");

    return 0;
} */

// Ejericio 2.4
/* int main()
{
    int renta;
    p("ingrese su renta mensual \n");
    s("%d", &renta);

    if (renta < 100000 && renta>0)
        p("su porcentaje impositivo equivale a 5%c", 37);
    else if (renta < 350000)
        p("su porcentaje impositivo equivale a 15%c", 37);
    else if (renta < 700000)
        p("su porcentaje impositivo equivale a 20%c", 37);
    else if (renta <= 1000000)
        p("su porcentaje impositivo equivale a 30%c", 37);
    else
        p("su porcentaje impositivo equivale a 45%c", 37);
    return 0;
} */

// Ejercicio inventado por el profe
// ingresar o pedir por pantalla un numero entero entre el 1 y el 7 e indicar a que dia de la semana pertenece.
//1 lunes :)
//indicar si no corresponde

int main()
{
    int dia;
    p("ingrese un n%cmero entero entre el 1 y el 7: \n", 163);
    s("%d", &dia);

    if (dia > 0 && dia <= 7)
    {
        if (dia == 1)
            p("el d%ca es lunes", 161);
        else if (dia == 2)
            p("el d%ca es martes", 161);
        else if (dia == 3)
            p("el d%ca es mi%crcoles", 161, 130);
        else if (dia == 4)
            p("el d%ca es jueves", 161);
        else if (dia == 5)
            p("el d%ca es viernes", 161);
        else if (dia == 6)
            p("el d%ca es s%cbado", 161, 160);
        else
            p("el d%ca es domingo", 161);
    }
    else
        p("No ingres%c un n%cmero v%clido", 162, 163, 160);
    return 0;
}