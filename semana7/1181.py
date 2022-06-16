tamanhoLinhaEColuna: int = 12
matriz = [[0 for i in range(tamanhoLinhaEColuna)] for j in range(tamanhoLinhaEColuna)]

linha: int = int(input())
operacao: chr = input()

soma: int = 0

for i in range(tamanhoLinhaEColuna):
    for j in range(tamanhoLinhaEColuna):
        matriz[i][j] = float(input())
        if i == linha:
            soma += matriz[i][j]
if operacao == 'S':
    print("%.1f" % soma)
else:
    print("%.1f" % (soma/tamanhoLinhaEColuna))
