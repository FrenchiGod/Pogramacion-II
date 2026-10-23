import math
import numpy as np

distancia=np.array([2.5,8.0,12.0,3.0,15.0,20.0,6.5,28.0])
frecuencia=np.array([5.8,5.8,5.8,2.4,2.4,2.4,5.8,2.4])
flsp=0
prx=0
margen=np.zeros(len(distancia))
distancia=distancia *1000
frecuencia=frecuencia*10**9
flsp=20*np.log10((4*np.pi*distancia*frecuencia)/(3*10**8))
prx=23+15+15-flsp
margen=prx+75
estado=np.where(margen>=0, "ok","error")
d_km = np.round(distancia / 1000, 1)
f_ghz = np.round(frecuencia / 10**9, 1)
fspl_red = np.round(flsp, 2)
prx_red = np.round(prx, 2)
margen_red = np.round(margen, 2)
columnas = np.column_stack((d_km, f_ghz, fspl_red, prx_red, margen_red, estado))
encabezados = np.array(["Dist(km)", "Frec(GHz)", "FSPL(dB)", "Prx(dBm)", "Margen(dB)", "Estado"])
tabla_final = np.vstack((encabezados, columnas))
print(tabla_final)
fallas_totales = np.sum(estado == "error")
print(f"\nCantidad total de enlaces que fallan: {fallas_totales}")