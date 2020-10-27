def cambioDivisas(dolares):

	euros = dolares * 0.86 # Convierto los euros a dolares.
	return euros # Guardo el valor de euros

dolares = input("Ingrese los dolares: ")
print(cambioDivisas(dolares))