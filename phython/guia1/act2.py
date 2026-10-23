import math
def ganancia_parabolica(diametro_m, frecuencia_hz, eficiencia):
    return 10*math.log10(eficiencia*(((math.pi*diametro_m)/(3*10**8/frecuencia_hz))**2))

diametro=[0.3,0.6,1.2]
frecuencia=[5.8*10**9,11*10**9]
print(f"{'Ganacia parabolica':<20}|{'Diametro ':^18}|{'frecuencia Hz ':>15}")
v1=[]
for i in range(len(frecuencia)):
    for j in range(len(diametro)):
        d=diametro[j]
        f=frecuencia[i]
        a=ganancia_parabolica(d,f,0.55)
        v1.append(a)
        print(f"{a:<20.2f}|{diametro[j]:^18}|{frecuencia[i]:>15.2f}")
print(v1)
duplica1=v1[1]-v1[0]
duplica2=v1[2]-v1[1]
duplica3=v1[4]-v1[3]
duplica4=v1[5]-v1[4]
print("valores de duplicar el tamaño")
print("v1",duplica1,"v2",duplica2,"v3",duplica3,"v4",duplica4)
print("valores de saltar en frecuencia")
print(v1[3]-v1[0])
print(v1[4]-v1[1])
print(v1[5]-v1[2])