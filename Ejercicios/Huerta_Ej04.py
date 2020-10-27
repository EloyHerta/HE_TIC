def diaMes(number):

        month = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"]

        if(numberMonth < 13 and numberMonth > 0):
                return "El mes seleccionado es: " + month[numberMonth - 1]
        return "El numero introducido no es valido, compruebalo."


numberMonth = input("Dia del mes (en numero 1-12): ")
print(diaMes(numberMonth))
