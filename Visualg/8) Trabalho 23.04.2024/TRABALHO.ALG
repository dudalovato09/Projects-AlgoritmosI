Algoritmo "Trabalho"
// Grupo: Eduarda Lovato e Cleiton Muniz
// Data atual  : 23/04/2024
Var
   sexo,lixo,agua,consulta:caracter
   moradores,escolaridade,residencia,mulheres,homens,outros,renda:inteiro
   pessoas,total_moradores,agua_s,agua_n,lixo_n,lixo_s:inteiro
   total_agua_n,total_agua_s,total_lixo_s, total_lixo_n,total_residencia:inteiro
   analfabetos,S_iniciais,fundamental,medio,superior,graduacao,outra_esc:inteiro
   i_analfabetos,i_iniciais,i_fundamental,i_medio,i_superior,i_graduacao,i_outros:real
   indice_mulheres,indice_homens,indice_outros,total_renda,total_escolaridade:real
   total_pessoas,media_renda,media_moradores:real



Inicio
   moradores <- 0
   residencia <- 0
   mulheres <- 0
   homens <- 0
   outros <- 0
   pessoas <- 0
   agua_s <- 0
   agua_n <- 0
   lixo_s <- 0
   lixo_n <- 0
   renda <- 0
   analfabetos <- 0
   S_iniciais <- 0
   fundamental <- 0
   medio <- 0
   superior <- 0
   graduacao <-  0
   outra_esc <- 0
   i_analfabetos <- 0
   i_iniciais <- 0
   i_fundamental <- 0
   i_medio <- 0
   i_superior <- 0
   i_graduacao <-  0
   i_outros <- 0
   total_agua_s <- 0
   total_agua_n <- 0
   total_lixo_s <- 0
   total_lixo_n <- 0
   total_pessoas <- 0
   total_renda <- 0
   total_moradores <- 0
   media_moradores <- 0
   media_renda <- 0

   repita

      residencia <- residencia + 1

      repita
         pessoas <- pessoas + 1
         escreva("Digite o seu sexo (M = maculino, F = feminino OU O = outros): ")
         leia(sexo)
         se ((sexo <> "M") e (sexo <> "F") e (sexo <> "O")) entao
            escreval("sexo inválido, redigite")
         fimse
      ate ((sexo = "M") ou (sexo = "F") ou (sexo = "O"))
      escolha(sexo)
      caso "F"
         mulheres <- mulheres + 1
      caso "M"
         homens <- homens + 1
      caso "O"
         outros <- outros + 1
      fimescolha

      repita
         escreva("Digite número de moradores que residem em sua casa: ")
         leia(moradores)
         total_moradores <- total_moradores + moradores
         se (moradores < 1) entao
            escreval("Número inválido, redigite")
         fimse
      ate (moradores >= 1)
      repita
         escreva("Digite sua renda familiar: ")
         leia(renda)
         total_renda <- total_renda + renda
         se (renda < 1) entao
            escreval("Número inválido, redigite")
         fimse
      ate (renda >= 1)
      repita
         escreva("Sua família coleta água da chuva? Digite S - sim ou N - não ")
         leia(agua)
         se ((agua <> "S")e(agua <> "N"))entao
            escreval("Resposta inválida, redigite")
         fimse
      ate (agua = "S") ou (agua = "N")
      se (agua = "S") entao
         agua_s <- agua_s + 1
      senao
         agua_n <- agua_n + 1
      fimse
      repita
         escreva("Sua família realiza separção do lixo? Digite S - sim ou N - não ")
         leia(lixo)
         se ((lixo <> "S") e (lixo <> "N")) entao
            escreval("Resposta inválida, redigite")
         fimse
      ate (lixo = "S") ou (lixo = "N")
      se (lixo = "S") entao
         lixo_s <- lixo_s + 1
      senao
         lixo_n <- lixo_n + 1
      fimse
      repita
         total_escolaridade <- total_escolaridade + 1
         escreval("Qual o maior grau de escolaridade na sua família?")
         escreval("Digite 1 para Analfabeto")
         escreval("Digite 2 para Séries iniciais")
         escreval("Digite 3 para Ensino fundamental")
         escreval("Digite 4 para Ensino médio")
         escreval("Digite 5 para Ensino Superior")
         escreval("Digite 6 para pós graduação")
         escreval("Digite 7 para outros")
         leia(escolaridade)
         se ((escolaridade < 1) OU (escolaridade > 7))entao
            escreval("Resposta inválida, redigite")
         fimse
      ate ((escolaridade >= 1) ou (escolaridade <= 7))
      escolha(escolaridade)
      caso 1
         analfabetos <- analfabetos + 1
      caso 2
         S_iniciais <- S_iniciais + 1
      caso 3
         fundamental <- fundamental + 1
      caso 4
         medio <- medio + 1
      caso 5
         superior <- superior + 1
      caso 6
         graduacao <- graduacao + 1
      caso 7
         outra_esc <- outra_esc + 1
      fimescolha

      escreva("Você deseja consultar mais residências? Digite S- Sim ou N- não: ")
      leia(consulta)
      se ((consulta <> "S")e(consulta <> "N"))entao
         escreval("Resposta inválida, redigite")
      fimse
   ate (consulta = "N")


   escreval("Total de residencias consultadas: ", residencia)
   escreval (  )

   total_agua_n <- total_agua_n + agua_n
   total_agua_s <- total_agua_s + agua_s
   escreval("Total de residencias que coletam agua da chuva: ", total_agua_s)
   escreval (  )
   escreval("Total de residencias que não coletam agua da chuva: ", total_agua_n)
   escreval (  )

   total_lixo_n <- total_lixo_n + lixo_n
   total_lixo_s <- total_lixo_s + lixo_s
   escreval("Total de residencias que fazem a separação do lixo: ", total_lixo_s)
   escreval (  )
   escreval("Total de residencias que não fazem a separação do lixo: ", total_lixo_n)
   escreval (  )

   total_pessoas <-  total_pessoas + pessoas
   indice_homens <- 100 * homens/total_pessoas
   indice_mulheres <- 100 * mulheres/total_pessoas

   indice_outros <- 100 * outros/total_pessoas
   escreval("Total de pessoas: ",total_pessoas)
   escreval (  )
   escreval("Total de homens: ", homens," Que totalizam",indice_homens, "%")
   escreval (  )
   escreval("Total de mulheres: ", mulheres," Que totalizam",indice_mulheres, "%")
   escreval (  )
   escreval("Total de outros: ", outros," Que totalizam",indice_outros, "%")
   escreval (  )

   media_renda <- total_renda / residencia
   escreval("Média de rendas: ",media_renda)
   escreval (  )

   media_moradores <- total_moradores / residencia
   escreval("Média de moradores: ",media_moradores)
   escreval (  )

   i_analfabetos <- 100 * analfabetos/total_escolaridade
   escreval("Total de pesquisados analfabetos: ", analfabetos," Que totalizam",i_analfabetos, "%")
   escreval (  )

   i_iniciais <- 100 * S_iniciais/total_escolaridade
   escreval("Total de pesquisados séries inciais: ", S_iniciais," Que totalizam",i_iniciaIs, "%")
   escreval (  )

   i_fundamental <- 100 * fundamental/total_escolaridade
   escreval("Total de pesquisados ensino fundamental: ", fundamental," Que totalizam",i_fundamental, "%")
   escreval (  )

   i_medio <- 100 * medio/total_escolaridade
   escreval("Total de pesquisados ensino médio: ", medio," Que totalizam",i_medio, "%")
   escreval (  )

   i_superior <- 100 * superior/total_escolaridade
   escreval("Total de pesquisados ensino superior: ", superior," Que totalizam",i_superior, "%")
   escreval (  )

   i_graduacao <- 100 * graduacao/total_escolaridade
   escreval("Total de pesquisados pós graduação: ", graduacao," Que totalizam",i_graduacao, "%")
   escreval (  )

   i_outros <- 100 * outra_esc/total_escolaridade
   escreval("Total de pesquisados como outros: ", outra_esc," Que totalizam",i_outros, "%")
   escreval (  )




Fimalgoritmo