#include <iostream>

int main(){
    int n, k = 0;
    std::cin >> n; // ввод колчиества точек
    double X[n], Y[n], R; // массив для координат х и у, радиус
    for(int i = 0; i < n; i++)
        std::cin >> X[i] >> Y[i]; // ввод массива
    double x0, y0; // центра круга
    std::cin >> x0 >> y0 >> R; // ввод центра круга и радиуса
    for(int i = 0; i < n; i++){
        if((X[i] - x0)*(X[i] - x0)+ (Y[i] - y0)*(Y[i] - y0) >= R^2) // если расстояние больше радиуса, то k++
            k++;
    }
    std::cout << k;
}
