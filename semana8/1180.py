tamanhoVetor = int(input())
vetor = input().split(" ")
menorNumero = int(vetor[0])
posicaoMenorNumero = 0
for i in range(1,tamanhoVetor):   
    if int(vetor[i])< menorNumero:
        menorNumero = int(vetor[i])
        posicaoMenorNumero = i
print("Menor valor: {}".format(menorNumero))
print("Posicao: {}".format(posicaoMenorNumero))