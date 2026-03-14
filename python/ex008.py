#Measurement Converter

print('=====Conversor de medidas=====')
m = float(input('Digite uma distância em metros: '))

#Medidas convertidas
dm = m * 10
cm = m * 100
mm = m * 1000
dam = m / 10
hm = m / 100
km = m / 1000

#Respostas
print(f'{m} metros equivalem a:')
print(f'{dm} dm\n{cm} cm\n{mm} mm\n{dam} dam\n{hm} hm\n{km} km')
