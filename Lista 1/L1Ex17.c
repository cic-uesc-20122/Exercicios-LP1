int main(){
    int qt_c, qt_p, coelhos, patos; //Declara��o de variaveis!

    printf("Em um cercado h� v�rios patos e coelhos. Escreva um programa que solicite ao usu�rio o total de cabe�as e o total de p�s, e determine quantos patos e quantos coelhos se encontram no cercado.");
    printf("\n--------------------------------------------------------------------------------\n");
    printf ("Entre com a quantidade de Cabe�as:");

    scanf ("%d", &qt_c);    //Entrada de valores!

    printf ("Entre com a quantidade par de patas:");

    scanf ("%d", &qt_p);    //Entrada de valores!

    if(qt_p % 2 == 0){  //Compara��o entre variaveis!

    coelhos = (qt_p - 2 * qt_c)/2;  //Opera��o com as variaveis!
    patos = (qt_c - coelhos);
    }

    printf ("A quantidade de coelhos �:%d", coelhos);   //Impress�o de Resultado!
    printf ("\nA quantidade se patos �:%d", patos);

    return 0;
}
