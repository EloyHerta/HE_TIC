def calcularIva(price, ivaType):

    try:
        price = float(price) #V a a convertir el precio a float, si por error hemos introducido una letra no va a poder y va a ejecutar el except:

        if(ivaType == "G"):
            price *= 1.16
        elif(ivaType == "R"):
            price *= 1.07
        elif (ivaType == "SR" or "Superreducido"):
            price *= 1.04

        euroPrice = int(price) # Convierte el valor a int para evitar los decimales o centimos en este caso, ya que los mostraremos mas tarde.
        cents = (price - int(price)) * 100 #Al valor de precio le resto su valor entero para quedarme con .XX, es decir, los centimos, los multiplico por 100 para que se vean como 30 cent.
        cents = int(cents) # Convierto los centimos en int para que no haya decimales ya que no existe la medida menor a centimo.

        return "El precio son: " + str(euroPrice) + " euros" " y " + str(cents) + " centimos"

    except:
        return "Ha habido un error y no se puede continuar... "
    pass

price = raw_input("Cual es el precio del articulo: ")
ivaType = raw_input("Tipo de IVA a aplicar General (G) o Reducido (R) o Superreducido (SR): ")

print(calcularIva(price, ivaType))