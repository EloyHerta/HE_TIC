def example(palabra, letras):

    caracteres = 0
    letraProbar = 0

    for i in palabra:
        caracteres += 1

    if caracteres == letras:
        return "Es correcto."
    else:
        while letraProbar != caracteres:
            letraProbar = input("Su numero NO COINCIDE. Cuente de nuevo.")
        return "Correcto, " + str(caracteres) + " letras"

palabra = raw_input("Palabra: ")
letras = input("Cuantas letras tiene la palabra? ")

print(example(palabra, letras))