#include <stdio.h>

int optprincipal = 0;
int optalmuerzo;
int optcantida;
int optalitas;
int optcantidaalitas;
int optpizza;
int optcantidapizza;
int optpollo;
int optcantidapollo;
int hambuguesa;
int optcantidah, opthelado, optcantidahe;
int main()
{

    while (optprincipal != 7)
    {
        printf("BENVENID@ DELICIAS BAD BAM\n:");
        printf("La opcion 1 para Almuerzos\n:");
        printf("La opcion 2 para Alitas\n:");
        printf("La opcion 3 para Pizza\n:");
        printf("La opcion 4 para pollo y carne\n:");
        printf("La opcion 5 para Haburguesa\n:");
        printf("La opcion 6 para Helado y postres\n:");
        printf("La opcion 7 para Salir \n:");
        scanf("%d", &optprincipal);

        switch (optprincipal)
        {
        case 1:
            do
            {
                printf("uste elijio la opcion 1 que quieres Almorzar hoy\n");
                printf("hoy quiero almorzar la opcion 1 Arroz con camarones\n");
                printf("hoy quiero almorzar la opcion 2 Arroz con pescados y frijoles \n");
                printf("hoy quiero almorzar la opcion 3 Arroz marinero\n");
                printf("hoy quiero almorzar la opcion 4 Arroz con pollo en salsa\n");
                printf("hoy quiero almorzar la opcion 5 Arroz con verduras + sopa con verdura \n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &optalmuerzo);
                switch (optalmuerzo)
                {

                case 1:
                    printf("Elejistes Arros con camarones que rico\n");
                    printf("cuantos platos de arros con camrones deseas\n");
                    scanf("%d", &optcantida);
                    break;
                case 2:
                    printf("Elejistes Arros con pescado y frijoles que rico\n");
                    printf("cuantos platos de arros con pescado y frijoles deseas\n");
                    scanf("%d", &optcantida);
                    break;
                case 3:
                    printf("Elejistes Arros marinero que rico\n");
                    printf("cuantos platos de arros marineros deseas\n");
                    scanf("%d", &optcantida);
                    break;
                case 4:
                    printf("Elejistes Arros con pollo en salsa que rico\n");
                    printf("cuantos platos de arros con pollo en salsa deseas\n");
                    scanf("%d", &optcantida);
                    break;
                case 5:
                    printf("Elejistes Arros con verduras + sopa con verduras que rico\n");
                    printf("cuantos platos de arros con camrones deseas\n");
                    scanf("%d", &optcantida);
                    break;
                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR A  IGUAL A 5\n");
                    break;
                }
            } while (optalmuerzo > 7);

            break;

        case 2:
            do
            {
                printf("uste elijo la opcion 2 veras nuestro menu de alitas y constilla\n");
                printf("opcion 1 para Alitas picantes\n");
                printf("opcion 2 para Alitas de limon\n");
                printf("opcion 3 para Costillas de cerdo\n");
                printf("opcion 4 para Costillas de Buffalo \n");
                printf("opcion 5 para Alitas BAD BAM \n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &optalitas);

                switch (optalitas)
                {
                case 1:
                    printf("elijistes Alitas picantes\n");
                    printf("cuantas Alitas picantes desesas\n");
                    scanf("%d", &optcantidaalitas);
                    break;

                case 2:
                    printf("elijistes Alitas de limon\n");
                    printf("cuantas Alitas de limon desesas\n");
                    scanf("%d", &optcantidaalitas);
                    break;

                case 3:
                    printf("elijistes Costillas de cerdo\n");
                    printf("cuantas Costillas de cerdo desesas\n");
                    scanf("%d", &optcantidaalitas);
                    break;

                case 4:
                    printf("elijistes Costillas de Bufalo\n");
                    printf("cuantas Costillas de Buffalo desesas\n");
                    scanf("%d", &optcantidaalitas);
                    break;

                case 5:
                    printf("elijistes Alitas BAD BAM\n");
                    printf("cuantas Costillas de Buffalo desesas\n");
                    scanf("%d", &optcantidaalitas);
                    break;
                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR A  IGUAL A 5\n");
                    break;
                }
            } while (optalitas > 7);
            break;

        case 3:
            do
            {
                printf("uste Elijio la opcion 1 veras nuestro menu de pizza\n");
                printf("opcion 1 para Pizza extrema\n");
                printf("opcion 2 para Pizza explociva\n");
                printf("opcion 3 para Pizza gratinada\n");
                printf("opcion 4 para Pizza sencilla\n");
                printf("opcion 5 para piza bad bam\n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &optpizza);

                switch (optpizza)
                {
                case 1:
                    printf("Elejistes la Pizza extrema\n");
                    printf("cuantas pizzas extremas deseas\n");
                    scanf("%d", &optcantidapizza);
                    break;
                case 2:
                    printf("Elejistes la Pizza explociva\n");
                    printf("cuantas pizzas explociva deseas\n");
                    scanf("%d", &optcantidapizza);
                    break;
                case 3:
                    printf("Elejistes la Pizza extrema\n");
                    printf("cuantas pizzas extremas deseas\n");
                    scanf("%d", &optcantidapizza);
                    break;
                case 4:
                    printf("Elejistes la Pizza sencilla\n");
                    printf("cuantas pizzas sencillas deseas\n");
                    scanf("%d", &optcantidapizza);
                    break;
                case 5:
                    printf("Elejistes la Pizza BAD BAM\n");
                    printf("cuantas pizzas BAD BAMS deseas\n");
                    scanf("%d", &optcantidapizza);
                    break;

                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR A  IGUAL A 5\n");
                    break;
                }
            } while (optpizza > 7);
            break;
        case 4:
            do
            {
                printf("Elejistes la opcion 4 veras nuestro menu de pollo y carne");
                printf("opcion 1 pollo apanado\n");
                printf("opcion 2 pollo asado\n");
                printf("opcion 3 carne de Buffalo \n");
                printf("opcion 4 carne de cerdo\n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &optpollo);

                switch (optpollo)
                {
                case 1:
                    printf("Elegistes pollo apanado\n");
                    printf("cuantas presas de pollos apanado deseas\n");
                    scanf("%d", &optcantidapollo);
                    break;
                case 2:
                    printf("Elegistes pollo asado\n");
                    printf("cuantas presas de pollos asadas deseas\n");
                    scanf("%d", &optcantidapollo);
                    break;
                case 3:
                    printf("Elegistes carne de Buffalo\n");
                    printf("cuantas cantida de  canes de bufalos  deseas\n");
                    scanf("%d", &optcantidapollo);
                    break;
                case 4:
                    printf("Elegistes carne de cerdo\n");
                    printf("cuantas cantida de carnes de cerdo deseas\n");
                    scanf("%d", &optcantidapollo);
                    break;
                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR A IGUAL A 4\n");
                    break;
                }
            } while (optpollo > 7);
            break;
        case 5:
            do
            {
                printf("elistes nuestro menu de HAMBUGUEAS\n");
                printf("opcion 1 para hamburgesa normal\n");
                printf("opcion 2 para hamburgesa gratinada\n");
                printf("opcion 3 para hamburgesa ranchera\n");
                printf("opcion 4 para hamburgesa buffalo\n");
                printf("opcion 5 para hamburgesa costilla\n");
                printf("opcion 6 para hamburgesa MX\n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &hambuguesa);
                switch (hambuguesa)
                {
                case 1:
                    printf("Elejiste hamburguesa normal \n");
                    printf("cuantas cantida de hamburguesa normal deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                case 2:
                    printf("Elejiste hamburguesa gratinada \n");
                    printf("cuantas cantida de hamburgues gratindas deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                case 3:
                    printf("Elejiste hamburguesa ranchera\n");
                    printf("cuantas cantida de hamburguesa ranchera deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                case 4:
                    printf("Elejiste hamburguesa  buffalo\n");
                    printf("cuantas cantida de hamburguesa buffalo deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                case 5:
                    printf("Elejiste hamburguesa costilla \n");
                    printf("cuantas cantida de hamburguesa costilla deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                case 6:
                    printf("Elejiste hamburguesa MX \n");
                    printf("cuantas cantida de hamburguesa MX deseas\n");
                    scanf("%d", &optcantidah);
                    break;
                    break;
                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR A  IGUAL A 6\n");
                    break;
                }
            } while (hambuguesa > 7);
            break;

        case 6:
            do
            {
                printf("Elejistes nuestro menu de helados y postres \n");
                printf("opcion 1 para helado de chocolate\n");
                printf("opcion 2 para helado de vainilla\n");
                printf("opcion 3 para helado de oreo\n");
                printf("opcion 4 para postre de oreo\n");
                printf("opcion 5 para postre de vainilla\n");
                printf("opcion 5 para postre de tresleches\n");
                printf("opcion 7 para salir de este menu:\n");
                scanf("%d", &opthelado);
                switch (opthelado)
                {
                case 1:
                    printf("Elijio helado de chocolate\n");
                    printf("cuantos helados de chocolates deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                case 2:
                    printf("Elijio helado de vainilla\n");
                    printf("cuantos helados de vainilla deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                case 3:
                    printf("Elijio helado de oreo\n");
                    printf("cuantos helados de oreo deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                case 4:
                    printf("Elijio postre de chocolate\n");
                    printf("cuantos helados de chocolates deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                case 5:
                    printf("Elijio postre de oreo\n");
                    printf("cuantos postres de oreo deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                case 6:
                    printf("Elijio postre de tresleches\n");
                    printf("cuantos postres de tresleches deseas\n");
                    scanf("%d", &optcantidahe);
                    break;
                default:
                    printf("NO TENEMOS TU PEDIDO TIENE QUE SER MENOR  O IGUAL A 6\n");
                    break;
                }
                break;
            } while (opthelado > 7);
            break;

        case 7:

            printf("uste a salido de la app del restaurante\n");
            break;
        default:
            printf("uste no Elijio una opcion invalida \n");
            break;
        }

        printf("\n-----------------------------------------------------------------------------\n");

        printf("tu orde fue de: \n");

        switch (optalmuerzo)
        {
        case 1:
            printf("Almuerzo: Arros con camarones - cantidad %d\n", optcantida);
            break;
        case 2:
            printf("Almuerzo: Arros con pescado y frijoles - cantidad %d\n", optcantida);
            break;
        case 3:
            printf("Almuerzo: Arros marinero - cantida %d\n", optcantida);
            break;
        case 4:
            printf("Almuerzo: Arros con pollo en salsa - cantidad %d\n", optcantida);
            break;
        case 5:
            printf("Almuerzo: Arros con verdura + sopa con verdura - cantidad %d\n", optcantida);
            break;
        default:
            printf("NO PEDISTES ALMUERZO\n");
            break;
        }

      

        switch (optalitas)
        {
        case 1:
            printf("Alitas: Alitas picantes - cantidad %d\n", optcantidaalitas);
            break;
        case 2:
            printf("Alitas: Alitas  de limon - cantidad %d\n", optcantidaalitas);
            break;
        case 3:
            printf("Alitas: Costillas de cerdo - cantida %d\n", optcantidaalitas);
            break;
        case 4:
            printf("Alitas: Costillas de Buffalo - cantidad %d\n", optcantidaalitas);
            break;
        case 5:
            printf("Alitas: Alitas BAD BAMS - cantidad %d\n", optcantidaalitas);
            break;
        default:
            //printf("NO PEDISTES ALITAS: \n");
            break;
        }
       

        switch (optpizza)
        {
        case 1:
            printf("pizza extrea - cantidad %d\n", optcantidapizza);
            break;
        case 2:
            printf("Pizza explociva- cantidad %d\n", optcantidapizza);
            break;
        case 3:
            printf("Alitas: Costillas de cerdo - cantida %d\n", optcantidapizza);
            break;
        case 4:
            printf("Pizza gratinada   - cantidad %d\n", optcantidapizza);
            break;
        case 5:
            printf("Pizza sencilla - cantidad %d\n", optcantidapizza);
            break;
        default:
          //  printf("NO PEDISTES PIZZA: \n");
            break;
        }
       

        switch (optpollo)
        {
        case 1:
            printf("pollo apanado- cantidad %d\n", optcantidapollo);
            break;
        case 2:
            printf("pollo asado- cantidad %d\n", optcantidapollo);
            break;
        case 3:
            printf("Carne de Buffalo- cantida %d\n", optcantidapollo);
            break;
        case 4:
            printf("carne de cerdo- cantidad %d\n", optcantidapollo);
            break;
        default:
            //printf("NO PEDISTES pollo y carne: \n");
            break;
        }
       

        switch (hambuguesa)
        {
        case 1:
            printf("hamburgesa normal- cantidad %d\n", optcantidah);
            break;
        case 2:
            printf("hamburgesa gratinada - cantidad %d\n", optcantidah);
            break;
        case 3:
            printf("hamburgesa ranchera- cantida %d\n", optcantidah);
            break;
        case 4:
            printf("hamburgesa buffalo- cantidad %d\n", optcantidah);
            break;
        case 5:
            printf("hamburgesa costilla- cantidad %d\n", optcantidah);
            break;
        case 6:
            printf("hamburgesa MX- cantidad %d\n", optcantidah);
            break;
        default:
            //printf("NO PEDISTES haburguesa: \n");
            break;
        }
     

        switch (opthelado)
        {
        case 1:
            printf("helado de chocolate- cantidad %d\n", optcantidahe);
            break;
        case 2:
            printf("helado de vainilla - cantidad %d\n", optcantidahe);
            break;
        case 3:
            printf("para helado de oreo- cantida %d\n", optcantidahe);
            break;
        case 4:
            printf("postre de oreo- cantidad %d\n", optcantidahe);
            break;
        case 5:
            printf("postre de vainilla- cantidad %d\n", optcantidahe);
            break;
        case 6:
            printf("postre de tresleches- cantidad %d\n", optcantidahe);
            break;
        default:
           // printf("NO PEDISTES ni helados ni postres: \n");
            break;
        }
    }
    return 0;
}