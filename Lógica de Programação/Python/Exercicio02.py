def ordem(x, y):
    if (x < y):
        print("A ordem é crescente")
    elif (x > y):
        print("A ordem é decrescente") 
    else:
        print("Os numeros são iguais")
        
x = int(input("Digite o numero um: "))
y = int(input("Digite o numero dois: "))
ordem(x, y)