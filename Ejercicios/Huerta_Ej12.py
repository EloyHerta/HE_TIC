def sumaDigitos(numero):



    #print "*******************************"
    #print "             Menu"
    #print "*******************************"

    i = 0
    suma = 0

    while(i == 0):

        i = numero%10
        numero = (numero - i) / 10
        numero = round(numero)
        suma = suma + i
        if (numero < 10):
            suma = suma + numero
    return("Sum of the digits is: " + str(suma))

numero = input("Introduce el numero: ")

print(sumaDigitos(numero))