tamanhoLinhaEColuna: int = 12
matriz = [[0 for i in range(tamanhoLinhaEColuna)] for j in range(tamanhoLinhaEColuna)]

operacao: chr = input()

soma: int = 0
quantidadeElementos : int = 0

for i in range(tamanhoLinhaEColuna):
    for j in range(tamanhoLinhaEColuna):
        matriz[i][j] = float(input())
        if (i + j) > (tamanhoLinhaEColuna - 1):
            soma += matriz[i][j]
            quantidadeElementos+=1
if operacao == 'S':
    print("%.1f" % soma)
else:
    print("%.1f" % (soma/quantidadeElementos))
