#Double, Triple, Square Root
#** é o operador de potência em python
n = int(input('Digite um número: '))
d = n * 2
t = n * 3
s = n ** (1/2)
#Para raiz quadrada eu também poderia utilizar a biblioteca math
#import math
#s = math.sqrt(n)
print('O dobro de {} é: {}\nO triplo é: {}\nA raiz quadrada é: {:.2f}'.format(n, d, t, s))
