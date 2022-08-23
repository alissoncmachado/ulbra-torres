#include <stdio.h>
#include <time.h>

int main()
{
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

    int dia, mes, ano, hora, minutos;
    dia = data_hora_atual->tm_mday;
    mes = data_hora_atual->tm_mon+1;
    ano = data_hora_atual->tm_year+1900;
    hora = data_hora_atual->tm_hour;
    minutos = data_hora_atual->tm_min;
    
    printf("Data atual %d/",dia);
    if (mes == 1) {
        printf("janeiro");
    } else if (mes == 2) {
        printf("fevereiro");
    } else if (mes == 3) {
        printf("março");
    } else if (mes == 4) {
        printf("abril");
    } else if (mes == 5) {
        printf("maio");
    } else if (mes == 6) {
        printf("junho");
    } else if (mes == 7) {
        printf("julho");
    } else if (mes == 8) {
        printf("agosto");
    } else if (mes == 9) {
        printf("setembro");
    } else if (mes == 10) {
        printf("outubro");
    }  else if (mes == 11) {
        printf("novembro");
    }  else if (mes == 12) {
        printf("dezembro");
    }        
    printf("/%d\nHora Atual %d:%d\n", ano, hora, minutos);



    system("pause");
    return 0;
}