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

 //Ejercicio 4

int main(void){
    int num1, num2;

    p("Ingrese dos n%cmeros: \n", 163);
    s("%d", &num1);
    s("%d", &num2);
    
    if(num1>num2)
        p("El n%cmero %d es mayor que %d",163,num1,num2);
    else if (num1<num2)
        p("El n%cmero %d es menor que %d",163,num1,num2);
    else 
        p("El n%cmero %d es igual que %d",163,num1,num2);
    return 0;
}; 