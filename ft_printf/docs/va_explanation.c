#include <stdarg.h>

char *mi_dtoa(double d, char *NumStr)
{
    int ie, id;

    ie = (int) d;
    id = (int) round((d - ie) * 100);

    sprintf(NumStr, "%d.%d", ie, id );
    //printf("NumStr=%s\n", NumStr);
    
    return (NumStr);
}


void mi_printf(char *formato, ...) {
    void *ptrPila;
    char *ptrForm = formato;
    char NumStr[100];

    va_list argptr;
    va_start(argptr, ptrForm);  // initializes argptr variable to be used with the va_arg and va_end macros. 
                                // The last_arg is the last known fixed argument being passed to the function
                                // i.e. the argument before the ellipsis.
    
    while (*ptrForm) {
        //printf("*ptrForm=%c\n", *ptrForm);
        if (*ptrForm != '%') {
            // Pasamos todos los caracteres que novson 
            // de formato al espacio asignado a la variable cadena
            printf("%c", *ptrForm);
        }
        else { // procesamos los caracteres de formato
                // (ver explicación adelante) 
            ptrForm++;
            //printf("*ptrForm=%c\n", *ptrForm);
            switch (*ptrForm) {
                case 'd' :
                    int n = va_arg(argptr, int);
                    printf("%d", n);    // a sustituir por funcion mi mi_printf_d

                    break;
                case 'f':
                    double f = va_arg(argptr, double);
                    printf("%s", mi_dtoa(f, NumStr));   // a sustituir por funcion mi mi_printf_f

                    break;
                case 's':
                    char *str = va_arg(argptr, char *);
                    printf("%s", str);  // a sustituir por funcion mi mi_printf_s

                    break;
                case 'c':
                    n = va_arg(argptr, int);
                    printf("%c", n);    // a sustituir por funcion mi mi_printf_c

                    break;
            }
        }

        ptrForm++;
    }

    va_end(argptr);
    
   
}

int main(void) {
    // ********************************************************************
    // Código para probar la función: mi_sprintf
    // ********************************************************************

    int edad = 45,   categoria = 347;
    char nombre[100]="Juan Lopez";
    float sueldo = 7643.25;
    char clave = 'L';
    //char cadena[1000]="";

    mi_printf("Codigo: %c%d Nombre: %s Sueldo: %f€ Edad: %d\n",
                     clave, categoria, nombre, sueldo, edad);

    return (0);
}
