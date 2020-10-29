import sys #Libreria para mostrar el error que recibimos en caso de que lo haya al ejecutar el codigo.

def calculadora(number01, number02, operacion, resultado=None):

    try: # Try para que en caso de dar error, por ejemplo: Se intente dividir 4 / 0, muestre el except.
        if(operacion == "S"):
             resultado = number01 + number02
             return "El resultado es: " + str(resultado)
        elif(operacion == "R"):
            resultado = number01 - number02
            return "El resultado es: " + str(resultado)
        elif (operacion == "M"):
            resultado = number01 * number02
            return "El resultado es: " + str(resultado)
        elif (operacion == "D"):
            resultado = float(number01) / number02 #He anadido float delante para que, en caso de haber decimales estos se muestren en el resultado.
            return "El resultado es: " + str(resultado)
    except:
        return "Error debido a: " + "[" +  str(sys.exc_info()[1]) + "]" #sys.exc_info()[1] Nos mostrara el error obtenido. Se puede comprobar ejecutando el codigo y dividiendo entre 0.
    pass

number01 = input("Valor de N1: ")
number02 = input("Valor de N2: ")
operacion = raw_input("Seleccione la operacion (Suma (S), Resta (R), Multiplicacion (M), Division (D)) ")

print(calculadora(number01, number02, operacion, resultado=None))