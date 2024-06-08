Algoritmo CalcularEdad
    Definir dia_nacimiento, mes_nacimiento, anio_nacimiento, dia_actual, mes_actual, anio_actual, edad_anios, edad_meses, edad_dias, dias_pasados, meses_pasados, anios_bisiestos Como Entero
    
    Escribir "Ingrese su fecha de nacimiento (dd mm aaaa):"
    Leer dia_nacimiento, mes_nacimiento, anio_nacimiento
    
    Escribir "Ingrese la fecha actual (dd mm aaaa):"
    Leer dia_actual, mes_actual, anio_actual
    
    Si (mes_actual < mes_nacimiento) O ((mes_actual = mes_nacimiento) Y (dia_actual < dia_nacimiento)) Entonces
        anio_actual <- anio_actual - 1
        mes_actual <- mes_actual + 12
    FinSi
    
    edad_anios <- anio_actual - anio_nacimiento
    edad_meses <- mes_actual - mes_nacimiento
    edad_dias <- dia_actual - dia_nacimiento
    
    Si (edad_dias < 0) Entonces
        edad_meses <- edad_meses - 1
        edad_dias <- edad_dias + 30  
    FinSi
    
    Si (edad_meses < 0) Entonces
        edad_anios <- edad_anios - 1
        edad_meses <- edad_meses + 12
    FinSi
    
    // Calcular días, meses y años bisiestos hasta la fecha actual
    dias_pasados <- (edad_anios * 365) + (edad_meses * 30) + edad_dias
    meses_pasados <- edad_anios * 12 + edad_meses
	

	Escribir "Tiene "  , edad_anios, " años."
    Escribir "Tiene "  , edad_meses, " meses."
    Escribir "Tiene "  , edad_dias, " días."
    Escribir "Ha vivido "  , dias_pasados, " días desde su nacimiento hasta la fecha actual."
    Escribir "Ha vivido "  , meses_pasados, " meses desde su nacimiento hasta la fecha actual."
    Escribir "El año actual  no es"  , anios_bisiestos, "  bisiesto."
    
FinAlgoritmo