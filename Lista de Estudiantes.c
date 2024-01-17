#include <stdio.h>
#include <string.h>
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
    //Mediante una estructura designo los valores para cada uno de las variables
};
int main()
{
    int menu;
    struct alumno estudiante[50];
    int num_estudiantes = 0;
    while (menu != 3)
    //Mediante un bucle while, hago que mi menu se repita infinitamente hasta que el usuario quiera salir
    {
        printf("Bienvenido al menú\n");
        printf("(1) Agregar estudiantes\n");
        printf("(2) Ver lista de estudiantes\n");
        printf("(3) Salir\n");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
            printf("Ingrese la matrícula: ");
            scanf("%d", &estudiante[num_estudiantes].matricula);
            fflush(stdin);
            // Pido al usuario que añada los datos del estudiante

            printf("Ingrese el nombre: ");
            fgets(estudiante[num_estudiantes].nombre, 50, stdin);
            //utilizo la funcion fgets, para pedir que se añada caracteres, funcionan como un scanf
            fflush(stdin);
            // con la funcion fflush limpio la memoria, evitando errores 

            printf("Ingrese la dirección: ");
            fgets(estudiante[num_estudiantes].direccion, 50, stdin);
            fflush(stdin);
            // utilizo la funcion fgets, ya que el código no compila función gets() porque  está obsoleta en C99 y C11

            printf("Ingrese la materia: ");
            fgets(estudiante[num_estudiantes].materia, 50, stdin);
            fflush(stdin);

            printf("Ingrese la nota: ");
            scanf("%f", &estudiante[num_estudiantes].nota);
            fflush(stdin);

            num_estudiantes++;
            fflush(stdin);
            break;

        case 2:
            for (int i = 0; i < num_estudiantes; i++)
            {
                //Mediante un for imprimo los datos del estudiante 
                if (i < num_estudiantes)
                {
                    printf("\nEstudiante %d:\n", i + 1);
                    printf("Nombre: ");
                    puts(estudiante[i].nombre);
                    //utilizo la funcion puts, para imprimir caracteres
                    printf("Direccion: ");
                    puts(estudiante[i].direccion);

                    printf("Materia: ");
                    puts(estudiante[i].materia);

                    printf("Matrícula: %d\n", estudiante[i].matricula);
                    printf("Nota: %.3f\n", estudiante[i].nota);
                }
            }
            fflush(stdin);
            break;
        default:
            break;
        }
    }
    return 0;
}
