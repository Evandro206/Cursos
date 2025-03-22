import math as mt
altura = float(input("Dite a altura do retangulo: "))
largura = float(input("Dite a largura do retangulo: "))
print(f"Area: {altura * largura}")
print(f"Perimetro: {altura * 2 + largura * 2}")
print(f"Diagonal: {mt.sqrt(altura ** 2 + largura ** 2)}")