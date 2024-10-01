#include <stdio.h>
#include <math.h>

void Rio_Index_praNome (int indexdoRio ){
    if(indexdoRio == 0){
        printf(" Rio Piraquara ");
    }else if(indexdoRio == 1){
        printf(" Rio Pequeno ");
    }else if(indexdoRio == 2){
        printf(" Rio Miringuava ");
    }else if(indexdoRio == 3){
        printf (" Rio Passauna ");
    }else if( indexdoRio == 4 ){
        printf(" Rio da Varzea ");
    }else if(indexdoRio == 5){
        printf(" Rio Banana ");
    }else if(indexdoRio == 6){
        printf(" Rio das Pedras ");
    }else if(indexdoRio == 7){
        printf(" Rio Vitorino ");
    }else if(indexdoRio == 8){
        printf(" Rio Marmeleiro ");
    }else if(indexdoRio == 9){
        printf(" Rio Carchorreira ");
    }
}

void Mes_index_praData(int indexdomes){
    if(indexdomes==0){
        printf(" Jan 2020 ");
    }else if(indexdomes==1){
        printf(" Fev 2020 ");
    }else if(indexdomes==2){
        printf(" Mar 2020 ");
    }else if(indexdomes==3){
        printf(" Abr 2020 ");
    }else if(indexdomes==4){
        printf(" Mai 2020 ");
    }else if(indexdomes==5){
        printf(" Jun 2020 ");
    }else if(indexdomes==6){
        printf(" Jul 2020 ");
    }else if(indexdomes==7){
        printf(" Ago 2020 ");
    }else if(indexdomes==8){
        printf(" Set 2020 ");
    }else if(indexdomes==9){
        printf(" Out 2020 ");
    }else if(indexdomes==10){
        printf(" Nov 2020 ");
    }else if(indexdomes==11){
        printf(" Dez 2020 ");
    }else if(indexdomes==12){
        printf(" Jan 2021 ");
    }else if(indexdomes==13){
        printf(" Fev 2021 ");
    }else if(indexdomes==14){
        printf(" Mar 2021 ");
    }else if(indexdomes==15){
        printf(" Abr 2021 ");
    }else if(indexdomes==16){
        printf(" Mai 2021 ");
    }else if(indexdomes==17){
        printf(" Jun 2021 ");
    }else if(indexdomes==18){
        printf(" Jul 2021 ");
    }else if(indexdomes==19){
        printf(" Ago 2021 ");
    }else if(indexdomes==20){
        printf(" Set 2021 ");
    }else if(indexdomes==21){
        printf(" Out 2021 ");
    }else if(indexdomes==22){
        printf(" Nov 2021 ");
    }else if(indexdomes==23){
        printf(" Dez 2021 ");
    }
}

void menu(){
    printf("<<< MENU DE OPÇÕES >>>\n");
    printf("Digite 0 => Para fechar o programa\n");
    printf("Digite 1 => Para Selecionar uma vazão para determinado mês e Rio\n");
    printf("Digite 2 => Alterar a Vazão de um Rio para um mes indicado\n");
    printf("Digite 3 => Informar a Vazão média de um rio\n");
    printf("Digite 4 => Indicar os meses de maior e menor vazão de um Rio\n");
    printf("Digite 5 => Indicar o Rio de maior Vazão \n");
    printf("Digite 6 => Indicar quais meses de quais Rios tiveram maiores vazões em relação ao um valor indicado \n");
    printf("Digite 7 => Tirar a diferença entre as vazôes médias de Dois Rios indicados\n");
    printf("<<<<<<<<<<<<>>>>>>>>>>\n>>> ");
}

void Menu_Index_Rios(){

    printf(" 0 => Rio Piraquara\n 1 => Rio Pequeno\n 2 => Rio Miringuava\n 3 => Rio Passauna\n 4 => Rio da Varzea\n 5 => Rio Banana\n 6 => Rio das Pedras\n 7 => Rio Vitorino\n 8 => Rio Marmeleiro\n 9 => Rio Cachorreira\n=>>> ");
}

void Menu_Index_Mes(){
    printf("Jan 2020 => 0  | Jan 2021 => 12\n");
    printf("Fev 2020 => 1  | Fev 2021 => 13\n");
    printf("Mar 2020 => 2  | Mar 2021 => 14\n");
    printf("Abr 2020 => 3  | Abr 2021 => 15\n");
    printf("Mai 2020 => 4  | Mai 2021 => 16\n");
    printf("Jun 2020 => 5  | Jun 2021 => 17\n");
    printf("Jul 2020 => 6  | Jul 2021 => 18\n");
    printf("Ago 2020 => 7  | Ago 2021 => 19\n");
    printf("Set 2020 => 8  | Set 2021 => 20\n");
    printf("Out 2020 => 9  | Out 2021 => 21\n");
    printf("Nov 2020 => 10 | Nov 2021 => 22\n");
    printf("Dez 2020 => 11 | Dez 2021 => 23\n>>> ");

}

float MostreVazao( float M[10][24], int Rio, int Mes){// opcao 1 
    float vazao = M[Rio][Mes];
    return vazao;
}

void alterarVazao(float M[10][24], int rio, int mes, float novaVazao){// funcao 2
    M[rio][mes] = novaVazao;
    printf("A vazão foi alterada.\n");
}


//função 3
float mediaVazao(float M[10][24],int rio, int index_domes_inicial, int index_domes_final) {
    float soma=0;
    int  QuantidadeDeMeses = 1.0 + sqrt(pow(index_domes_final - index_domes_inicial, 2.0));

    if(index_domes_final > index_domes_inicial){
        for (int x = index_domes_inicial; x <= index_domes_final; x++){
            soma += M[rio][x];
        }
    }else{
        for (int x = index_domes_final; x <= index_domes_inicial; x++){
            soma += M[rio][x];
        }
    }
        
    return soma/QuantidadeDeMeses;
}


//função 4
void menorMaiorVazao(float M[10][24], int rio) {
    float menor = M[rio][0], maior = M[rio][0];
    int mesMenor = 0, mesMaior = 0;
    for (int x = 0; x < 24; x++){
        if (M[rio][x] < menor){
            menor = M[rio][x];
            mesMenor = x;
        }
        else if (M[rio][x] > maior) {
            maior = M[rio][x];
            mesMaior = x;
        }
    }

    printf("O periodo de menor vazão foi"); Mes_index_praData(mesMenor);
    printf("com uma vazão %.2f m³/s\n",menor);
    printf("e o periodo de maior vazão foi"); Mes_index_praData(mesMaior);
    printf("com uma vazão %.2f m³/s\n", maior);
}

//função 5 
void rioMaiorVazao(float M[10][24]) {
    float maiorVazao = 0;
    int rioMaior = 0;
    for(int x = 0; x < 10; x++) {
        float vazaoTotal = 0;
        for (int y = 0; y<24;y++){
            vazaoTotal += M[x][y];
        }
        if (vazaoTotal > maiorVazao) {
            maiorVazao = vazaoTotal;
            rioMaior = x;
        }
    }
    printf("O"); Rio_Index_praNome(rioMaior);
    printf("tem a maior vazão total com %.2f m³/s\n", maiorVazao);;
}

//função 6
void mesesComVazaoMaiorQueValorIndicado(float M[10][24], float valor) {
    for (int x=0; x<10; x++) {
        for (int y=0; y<24; y++){
            if (M[x][y] > valor) {
                printf("O"); Rio_Index_praNome(x);
                printf("no periodo de"); Mes_index_praData(y);
                printf("teve vazão de %.2f m³/s\n",M[x][y]);
            }
        }
    }
}

float Difdevazoes (float M[10][24], int Rio1, int Rio2){ // funcao 7 da defesa de autoria
    float diferenca, mediaRio1, mediaRio2;
    
    mediaRio1 = mediaVazao(M, Rio1, 0, 23);
    mediaRio2 = mediaVazao(M, Rio2, 0, 23);

    diferenca = sqrt(pow(mediaRio1 - mediaRio2, 2.0));

    return diferenca;
}

int main(){ // 10 Linhas que são os Rios || 24 colunas que são os meses de 2 anos 2020 e 2021
    int Continua, OpcaoEscolhida, RioIndicado, MesIndicado, RioIndicado2;
    int mesInicialPramedia, mesFinalPramedia;
    float NovaVazao, VazaoDeReferencia;
    float Dados[10][24] =  {{1.8, 2.29, 2.4, 2.55, 2.56, 2.51, 2.38, 2.17, 2.01, 2.12, 1.69, 1.5, 1.4, 1.52, 2.44, 2.0, 2.36, 1.9, 2.15, 2.13, 1.73, 1.72, 2.07, 2.12}, 
                            {1.84, 2.89, 1.8, 0.92, 0.61, 1.55, 1.13, 2.45, 1.25, 1.69, 2.91, 4.48, 4.12, 3.07, 5.46, 1.88, 1.9, 2.14, 1.46, 2.08, 1.84, 5.22, 5.42, 2.7}, 
                            {1.0, 2.99, 0.84, 0.51, 0.48, 1.43, 1.0, 5.21, 0.8, 0.9, 2.36, 3.73, 6.92, 4.94, 10.01, 1.05, 1.74, 2.62, 0.77, 2.84, 1.11, 7.12, 5.09, 1.29}, 
                            {1.59, 1.43, 2.03, 0.91, 1.09, 1.26, 0.9, 1.48, 1.03, 1.7, 1.06, 0.78, 1.59, 0.9, 0.74, 1.02, 1.35, 2.37, 1.09, 1.64, 2.04, 2.26, 2.43, 2.4}, 
                            {3.09, 4.21, 1.94, 0.83, 1.17, 5.22, 3.64, 9.35, 3.54, 4.48, 5.73, 13.09, 10.98, 7.59, 19.38, 6.13, 5.7, 6.76, 4.6, 4.24, 3.83, 9.59, 11.02, 6.47}, 
                            {4.67, 3.22, 1.06, 0.8, 1.71, 8.36, 3.97, 18.02, 3.14, 2.61, 2.08, 15.76, 23.8, 8.81, 7.19, 1.98, 1.16, 3.16, 2.41, 4.6, 2.58, 18.04, 3.89, 1.14}, 
                            {2.97, 2.4, 1.0, 0.93, 1.58, 5.15, 3.01, 11.66, 2.2, 2.7, 1.02, 7.18, 17.79, 6.03, 3.4, 1.4, 1.08, 2.93, 1.79, 5.58, 2.43, 16.6, 5.87, 1.06}, 
                            {3.1, 6.08, 3.84, 1.83, 5.11, 17.84, 13.31, 10.99, 5.09, 2.55, 1.42, 2.75, 15.83, 18.17, 4.98, 2.23, 1.53, 2.26, 2.3, 1.89, 6.02, 19.75, 11.45, 3.71}, 
                            {1.99, 4.52, 1.15, 1.46, 5.14, 9.77, 7.55, 6.73, 1.06, 0.81, 0.64, 3.1, 10.22, 5.69, 2.7, 0.74, 0.74, 2.58, 1.49, 0.97, 4.01, 11.59, 2.56, 0.74}, 
                            {0.33, 0.33, 0.27, 0.25, 0.21, 0.24, 0.23, 0.36, 0.25, 0.27, 0.34, 0.48, 0.47, 0.45, 0.52, 0.32, 0.35, 0.37, 0.32, 0.42, 0.32, 0.44, 0.34, 0.28}, 
    }; // chaves fechando os dados
    
    while(1){
        printf("\nEscolha um opção\n"); menu(); scanf("%i", &OpcaoEscolhida);
        while(1){
            if(OpcaoEscolhida==0){
                printf("Fechando o programa......");
                return 0; // vai fazer o programa fechar
                
            }else if(OpcaoEscolhida==1){ //mostra a vazao de um rio num mes
                printf("Indique o Rio que se quer saber a vazão (Digite apenas o Numero)\n"); Menu_Index_Rios(); scanf("%i", &RioIndicado);
                
                while(1){
                    if(RioIndicado < 0 || RioIndicado > 9){
                        printf("Valor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado);
                    
                    }else{
                        break; // break da validacao do Rio
                    }
                }

                printf("\nIndique o Mês a ser analisado\n");
                Menu_Index_Mes();
                scanf("%i", &MesIndicado);

                while(1){
                    if(MesIndicado < 0 || MesIndicado > 23){
                        printf("Valor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Mes(); scanf("%i", &MesIndicado);

                    }else{
                        break; // break da validação do mes
                    }
                }

                printf("O"); 
                Rio_Index_praNome(RioIndicado);
                printf("no periodo");
                Mes_index_praData(MesIndicado);
                printf("teve uma Vazão de %.2f m³/s", MostreVazao(Dados, RioIndicado, MesIndicado));

                break; // break da opção 1 que eh da vazao la

            }else if(OpcaoEscolhida == 2){
                printf("Indique o Rio que deseja mudar a vazão:\n"); Menu_Index_Rios();
                scanf("%i", &RioIndicado);
                
                while(1){
                    if(RioIndicado < 0 || RioIndicado > 9){
                        printf("\nValor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado);
                    
                    }else{
                        break; // break da validacao do Rio
                    }        
                }

                printf("Indique o mes e que gostaria de efetuar a atualização:\n"); Menu_Index_Mes();
                scanf("%i", &MesIndicado);
                
                while(1){
                    if(MesIndicado < 0 || MesIndicado > 23){
                        printf("Valor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Mes(); scanf("%i", &MesIndicado);

                    }else{
                        break; // break da validação do mes
                    }
                }

                printf("Digite a Vazão nova em m³/s para o"); Rio_Index_praNome(RioIndicado);
                printf("No periodo de"); Mes_index_praData(MesIndicado);
                printf(": "); scanf("%f", &NovaVazao);

                while(1){
                    if(NovaVazao<0){
                        printf("Valores negativos de vazão não são validos, por favor insira apenas numeros reais positivos.\nAgora, novamente, digite a nova vazão em m³/s para o"); Rio_Index_praNome(RioIndicado);
                        printf("No periodo de"); Mes_index_praData(MesIndicado);
                        printf(": "); scanf("%f", &NovaVazao);
                    }else{
                        alterarVazao(Dados, RioIndicado, MesIndicado, NovaVazao);
                        break; // break da validacao da vazao
                    }
                }
                break; // break da opcao 2

            }else if(OpcaoEscolhida == 3){
                printf("Indique o Codifo do Rio de Interesse:\n"); Menu_Index_Rios();
                scanf("%i", &RioIndicado);

                while(1){
                    if(RioIndicado < 0 || RioIndicado > 9){
                        printf("\nValor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado);
                    
                    }else{
                        break; // break da validacao do Rio
                    }
                }

                printf("Indique o codigo do primeiro Mes de referência :\n"); Menu_Index_Mes();
                scanf("%i", &mesInicialPramedia);
                while(1){
                    if(mesInicialPramedia<0 || mesInicialPramedia > 23){
                        printf("Valor inválido, por favor apenas utilize numeros desta tabela para indicar o primeiro mês de referência \n");
                        Menu_Index_Mes(); scanf("%i", &mesInicialPramedia);
                    }else{
                        break; // break da validação do mesinicial
                    }
                }

                printf("Agora indique o codigo do Segundo mês de referência\n");
                Menu_Index_Mes(); scanf("%i", &mesFinalPramedia);
                while(1){
                    if(mesFinalPramedia < 0 || mesFinalPramedia > 23){
                        printf("Valor inválido, por favor apenas utilize numeros desta tabela para indicar o segundo mês de referência \n");
                        Menu_Index_Mes(); scanf("%i", &mesFinalPramedia);
                    }else{
                        break; // break da validação do mesinicial
                    }
                }

                printf("O"); Rio_Index_praNome(RioIndicado);
                printf("no intervalo entre os periodos de"); Mes_index_praData(mesInicialPramedia);
                printf("e"); Mes_index_praData(mesFinalPramedia);
                printf("teve uma vazão media de %.2f m³/s.", mediaVazao(Dados, RioIndicado, mesInicialPramedia, mesFinalPramedia));

                break; // break da opcao 3
            }else if(OpcaoEscolhida == 4){
                printf("Insira o Rio no qual gostaria que as vazãoes fossem analisadas:\n"); 
                Menu_Index_Rios(); scanf("%i", &RioIndicado);
                
                while(1){
                    if(RioIndicado < 0 || RioIndicado > 9){
                        printf("\nValor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado);

                    }else{
                        break; // break da validacao do Rio
                    }
                }

                printf("Para o"); Rio_Index_praNome(RioIndicado);
                menorMaiorVazao(Dados, RioIndicado); 
                break; //break da opcao 4
            }else if(OpcaoEscolhida == 5){
                rioMaiorVazao(Dados);

                break; //break da opcao 5
            }else if(OpcaoEscolhida == 6){
                printf("Digite a vazão de referencia em m³/s: "); scanf("%f", &VazaoDeReferencia);
                while(1){
                    if(VazaoDeReferencia<0){
                        printf("\nVazão Invalida, por favor apenas digite numeros reais, insira o valor novamente em m³/s: ");
                        scanf("%f", &VazaoDeReferencia);
                    }else{
                        break; // break da verificacao da vazao
                    }
            
                }
                mesesComVazaoMaiorQueValorIndicado(Dados, VazaoDeReferencia);
                break; //break da opcao 6

            }else if(OpcaoEscolhida == 7){
                printf("Digite o primeiro rio de seu interesse:\n"); Menu_Index_Rios();
                scanf("%i", &RioIndicado);
                
                while(1){
                    if(RioIndicado < 0 || RioIndicado > 9){
                        printf("\nValor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado);

                    }else{
                        break; // break da validacao do Rio
                    }
                }
                
                printf("Digite o segundo, para assim efetuarmos a diferença entre as vazões rio de seu interesse:\n"); Menu_Index_Rios();
                scanf("%i", &RioIndicado2);

                while(1){
                    if(RioIndicado2 < 0 || RioIndicado2 > 9){
                        printf("\nValor inválido, por favor apenas utilize numeros desta tabela\n");
                        Menu_Index_Rios(); 
                        scanf("%i", &RioIndicado2);

                    }else{
                        break; // break da validacao do Rio
                    }
                }

                printf("A diferença entre as vazões do"); Rio_Index_praNome(RioIndicado);
                printf("e"); Rio_Index_praNome(RioIndicado2);
                printf("é de %.2f m³/s", Difdevazoes(Dados, RioIndicado, RioIndicado2));

                break; // break da funcao 7 da defesa de autoria

            }else{
                printf("Código de entrada invalido, por favor insira apenas numeros da tabela indicativa a seguir: \n");
                menu(); scanf("%i", &OpcaoEscolhida);
            }
        }

        printf("\nGostaria de Continuar e explorar mais ? Se sim porfavor digite 1, se não Digite 2: "); scanf("%i", &Continua);
        while(1){
            if(Continua != 1 && Continua != 2){
                printf("Entrada invalida, Porfavor digite apenas 1 para sim, e 2 para não: "); scanf("%i", &Continua);
            }else{
                break;// break da verificacao de continuar
            }
        }

        if(Continua==2){
            printf("Ok Fechando o programa......");
            break;
        }

    }        
    return 0;
}