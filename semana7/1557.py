ordemMatriz =int(input())
while ordemMatriz != 0:
    matriz = [['0' for i in range(ordemMatriz)]for j in range(ordemMatriz)]
    maiorValor: int = 4**(ordemMatriz-1)
    #Quantidade de dígitos do maior valor
    tamanhoMaiorValor = len(str(maiorValor))
    for i in range(ordemMatriz):
        for j in range(ordemMatriz):
            num =  str(2**(i + j))
            tamanhoNum=len(num)
            if j != ordemMatriz-1:
                matriz[i][j]=' '*(tamanhoMaiorValor-tamanhoNum) + num + ' '
            else:
                matriz[i][j]=' '*(tamanhoMaiorValor-tamanhoNum) + num
        #Função join transforma os valores do vetor em string
        print(''.join(matriz[i]))
    print()
    ordemMatriz =int(input())
