def verificar_numero():
    print("Escriba un número para verificar si es válido: ")
    
    try:
        # Leer entrada del usuario
        entrada = input()
        numero = float(entrada)
        
        print("Es número")
        
        # Verificar tipo (entero o flotante)
        if numero.is_integer():
            tipo = "entero"
        else:
            tipo = "flotante"
        
        # Verificar signo
        if numero > 0:
            signo = "positivo"
        elif numero < 0:
            signo = "negativo"
        else:
            signo = "cero"
        
        # Verificar rango
        if 0 <= numero <= 100:
            rango = "dentro del rango 0-100"
        else:
            rango = "fuera del rango 0-100"
        
        # Mostrar resultados
        print(f"Es un {tipo} {signo}")
        
        if numero == 0:
            print("Su numero es 0")
        
        print(f"Está {rango}")
        
    except ValueError:
        print("No es un número")

# Ejecutar la función
if __name__ == "__main__":
    verificar_numero()