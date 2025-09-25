Algoritmo "Exercicio_6"
// Descrição   : Cálculo das laranjas
// Data atual  : 13/03/2024
Var
precoduiza, qntlaranjas, desconto, precofinal, troco, pago:real



Inicio
escreva("preço duzia")
leia (precoduiza)
escreva("quantidade de laranjas")
leia (qntlaranjas)
escreva("desconto")
leia (desconto)

precofinal <- (qntlaranjas*precoduiza*(desconto/100))
escreva("preço total =",precofinal)
escreva("quanto o cliente pagou?")
leia (pago)
troco <- pago-precofinal
escreva("troco",troco)


Fimalgoritmo