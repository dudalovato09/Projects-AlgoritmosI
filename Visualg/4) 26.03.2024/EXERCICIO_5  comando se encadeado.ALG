Algoritmo "Exercicio_5"
// Descrição   : Imprimir cargo e código, feito em aula com a professora
// Data atual  : 26/03/2024

Var
   salario_atual,reajuste: real
   cargo: inteiro
Inicio
   escreval("Informe o cargo do funcionário:")
   escreval("1. Escrituário")
   escreval("2. Secretário")
   escreval("3. Caixa")
   escreval("4. Gerente")
   escreval("5. Diretor")
   leia(cargo)
   escreva("Informe o salário atual do funcionário: ")
   leia(salario_atual)

   se (cargo = 1) entao
      escreval("Escrituário")
      reajuste <- salario_atual * 50/100
      escreval("Aumento de ", reajuste)
      escreval("Novo salário: ", salario_atual + reajuste)
   senao
      se (cargo = 2) entao
         escreval("Secretário")
         reajuste <- salario_atual * 35/100
         escreval("Aumento de ", reajuste)
         escreval("Novo salário: ", salario_atual + reajuste)
      senao
         se (cargo = 3) entao
            escreval("Caixa")
            reajuste <- salario_atual * 20/100
            escreval("Aumento de ", reajuste)
            escreval("Novo salário: ", salario_atual + reajuste)
         senao
            se (cargo = 4) entao
               escreval("Gerente")
               reajuste <- salario_atual * 10/100
               escreval("Aumento de ", reajuste)
               escreval("Novo salário: ", salario_atual + reajuste)
            senao
               se (cargo = 5) entao
                  escreval("Diretor")
                  escreval("Não tem aumento")
               fimse
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo