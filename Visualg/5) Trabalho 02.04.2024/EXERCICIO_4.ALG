Algoritmo "Exercício_4"
//Cleiton e Eduarda
Var
   idade,peso,risco:real
Inicio
   escreva("Digite sua idade: ")
   leia(idade)
   escreva("Digite seu peso: ")
   leia(peso)
   se(idade < 20) entao
      se(peso <= 60) entao
         risco <- 9
      senao
         se(peso > 60) e (peso <= 90) entao
            risco <- 8
         senao
            se(peso > 90) entao
               risco <- 7
            fimse
         fimse
      fimse
   fimse
   se(idade >= 20) e (idade <= 50) entao
      se(peso <= 60) entao
         risco <- 6
      senao
         se(peso > 60) e (peso <= 90) entao
            risco <- 5
         senao
            se(peso > 90) entao
               risco <- 4
            fimse
         fimse
      fimse
   fimse
   se(idade > 50) entao
      se(peso <= 60) entao
         risco <- 3
      senao
         se(peso > 60) e (peso <= 90) entao
            risco <- 2
         senao
            se(peso > 90) entao
               risco <- 1
            fimse
         fimse
      fimse
   fimse
   escreva("De acordo com sua idade e seu peso seu grupo de risco é: ",risco)
Fimalgoritmo