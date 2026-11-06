#include <iostream>
#include <iomanip>
using namespace std;

double calcularISRAnual(double ingresoAnual) {
    double isr = 0.0;
    if (ingresoAnual <= 416220.00) {
        isr = 0.0;
    } else if (ingresoAnual <= 624329.00) {
        isr = (ingresoAnual - 416220.00) * 0.15;
    } else if (ingresoAnual <= 867123.00) {
        isr = 31216.00 + (ingresoAnual - 624329.00) * 0.20;
    } else {
        isr = 79776.00 + (ingresoAnual - 867123.00) * 0.25;
    }
    return isr;
}

void mostrarResultado(double salarioMensual, double ingresoAnual,
                      double isrAnual, double isrMensual) {
    cout << fixed << setprecision(2);
    cout << "\n===== RESULTADO DEL CALCULO DEL ISR - 2026 =====" << endl;
    cout << "Salario mensual sujeto a ISR: RD$ " << salarioMensual << endl;
    cout << "Ingreso anual sujeto a ISR:   RD$ " << ingresoAnual << endl;
    cout << "ISR anual calculado:          RD$ " << isrAnual << endl;
    if (isrMensual == 0.0)
        cout << "Descuento mensual de ISR:     RD$ 0.00 (EXENTO)" << endl;
    else
        cout << "Descuento mensual de ISR:     RD$ " << isrMensual << endl;
    cout << "Salario mensual luego del ISR: RD$ "
         << salarioMensual - isrMensual << endl;
}

int main() {
    double salarioMensual;
    cout << "===== CALCULADORA DE ISR - REPUBLICA DOMINICANA =====" << endl;
    cout << "Escala salarial DGII correspondiente al ano 2026." << endl;
    cout << "Ingrese el salario mensual sujeto a ISR (despues de deducciones legales): RD$ ";
    cin >> salarioMensual;
    if (cin.fail() || salarioMensual < 0) {
        cout << "Error: introduzca un salario numerico valido, igual o mayor que cero." << endl;
        return 1;
    }
    double ingresoAnual = salarioMensual * 12.0;
    double isrAnual = calcularISRAnual(ingresoAnual);
    double isrMensual = isrAnual / 12.0;
    mostrarResultado(salarioMensual, ingresoAnual, isrAnual, isrMensual);
    return 0;
}
