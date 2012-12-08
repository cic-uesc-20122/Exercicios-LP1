/* Uma livraria esta fazendo uma promo��o para pagamento � vista em que o comprador pode
escolher entre dois crit�rios de desconto:
1. Crit�rio A: R$ 0,25 por livro + R$ 7,50 fixo
2. Crit�rio B: R$ 0,50 por livro + R$ 2,50 fixo
Implemente uma fun��o que receba a quantidade de livros e retorne o melhor desconto.
Modifique a solu��o do exerc�cio 15 da Lista 2 utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>

int melhor(int quant);

int main()
{

    int quant;
    float a, b;

    /* L� os dados */
    printf("Entre com a quantidade de livros: ");
    scanf("%i", &quant);

    if (melhor(quant))
        printf("Criterio B mais vantajoso\n");
    else
        printf("Criterio A mais vantajoso\n");

    system("PAUSE");
    return 0;

}

/* Retorna o melhor desconto */
int melhor(int quant)
{

    float a, b;
    int cond = 0;

    a=0.25*quant+7.50;
    b=0.50*quant+2.50;
    printf("Criterio A: %.2f\n", a);
    printf("Criterio B: %.2f\n", b);
    if (a>b)
        cond = 1;

    return cond;

}

