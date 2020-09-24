def sumaGauss3():
	
    n_final=input("Selecciona hasta que numero deseas sumar:  ")
    suma_acumulada=0
    
    for numberSum in range(1, n_final+1):
       
    	suma_acumulada = suma_acumulada + numberSum
    	
    print "Resultado total es:  ",suma_acumulada	
    input("")
        

sumaGauss3()
