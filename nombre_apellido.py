''' Introduce un nombre y apellido, con ellos se ha de generar una contraseña qeu incluya las tre sprimeras letras del nombre y apellido '''
def pwGen():

    name = raw_input("Introduzca su nombre. ")
    apellido = raw_input("Introduzca su apellido. ")
    
    pw = name[-3:] + apellido[-3:]
    print "La contrasena es: ", pw
    
    input = ("")

pwGen()
