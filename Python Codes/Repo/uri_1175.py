lista = []
for i in range(5):    
    valor = int(input())
    lista.append(valor)
pos = 0
lista.reverse()
for l in lista:
    print("N[%d] = %d" %(pos,l))
    pos += 1