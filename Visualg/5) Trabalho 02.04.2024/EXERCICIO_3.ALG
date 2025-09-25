Algoritmo "Exercício_3"
//Cleiton e Eduarda
Var
   idade,mensalidade:real
Inicio
   escreva("Digite sua idade: ")
   leia(idade)
   se(idade<=10)entao
      mensalidade <- 30.00
   senao
      se (idade>10)e(idade<=29)entao
         mensalidade <- 60.00
      senao
         se (idade>29)e(idade<=45)entao
            mensalidade <- 120
         senao
            se(idade>45)e(idade<=59)entao
               mensalidade <- 150
            senao
               se(idade>59)e(idade<=65)entao
                  mensalidade <- 250
               senao
                  mensalidade<- 400
               fimse
            fimse
         fimse
      fimse
   fimse
   escreval("Sua mensalidade será no valor de R$",mensalidade)
Fimalgoritmo