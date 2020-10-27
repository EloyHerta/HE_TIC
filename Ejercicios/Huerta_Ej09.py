def salario(horasTrabajadas):

    salaryPerHour = 30
    salary = 0
    minHoursWorking = 30

    horasExtra = horasTrabajadas - 30

    if(horasTrabajadas > 30):
        salary = horasExtra*(salaryPerHour*1.5) + minHoursWorking*30
    elif(horasTrabajadas < 30):
        salary = horasTrabajadas * 30
    return str(salary) + " euros"


horasTrabajadas = input("Horas trabajadas: ")


print(salario(horasTrabajadas))