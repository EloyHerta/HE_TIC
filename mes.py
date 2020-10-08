def mes():
    
        abreviaMes = ("EneFebMarAbrMayJunJulAgoSepOctNovDic")
        numeroMes = input("Introduce numero del mes. ")
        pos = (numeroMes-1)*3       
        print "El mes seleccionado es: ", abreviaMes[pos:pos+3]
        input("")
mes()
