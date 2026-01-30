print("CALCULADORA DE IMC")
print("=" * 50)

nombre = input("Ingrese su nombre: ").strip()
edad = int(input("Ingrese su edad (1-120 años): "))
peso = float(input("Ingrese su peso en kg (20-300): "))
altura_cm = float(input("Ingrese su altura en centímetros (50-250): "))

# Validaciones
if edad < 1 or edad > 120:
    print("Advertencia: Edad fuera del rango recomendado (1-120).")

if peso < 20 or peso > 300:
    print("Advertencia: Peso fuera del rango recomendado (20-300 kg).")

if altura_cm < 50 or altura_cm > 250:
    print("Advertencia: Altura fuera del rango recomendado (50-250 cm).")

# Convertir altura a metros
altura_m = altura_cm / 100.0

# Calcular IMC
imc = peso / (altura_m ** 2)

if imc < 18.5:
    diagnostico = "Bajo de peso"
elif 18.5 <= imc < 24.9:
    diagnostico = "Peso normal"
elif 25 <= imc < 29.9:
    diagnostico = "Sobrepeso"
elif 30 <= imc < 34.9:
    diagnostico = "Obesidad tipo 1"
elif 35 <= imc < 39.9:
    diagnostico = "Obesidad tipo 2"
else:
    diagnostico = "Obesidad tipo 3 (obesidad mórbida)"

# Resultado - Formato solicitado
print("\n" + "=" * 40)
print("     INFORME DE DIAGNÓSTICO IMC")
print("=" * 40)
print(f"Paciente: {nombre}")
print(f"Edad: {edad} años")
print(f"Peso: {peso:.2f} kg")
print(f"Altura: {altura_m:.2f} m (convertido de {altura_cm:.1f} cm)")
print(f"\nRESULTADOS:")
print(f"IMC calculado: {imc:.2f}")
print(f"Diagnóstico: {diagnostico}")
print("=" * 40)