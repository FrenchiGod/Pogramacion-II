import math
import numpy as np 
rssi = np.array([-68.2, -67.9, -67.5, -67.8, -68.0, -68.9,
                -70.4, -72.8, -74.1, -75.6, -76.3, -75.9,
                -74.8, -75.2, -76.8, -77.1, -75.4, -73.9,
                -72.2, -70.8, -69.9, -69.1, -68.7, -68.4])

print("promedio en dbm: ",np.mean(rssi))
for i in range(len(rssi)):
    mW=10**(rssi[i]/10)
    rssi[i]=mW
print("promedio en mW: ",np.mean(rssi))
for i in range(len(rssi)):
    db=10*math.log10(rssi[i])
    rssi[i]=db
min=np.min(rssi)
max=np.max(rssi)
b=1
lugarmin=0
lugarmax=0
for i in rssi:
    if i==min:
        lugarmin=b
    if i==max:
        lugarmax=b
    else:
        b+=1
print("el valor mas alto es de: ",max,"en la hora: ",lugarmax)
print("el valor mas bajo es de: ",min,"en la hora: ",lugarmin)
valoresmenores=[]
cont=0
for i in range(len(rssi)):
    if rssi[i]<-75:
        a=int(rssi[i])
        valoresmenores.append(a)
        cont=+1
print("lo valores fueron un total de: ",cont)
print(valoresmenores)
print("zona de riesgo")
riesgo=[]
cont=0
for i in range(len(rssi)):
    if rssi[i]>=-75 and rssi[i]<=-72:
        riesgo.append(int(rssi[i]))
        cont+=1
print("la cantidad de horas que las mediciones estubieron en la zona de riesgo fueron de: ",cont)
print(riesgo)
print("la razon por la cual a la mañana y vespertino es peor la medicion es porque hay mas movimiento (ruido externo)")
        


    

