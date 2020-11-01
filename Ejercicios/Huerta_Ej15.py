def contarAbecedario(palabra):

    letra = palabra[0]
    letra = letra.lower() #Transformo la letra en minuscula

    number = ord(letra) - 96  # Resto 96 para transformarlo su valor en ASCII a decimal. Las letras en minusculas comienzan con valor 96 en decimal ASCII, por ende -96.
    return "El orden numerico de la letra es: " + str(number)

palabra = raw_input("Palabra a escribir: ")

print(contarAbecedario(palabra))
