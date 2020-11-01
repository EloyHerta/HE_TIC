def piramide(height):

    material = "*"
    espacio = " "
    multiplicador = 0
    resultadoPiramide = 0

    for i in range(0, height):
        multiplicador += 1
        resultadoPiramide = material * multiplicador
        print resultadoPiramide

height = input("Cual es la altura? ")
#width = input("Cual es la longitud? ")
print(piramide(height))
