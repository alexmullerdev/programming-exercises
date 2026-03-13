#dissecting a variable

var = input('Digite algo: ')
#Input sempre retornará string, o resultado seria diferente se utilizasse var = int(input(''))
print('O tipo primitivo desse valor é: ', type(var))
#Resultados booleanos (True or False)
print('Só tem espaços? ', var.isspace())
print('É um número? ', var.isnumeric())
print('É alfabético? ', var.isalpha())
print('É alfanumérico? ', var.isalnum())
print('É maiúsculo? ', var.isupper())
print('É minúsculo? ', var.islower())

