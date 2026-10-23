import matplotlib.pyplot as plt 
import numpy as np 
frecuencia=np.array([5.8,5.8,5.8,2.4,2.4,2.4,5.8,2.4])
kilometros=np.linspace(40,-40,200)
metros=kilometros *1000
frec_1=5.8*10**9
frec_2=2.4*10**9
flsp_1=20*np.log10((4*np.pi*metros*frec_1)/(3*10**8))
flsp_2=20*np.log10((4*np.pi*metros*frec_2)/(3*10**8))
prx_1=23+15+15-flsp_1
prx_2=23+15+15-flsp_2
estado_1=np.where(prx_1>=-75,True,False)
estado_2=np.where(prx_2>=-75,True,False)
distancia1=kilometros[prx_1>=-75]
distancia2=kilometros[prx_2>=-75]
alcance_max_1 = np.max(distancia1)
alcance_max_2 = np.max(distancia2)
plt.figure()
plt.title("Gráfico de cobertura")
plt.xlabel("Distancia")
plt.ylabel("potencia Recibida")
plt.plot(kilometros,prx_1,label="5.8Ghz")
plt.plot(kilometros,prx_2,label="2.4Ghz")
plt.axhline(-75,color="red",linestyle="--",label="umbral -75dBm")
plt.axvline(alcance_max_1,color="green",linestyle=":",label=f"Alcance 5.8 GHz: {alcance_max_1:.1f} km")
plt.axvline(alcance_max_2,color="green",linestyle=":",label=f"Alcance 2.4 GHz: {alcance_max_2:.1f} km")
plt.legend()
plt.grid()
plt.show()