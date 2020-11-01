def ordinal(numero):

    numOrdinal = ["Primero", "Segundo", "Tercero", "Cuarto", "Quinto", "Sexto", "Septimo", "Octavo", "Noveno", "Decimo"]

    for i in range(0, len(numOrdinal)):
        return numOrdinal[numero-1]

numero = input("Introduzca un numero del 0-10: ")

print(ordinal(numero))
