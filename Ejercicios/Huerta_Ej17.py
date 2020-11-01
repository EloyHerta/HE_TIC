def cambioDinero(articuloPrice, billetePagar):
    cambio = billetePagar - articuloPrice
    devolucion = "Le hemos devuelto: "
    print cambio
    while cambio > 0:

        if(cambio >= 500):
            cantidad = int(cambio/500)
            cambio -= 500 * cantidad
            devolucion += str(cantidad) + " billete de " + "500, "

        if (cambio >= 200):
            cantidad = int(cambio / 200)
            cambio -= 200 * cantidad
            devolucion += str(cantidad) + " billete de " + "200, "

        if (cambio >= 100):
            cantidad = int(cambio / 100)
            cambio -= 100 * cantidad
            devolucion += str(cantidad) + " billete de " + "100, "

        if (cambio >= 50):
            cantidad = int(cambio / 50)
            cambio -= 50 * cantidad
            devolucion += str(cantidad) + " billete de " + "50, "

        if (cambio >= 20):
            cantidad = int(cambio / 20)
            cambio -= 20 * cantidad
            devolucion += str(cantidad) + " billete de " + "20, "

        if (cambio >= 10):
            cantidad = int(cambio / 10)
            cambio -= 10 * cantidad
            devolucion += str(cantidad) + " billete de " + "10, "

        if (cambio >= 5):
            cantidad = int(cambio / 5)
            cambio -= 5 * cantidad
            devolucion += str(cantidad) + " billete de " + "5, "

        if (cambio >= 1):
            cantidad = int(cambio)
            cambio -= 1 * cantidad
            if(cantidad > 0):
                devolucion += str(cantidad) + " monedas de " + "1, "
            else:
                devolucion += str(cantidad) + " moneda de " + "1, "

    print cambio
    print devolucion

def changeMoney(price, bill):

    change = bill - price
    text = ""
    valor = [500,200,100,50,20,10,5,2,1]

    while change >= 0:
        for c in valor:
            if change > c:
                amount = int(change / c)
                change -= c * amount
                text += str(amount) + " of " + str(c) + ", "

    return text

articuloPrice = input("Cual es el precio del articulo? ")
billetePagar = input("Con que billete decides pagar? (5, 10, 20, 50, 200, 500) ")

print(cambioDinero(articuloPrice, billetePagar))
print("----------")
print(changeMoney(articuloPrice, billetePagar))
