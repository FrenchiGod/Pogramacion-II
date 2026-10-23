import math

def potenciaWats_a_dBW(a):
    if a<=0:
        return float('-inf')
    return 10*math.log10(a)
def dbw_a_dbm(a):
    return a+30
def main():
    p=0.1
    t=2
    e=40
    E=10000
    print("                equipo                       |  Potencia ----> dBW                ----> dBm ")
    print("punto de acceso Wifi                         |    ",p,"  ---->",potenciaWats_a_dBW(p),"             ---->",dbw_a_dbm(potenciaWats_a_dBW(p)))
    print("Teléfono celular (máximo)                    |    ",t,"    ---->",potenciaWats_a_dBW(t)," ---->",dbw_a_dbm(potenciaWats_a_dBW(t)))
    print("Estación base celular                        |    ",e,"   ---->",potenciaWats_a_dBW(e),"---->",dbw_a_dbm(potenciaWats_a_dBW(e)))
    print("Emisora de FM                                |    ",E,"---->",potenciaWats_a_dBW(E),"              ---->",dbw_a_dbm(potenciaWats_a_dBW(E)))
    a=potenciaWats_a_dBW(p)
    b=potenciaWats_a_dBW(E)
    db=dbw_a_dbm(b)-dbw_a_dbm(a)
    relacion=10**(db/10)
    print("los db que separa la emisora de FM del punto de acceso Wifi es de: ",db)
    print("y la cantidad de potencia es de ",relacion)
main()
    


