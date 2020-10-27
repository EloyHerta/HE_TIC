def diaSemana(number):

    week = ["Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"]

    if(number > 0 and number < 8):
        return "El dia es: " + week[number - 1]

    return "No es un dia de la semana. Asegurate de no escribir letras." # En caso que no se ejecute el if, se ejecuta esta sentencia.

number = input("Dia de la semana (en numero): ")
print(diaSemana(number))
