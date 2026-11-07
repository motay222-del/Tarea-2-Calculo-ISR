# Actividad 2: Cálculo del Impuesto Sobre la Renta (ISR)

## 1. Nombre completo del integrante y matrícula

**Nombre:** Johan Mota  
**Matrícula:** 2024-3567

## 2. Descripción breve del programa

Programa desarrollado en C++ que solicita el salario mensual sujeto a ISR de un empleado y calcula la retención mensual estimada del Impuesto Sobre la Renta, utilizando la escala progresiva de personas físicas y asalariados publicada por la Dirección General de Impuestos Internos (DGII) para el año 2026. Si el salario se encuentra dentro del tramo exento, muestra un descuento de RD$0.00.

## 3. Datos de entrada

- Salario mensual sujeto a ISR, expresado en pesos dominicanos (RD$).
- Para simplificar el ejercicio, el salario introducido se considera después de las deducciones legales correspondientes.

## 4. Datos que procesa

- Multiplica el salario mensual por 12 para obtener el ingreso anual sujeto a ISR.
- Compara el ingreso anual con los cuatro tramos de la escala 2026 de la DGII.
- Calcula el ISR anual aplicando la tasa progresiva que corresponda.
- Divide el ISR anual entre 12 para estimar la retención mensual.
- Valida que el dato introducido sea numérico y no sea negativo.

## 5. Datos de salida

- Salario mensual sujeto a ISR.
- Ingreso anual sujeto a ISR.
- ISR anual calculado.
- Descuento mensual estimado de ISR.
- Salario mensual luego de descontar el ISR.
- Mensaje de exento cuando el descuento mensual es RD$0.00.

## 7. Descripción de las estructuras utilizadas y su función

Se utilizó la estructura condicional `if / else if / else` para identificar en cuál tramo de la escala anual se encuentra el ingreso del empleado y aplicar la fórmula correspondiente.

La función `calcularISRAnual()` recibe el ingreso anual, realiza el cálculo según la escala y devuelve el ISR anual.

El procedimiento `mostrarResultado()` recibe los valores calculados y presenta en pantalla el salario, el impuesto y el descuento mensual.

La función `main()` solicita el salario mensual, valida el dato, calcula el ingreso anual, llama a la función de cálculo y envía los resultados al procedimiento de visualización.

## Fuente oficial consultada

Dirección General de Impuestos Internos (DGII). *Impuesto sobre la Renta – Escala de retención de asalariados 2026*.  
https://dgii.gov.do/cicloContribuyente/obligacionesTributarias/principalesImpuestos/Paginas/impuestoSobreRenta.aspx

DGII. *Resolución DDG-AR1-2026-00001*.  
https://dgii.gov.do/legislacion/resoluciones/Documents/DDG-%20AR1-2026-00001.pdf

**Nota:** este programa es una práctica académica simplificada. Para una retención real de nómina deben considerarse las deducciones legales, otros pagos gravados y las condiciones particulares del empleado.
