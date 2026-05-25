#include <stdio.h>
#include <string.h>

/*
    Função: get_int

    Objetivo:
    Ler uma string digitada pelo usuário e converter
    manualmente para um número inteiro.

    Exemplo:
        Entrada: "2024"

    Processo interno:
        resultado = 0

        '2':
        resultado = 0 * 10 + 2
        resultado = 2

        '0':
        resultado = 2 * 10 + 0
        resultado = 20

        '2':
        resultado = 20 * 10 + 2
        resultado = 202

        '4':
        resultado = 202 * 10 + 4
        resultado = 2024

    Ideia matemática:
        Cada novo dígito desloca o número atual
        uma casa decimal para a esquerda.

        Multiplicar por 10:
            202 -> 2020

        Somar novo díito:
            2020 + 4 = 2024

    Conversão ASCII:
        Caracteres numéricos possuem códigos ASCII:

            '0' = 48
            '1' = 49
            '2' = 50
            ...

        Então:
            '4' - '0'
            52  - 48
            = 4

        Isso converte caractere -> inteiro.
*/

int get_int(char *prompt){

    // Buffer para armazenar a entrada do usuário
    char buffer[100];

    /*
        resultado:
        Armazena o valor final convertido.

        IMPORTANTE:
        Variáveis locais em C NÃO começam zeradas.
        Precisamos inicializar manualmente.
    */
    int resultado = 0;

    /*
        numero_convertido:
        Guarda temporariamente o valor inteiro
        de cada caractere numérico.
    */
    int numero_convertido;

    // Exibe mensagem ao usuário
    printf("%s ", prompt);

    /*
        fgets():
        Lê uma linha inteira da entrada padrão.

        sizeof(buffer):
        Impede overflow do array.

        stdin:
        Entrada padrão do teclado.
    */
    fgets(buffer, sizeof(buffer), stdin);

    /*
        strcspn():
        Procura a posição do caractere '\n'.

        Quando o usuário aperta ENTER,
        fgets normalmente armazena:

            "2024\n"

        Precisamos remover o '\n'
        para trabalhar corretamente com a string.
    */
    size_t posicao_enter = strcspn(buffer, "\n");

    /*
        Se encontrou '\n',
        substituímos por '\0'.

        '\0' representa o final da string em C.
    */
    if (buffer[posicao_enter] == '\n'){
        buffer[posicao_enter] = '\0';
    }

    /*
        strlen():
        Retorna quantos caracteres existem
        antes do '\0'.

        Exemplo:
            "2024"

        comprimento = 4
    */
    int comprimento = strlen(buffer);

    /*
        Percorre cada caractere da string.

        IMPORTANTE:
        usamos i < comprimento

        Porque os índices válidos são:

            0 até comprimento - 1

        Exemplo:
            "2024"

            índices:
            [0][1][2][3]

        buffer[4] seria o '\0'.
    */
    for (int i = 0; i < comprimento; i++){

        /*
            Verifica se o caractere atual
            está entre '0' e '9'.

            Isso garante que existe apenas
            números na entrada.
        */
        if (buffer[i] >= '0' && buffer[i] <= '9'){

            /*
                Converte caractere ASCII
                para inteiro real.

                Exemplo:
                    '7' - '0'
                    55  - 48
                    = 7
            */
            numero_convertido = buffer[i] - '0';

            /*
                Construção matemática do número.

                Fórmula:
                    resultado = resultado * 10 + digito

                Exemplo com "2024":

                    resultado = 0

                    0 * 10 + 2 = 2
                    2 * 10 + 0 = 20
                    20 * 10 + 2 = 202
                    202 * 10 + 4 = 2024

                Esse método é mais eficiente
                do que usar potências com pow().
            */
            resultado = resultado * 10 + numero_convertido;

        } else {

            /*
                Se encontrar qualquer caractere
                que NÃO seja número:

                    letras
                    símbolos
                    espaços

                retorna erro.
            */
            return -1;
        }
    }

    // Retorna o número convertido
    return resultado;
}


/*
    Função: calcular_ano_bissexto

    Regras matemáticas:

    1. Se NÃO for divisível por 4:
       NÃO é bissexto.

    2. Se for divisível por 4
       E NÃO for por 100:
       É bissexto.

    3. Se for divisível por 100:
       precisa também ser divisível por 400.

    Exemplos:

        2024:
            divisível por 4
            não divisível por 100
            -> bissexto

        2100:
            divisível por 4
            divisível por 100
            não divisível por 400
            -> NÃO bissexto

        2000:
            divisível por 400
            -> bissexto
*/

int calcular_ano_bissexto(int ano){

    /*
        Operador % (módulo):
        Retorna o resto da divisão.

        Exemplo:
            2024 % 4 = 0

        Resto zero:
            divisível
    */

    // Se NÃO for divisível por 4
    if (ano % 4 != 0){
        return 0;
    }

    /*
        Se for divisível por 4
        e NÃO por 100:
        já é bissexto.
    */
    if (ano % 100 != 0){
        return 1;
    }

    /*
        Se chegou aqui:
        é divisível por 100.

        Então só será bissexto
        se também for divisível por 400.
    */
    if (ano % 400 == 0){
        return 1;
    }

    // Caso contrário, não é bissexto
    return 0;
}


int main(void){

    /*
        Lê o ano digitado pelo usuário.

        Se houver caractere inválido,
        get_int retorna -1.
    */
    int n = get_int("Digite o ano:");

    // Verifica erro de entrada
    if (n == -1){

        printf("Digite apenas numeros inteiros !!!\n");

        return -1;
    }

    // Verifica se o ano é bissexto
    int bissexto = calcular_ano_bissexto(n);

    /*
        Em C:

            0  -> falso
            !=0 -> verdadeiro

        Então:

            if (bissexto)

        significa:
            "se for verdadeiro"
    */
    if (bissexto){

        printf("O ano %i e bissexto !!!\n", n);

    } else {

        printf("O ano %i nao e bissexto !!!\n", n);
    }

    return 0;
}