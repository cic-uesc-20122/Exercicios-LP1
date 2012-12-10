int main(){
    int qt_c, qt_p, coelhos, patos; //Declaração de variaveis!

    printf("Em um cercado há vários patos e coelhos. Escreva um programa que solicite ao usuário o total de cabeças e o total de pés, e determine quantos patos e quantos coelhos se encontram no cercado.");
    printf("\n--------------------------------------------------------------------------------\n");
    printf ("Entre com a quantidade de Cabeças:");

    scanf ("%d", &qt_c);    //Entrada de valores!

    printf ("Entre com a quantidade par de patas:");

    scanf ("%d", &qt_p);    //Entrada de valores!

    if(qt_p % 2 == 0){  //Comparação entre variaveis!

    coelhos = (qt_p - 2 * qt_c)/2;  //Operação com as variaveis!
    patos = (qt_c - coelhos);
    }

    printf ("A quantidade de coelhos é:%d", coelhos);   //Impressão de Resultado!
    printf ("\nA quantidade se patos é:%d", patos);

    return 0;
}
