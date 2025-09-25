Algoritmo "Exercício_1"
//Cleiton e Eduarda
Var
   nome,categoria,borda:caracter
   valor_final,pizza:real
Inicio
   escreva("Digite seu nome: ")
   leia(nome)
   escreva("Qual pizza voce deseja: ")
   leia(categoria)
   escolha(categoria)
   caso "M"
      pizza<- 60
      escreval("Marguerita R$ 60.00")
   caso "C"
      pizza<- 50
      escreval("Calabresa R$ 50.00")
   caso "E"
      pizza<- 70
      escreval("Estrogonofe R$ 70.00")
   caso "F"
      pizza<- 72
      escreval("Filé com palha R$ 72.00")
   caso "P"
      pizza<- 55
      escreval("Prestígio R$ 55.00")
   outrocaso
      escreval("Sabor de pizza invalido R$ 0.00")
      pizza<- 0
   fimescolha
   escreval("Deseja com borda? S- para Sim e N- para Não")
   leia(borda)
   escolha(borda)
   caso "S"
      valor_final<-pizza+5
   caso "N"
      valor_final<-pizza
   fimescolha

   escreval("Nome do cliente: ",nome)
   escreval("O valor da sua pizza é R$",valor_final)

Fimalgoritmo