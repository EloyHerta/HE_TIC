def identificar(nombre, apellido1, apellido2):

    datosPersona = [] # Array vacio, para posteriormente introducir los datos.
    datosPersona.append(nombre)
    datosPersona.append(apellido1)
    datosPersona.append(apellido2)

    print "Su nombre es " + datosPersona[0] + ", su apellido es " + datosPersona[1] + " y su segundo apellido " + apellido2
    # Este seria el primer metodo, se me ha ocurrido mas que nada por ver como introducir datos al array.
    return "Su nombre es " + nombre + ", su apellido es " + apellido1 + " y su segundo apellido " + apellido2

nombre = raw_input("Introduzca su nombre: ")
apellido1 = raw_input("Introduzca su apellido1: ")
apellido2 = raw_input("Introduzca su apellido2: ")

print(identificar(nombre, apellido1, apellido2))