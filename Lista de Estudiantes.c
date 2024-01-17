#include <stdio.h>
#include <string.h>
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char materia[50];
    float nota;
};
int main()
{
    int menu;
    struct alumno estudiante[50];
    int num_estudiantes = 0;
    while (menu != 3)
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

            printf("Ingrese el nombre: ");
            fgets(estudiante[num_estudiantes].nombre, 50, stdin);
            fflush(stdin);

            printf("Ingrese la dirección: ");
            fgets(estudiante[num_estudiantes].direccion, 50, stdin);
            fflush(stdin);

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
                if (i < num_estudiantes)
                {
                    printf("\nEstudiante %d:\n", i + 1);
                    printf("Nombre: ");
                    puts(estudiante[i].nombre);

                    printf("Direccion: ");
                    puts(estudiante[i].direccion);

                    printf("Materia: ");
                    puts(estudiante
                    [i].materia);

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
