#Arithmetic Mean
 
n1 = float(input('Primeira nota do aluno: '))
n2 = float(input('Segunda nota do aluno: '))
n3 = float(input('Terceira nota do aluno: '))

m = (n1 + n2 + n3) / 3

print('A média entre {:.1f}, {:.1f} e {:.1f} é: {:.1f}'.format(n1, n2, n3, m))