Algoritmo "Exercício_2"
//Cleiton e Eduarda
Var
   idade,peso,ml,mg,gotas:real
Inicio
   escreva("Digite sua idade: ")
   leia(idade)
   escreva("Digite seu peso: ")
   leia(peso)
   se(idade>=12) entao
      se(peso>=60)entao
         mg <- 1000
         gotas <- (mg*20)/500
      senao
         mg <- 875
         gotas <- (mg*20)/500
      fimse
   senao
      se((peso>=5)e(peso<=9))entao
         mg <- 125
         gotas <- (mg*20)/500
      senao
         se((peso>9)e(peso<=16))entao
            mg <- 250
            gotas <- (mg*20)/500
         senao
            se((peso>=16.1)e(peso<=24))entao
               mg <- 375
               gotas <- (mg*20)/500
            senao
               se((peso>=24.1)e(peso<=30))entao
                  mg <- 500
                  gotas <- (mg*20)/500
               senao
                  se(peso>30)entao
                     mg <- 750
                     gotas <- (mg*20)/500
                  senao
                     escreva("A criança não podera tomar o remédio")
                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
   escreva("Você deverá tomar",gotas," gotas")
Fimalgoritmo


