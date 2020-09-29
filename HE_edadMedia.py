def edadMedia():	
    ageSum = 0
    studentNumber = input("Cuantos alumnos quieres registrar: ")
    print "Introduce las edades"
    for cont in range(1, studentNumber + 1):
    	
    	print "Edad ",cont,":"
    	age = input()
    	ageSum += age
    print "La suma total de las edades es", ageSum

edadMedia()
