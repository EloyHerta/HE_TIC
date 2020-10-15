import random

def number():

    maxNumber = input("Selecciona el maximo numero posible. ")
    randomNumber = random.randrange(0,maxNumber)
    numberG = 0
    

    while numberG != randomNumber:

        numberG = input("Prueba un numero... ")
        if(numberG < randomNumber):
            print "El numero es mayor..."
        elif(numberG > randomNumber):
            print "El numero es menor..."

    input("Has acertado el numero. ")

number()
