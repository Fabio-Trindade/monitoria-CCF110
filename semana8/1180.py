tamanhoVetor = int(input())

vetor = list(map(int,input().split(" "))) 
menorNumero = vetor[0]
for i in range(1,tamanhoVetor):   
    if vetor[i]< menorNumero:
        menorNumero = vetor[i]
        
