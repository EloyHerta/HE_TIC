    # Vamos a hacer un programa que compruebe el NIF de una persona, devolviendo el numero 0 si es correcto y el 1 si es incorrecto.
def nifIdentifier(nif):

    nifLetter = "X"
    print "    NIF SYSTEM"
    print "--------------------"
    character = 0
    #Vamos a contar el numero total de letras/numeros en el NIF.
    #Entiendo que va a ser constante el numero de letras/numeros, pero por si acaso...
    for i in nif:
        character += 1

    if(nif[character-1] == nifLetter):
        return 0
    else:
        return 1

nif = raw_input("Introduce tu NIF, formato 000000000X ")


print(nifIdentifier(nif))
