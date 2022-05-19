#include <stdio.h>

int main()

{
    float fh,cl;
    char ch;

     printf("\n\n[1] Converter graus Celsius em graus Fahrenheit ");
     printf("\n\n[2] Calcular o volume de uma caixa trapezoidal ");
     printf("\n\n[3] Imprimir na tela a sequência de Fibonacci ");
     printf("\n\n[4] Contar o numero de caracteres digitados ");
     printf("\n\n[5] Calculadora de 4 operações ");
     printf("\n\n Informe o valor escolhido: ");
    scanf("%c",&ch);

    if((ch =='1'))
    {
    printf("\n\nInsira a temperatura em Celsius: ");
    scanf("%f",&cl);
    fh= (cl*1.8)+32;
    printf("\n\nTemperatura em Fahrenheit: %.2f\n\n",fh);
    }
    else if((ch =='2'))
    {
    printf("Informe a base inferior, base superior, altura e largura\n");
    float baseb, basea, altura, largura;
    scanf ("%f %f %f %f" , &baseb, &basea, &altura, &largura);
    float AT;
    AT = ((0.5 *(baseb + basea)*altura)*largura);
    printf ("O volume total do trapezio = %f\n", AT);
    }
    else if((ch =='3'))
    {
    int n1=0,n2=1,n3,i,number;
    printf("Informe um valor para seq. fibonacci:");
    scanf("%d",&number);
    printf("\n%d %d",n1,n2);
    for(i=2;i<number;++i)
    {
    n3=n1+n2;
    printf(" %d",n3);
    n1=n2;
    n2=n3;
    }
    }
    else if((ch =='4'))
    {
    int n;
    int count=0;
    printf("Digite uma sequencia de numeros\n");
    scanf("%d",&n);
    while(n!=0)
   {
       n=n/10;
       count++;
   }
   printf("\nNumero de digitos encontrados = %d",count);
    }
    else if((ch =='5'))
    {
    int first, second, add, subtract, multiply;
    float divide;

   printf("Informe dois numeros\n");
   scanf("%d%d", &first, &second);

   add      = first + second;
   subtract = first - second;
   multiply = first * second;
   divide   = first / (float)second;   //typecasting

   printf("Soma = %d\n",add);
   printf("Subtracao = %d\n",subtract);
   printf("Multiplicacao = %d\n",multiply);
   printf("Divisão = %.2f\n",divide);
    }
    else
    {
        printf("\n\nEscolha invalida!!!\n\n");
    }

    return 0;
}
