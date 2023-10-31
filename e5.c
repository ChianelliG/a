#include<stdio.h>
int diasNoMes(int mes){
    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return diasMes[mes - 1];
}
void calcularIdade(int diaNas, int mesNas, int anoNas, int ano, int mes, int dia){
    int anos, dias, meses;
    if(dia>= diaNas){
        dias = dia - diaNas;
    }else{
        dias = dia + diasNoMes(mesNas) - diaNas;
        mes--;
    }
    if(mes >= mesNas){
        meses = mes - mesNas;
    }else{
        meses = mes + 12 - mesNas;
        ano--;
    }
    anos = ano - anoNas;

    printf("Idade: %d anos, %d meses, %d dias", anos, meses, dias);
}

int main(){
    int dia, ano, mes;
    int diaNas, anoNas, mesNas;

    printf("Digite a data de nascimento: dd mm aa");
    scanf("%d %d %d", &diaNas, &mesNas, &anoNas);

    printf("Digite a data atual: dd mm aa");
    scanf("%d %d %d", &dia, &mes, &ano);

    calcularIdade(diaNas, mesNas, anoNas, ano, mes, dia);
}
