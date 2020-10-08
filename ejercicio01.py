def ejercicio01():
    
    # Ejercicio 01: Convertir vocales en U.
    
    palabra = raw_input("Introduzca la palabra que usted desee. ")
 
    cont = 0
    for cont in range(0,11):
        if palabra[cont]=='a' or palabra[cont]=='e' or palabra[cont]=='i' or palabra[cont]=='o':
            print 'u'
        else:
            print palabra[cont]
    print "La palabra es ahora... ",palabra
    input = ()
            
ejercicio01()
