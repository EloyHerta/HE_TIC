def fecha(year, month, day):

	months = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"]
	return "Hoy es " + str(day) + " de " + months[month] + " de " + str(year)

year = input("Year: ")
month = input("Dia del mes (en numero 1-12): ")
day = input("Dia de la semana (en numero 1-7): ")

print(fecha(year, month, day))