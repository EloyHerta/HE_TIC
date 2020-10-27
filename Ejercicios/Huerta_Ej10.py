def numeros(numeroBase, vecesRepetir):

    numeroBase = int(numeroBase)
    print "Suma: "
    for i in range(0,vecesRepetir):

        numeroBase += 1
        numeroPositivo = numeroBase
        print str(numeroBase-1) + " + 1" " = " + str(numeroPositivo)

    numeroBase = numeroBase - 3

    print "Resta: "
    for i in range(0,vecesRepetir):

        numeroBase -= 1
        numeroNegativo = numeroBase
        print str(numeroBase+1) + " - 1" " = " + str(numeroNegativo)

    print ""
    return "Exiting..."

numeroBase = input("Introduce el numero base: ")
vecesRepetir = input("Cuantas veces quieres repetir el proceso? ")

print(numeros(numeroBase, vecesRepetir))