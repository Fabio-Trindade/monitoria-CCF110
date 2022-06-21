numerosPares = []
numerosImpares = []
for i in range(15):
    numero = int(input())
    if numero%2==0:
        numerosPares.append(numero)
    else:
        numerosImpares.append(numero)
    if len(numerosImpares) == 5 or i == 14:
        for j in range(len(numerosImpares)):
            print("impar[{}] = {}".format(j,numerosImpares[j]))
        numerosImpares.clear()
    if len(numerosPares) == 5 or i==14:
        for j in range(len(numerosPares)):
            print("par[{}] = {}".format(j,numerosPares[j]))
        numerosPares.clear()
    
