while True:
    try:
        tamanhoMatriz = int(input())
        matriz = [[0 for j in range(tamanhoMatriz)]
                  for i in range(tamanhoMatriz)]
        for i in range(tamanhoMatriz):
            for j in range(tamanhoMatriz):
                if i+j == (tamanhoMatriz-1):
                    matriz[i][j] = 2
                elif i == j:
                    matriz[i][j] = 1
                else:
                    matriz[i][j] = 3
                print('{}'.format(matriz[i][j]),
                    end='' if j != (tamanhoMatriz-1) else '\n')

    except EOFError:
        break
