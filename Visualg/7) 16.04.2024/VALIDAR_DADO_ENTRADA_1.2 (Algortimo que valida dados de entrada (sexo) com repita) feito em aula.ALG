Algoritmo "Validar_dado_entrada_1.2"
// Descrição   : Algortimo que valida dados de entrada (sexo)
//(le um dado, testa e ve se esta certo)
// Data atual  : 16/04/2024
Var
   sexo:caracter

Inicio
   repita
      escreva("Digite o seu sexo (M, F OU O): ")
      leia(sexo)
      se ((sexo <> "M") e (sexo <> "F") e (sexo <> "O")) entao
         escreval("sexo inválido, redigite")
      fimse
   ate ((sexo = "M") ou (sexo = "F") ou (sexo = "O"))

Fimalgoritmo