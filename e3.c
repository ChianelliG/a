#include<stdio.h>
void imprimir(int matriz[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
void trocarLinha2Linha8(int matriz[10][10]){
    int temp; 
    for(int j = 0; j < 10; j++){
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }
}
void trocarLinha4Linha10(int matriz[10][10]){
    int temp; 
    for(int i = 0; i < 10; i++){
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }
}
void trocarDiagonais(int matriz[10][10]){
    int temp; 
    for(int i = 0; i < 10; i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[i][9-1];
        matriz[i][9-i] = temp;
    }
}
void trocarLinha5Coluna10(int matriz[10][10]){
    int temp; 
    for(int i= 0; i < 10; i++){
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

main(){
    int matriz[10][10];

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }
    imprimir(matriz);
    printf("\n");
    //trocarLinha2Linha8(matriz[10][10]);
    //trocarLinha4Linha10(matriz[10][10]);
    trocarDiagonais(matriz[10][10]);
    imprimir(matriz);
}