#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)

{
    printf("-----------------------------\n");

    printf("Solucionador de funções quadráticas: ax^2 + bx + c\n");

    printf("-----------------------------\n");

    double a = 0;

    do
    {
        a = get_double("Informe o coeficiente \"a\": ");

    } while (a == 0);

    double b = get_double("Informe o coeficiente \"b\": ");

    double c = get_double("Informe o coeficiente \"c\": ");

    printf("\n");

    printf("--------------------------------------------------\n");

    printf("Solução da função: (%.2f)x^2 + (%.2f)x + (%.2f)\n", a, b, c);

    printf("--------------------------------------------------\n");


    // Concavidade Quando o coeficiente “a” de uma função do segundo grau, na forma f(x) = ax2 + bx + c, é maior que zero, a concavidade da parábola é voltada para cima e, quando esse coeficiente é menor que zero, ela é voltada para baixo.

    if (a > 0)
    {
        printf("A parábola tem concavidade para cima.\n");
    }

    else
    {
        printf("A parábola tem concavidade para baixo.\n");
    }

    // eixo y
    printf("A parábola cruza o eixo y no ponto: %.2f.\n", c + 0.0);

    // vertice
    double delta = (b * b) - 4 * a * c + (0.0);

    double vertice_x = (-b) / (2 * a);

    double vertice_y = (-delta) / (4 * a);

    vertice_x += 0.0f;

    vertice_y += 0.0f;

    if (a > 0)
    {
        printf("As coordenadas do vértice (ponto mínimo) são: (%.2f, %.2f).\n", vertice_x, vertice_y);
    }
    else
    {
        printf("As coordenadas do vértice (ponto máximo) são: (%.2f, %.2f).\n", vertice_x, vertice_y);
    }

    // Raíz quadrada raiz quadrada de um número n é descobrir qual número elevado ao quadrado resulta em n.

    if (delta > 0)
    {
        printf("A função tem duas raízes reais:\n");

        printf("    x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a) + 0.0);
        printf("    x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a) + 0.0);
    }

    else if (delta == 0)
    {
        printf("A função tem uma raiz real: %.2f.\n", (-b / (2 * a)) + 0.0);
    }
    
    else
    {
        printf("A função não tem raízes reais:\n");
    }
}



