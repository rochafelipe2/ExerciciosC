#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float calcularSalarioLiquido(float salario_bruto, int faltas, int dependentes);
float calcularFaltas(float salario);
float calcularPlanoSaude(float salario);
float calcularIR(float salario);
float calcularAbono(float salario);
float calcularVA(float salario);
float calcularSalarioFamilia(float salario, int dependentes);

int main()
{
    float salario = 1000;
    float desconto = (calcularFaltas(1000)) + (calcularPlanoSaude(salario));
    float acrescimo = calcularAbono(salario) + calcularVA(salario);
    printf("#######################\n");
    printf("Salário bruto = %f \n",1000);
    printf(" - Descontos  = %f \n",desconto);
    printf(" + Acréscimos = %f \n",acrescimo);
    printf("Salario liquido = %f \n",calcularSalarioLiquido(1000,8,0));
    printf("#######################\n");

    return 0;
}


float calcularSalarioLiquido(float salario_bruto, int faltas, int dependentes)
{

  float descontos = calcularFaltas(salario_bruto);
        descontos += calcularPlanoSaude(salario_bruto);

  float acrescimos =  calcularAbono(salario_bruto) ;
        acrescimos =  calcularVA(salario_bruto);
        acrescimos = calcularSalarioFamilia(salario_bruto, dependentes);

  float salario_liquido = (salario_bruto - descontos) + acrescimos;

  return salario_liquido;
}

float calcularFaltas(float salario)
{
    #define FALTA 0.03

    return salario * FALTA;
}

float calcularPlanoSaude(float salario)
{
    #define PLANO_SAUDE 0.06
   return salario * PLANO_SAUDE;
}

float calcularIR(float salario)
{
   #define IR_0 0
   #define IR_3 0.03
   #define IR_5 0.05
   #define IR_7 0.07

   float retorno;

   if(salario <= 900)
   {
      retorno = salario *  IR_0;
   }else
   {
       if(salario >= 901 && salario <= 3000)
       {
         retorno = salario *  IR_3;
       }else
       {
           if(salario >= 3001 && salario <= 4000)
           {
               retorno = salario *  IR_5;
           }else
           {
               retorno = salario *  IR_7;
           }
       }
   }

   return retorno;
}

float calcularAbono(float salario)
{
    #define ABONO 0.25
    #define AC_ABONO 130
    float valor_abono = (salario * ABONO) + AC_ABONO;
    return  valor_abono > 1000 ? 1000 : valor_abono;
}

float calcularVA(float salario)
{
    #define VA 0.12

    return salario * VA;
}

float calcularSalarioFamilia(float salario, int dependentes)
{
    #define SALARIO_FAMILIA 0.25

    return salario * (SALARIO_FAMILIA * dependentes);
}
