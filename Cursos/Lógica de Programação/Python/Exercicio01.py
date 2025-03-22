def soma_impares(x, y):
    soma = 0
    for i in range(x ,y + 1):
        if (i % 2 != 0):
            soma = soma + i
    print(f"A soma dos numero é: {soma}")

x = int(input("Digite o numero um: "))
y = int(input("Digite o numero dois: "))
soma_impares(x, y)