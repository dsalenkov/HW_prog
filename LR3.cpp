#include <iostream>

int main(){
    int n, k = 0;
    std::cin >> n; // number of points
    double X[n], Y[n], R; // array of cordinates and radius
    for(int i = 0; i < n; i++)
        std::cin >> X[i] >> Y[i];
    double x0, y0; // centre of a circle
    std::cin >> x0 >> y0 >> R;
    for(int i = 0; i < n; i++){
        if((X[i] - x0)*(X[i] - x0)+ (Y[i] - y0)*(Y[i] - y0) >= R^2) // Pifagor`s theorem: if the distance between centre and point is more than radius, then k++
            k++;
    }
    std::cout << k;
    return 0;
}
