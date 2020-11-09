def fechaGet(fecha):

    month = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"]
    mes = fecha[3] + fecha[4]
    mes = int(mes)
    if(mes > 12):
        print "El mes introducido es mayor a 12. No existe."
    else:
        print mes
        return month[mes-1]

fecha = raw_input("Que fecha es hoy? Formato (01/02/20) ")

print(fechaGet(fecha))