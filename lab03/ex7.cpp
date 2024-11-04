#include <cmath>
#include <cstdio>


int main() {
    int x0, y0; 
    int x1, y1;
    int x2, y2; 
    int dx, dy; 
    
    int n;
    double res;
    scanf("%d", &n);
    scanf("%d %d\n", &x0, &y0);

    x1 = x0;
    y1 = y0;
    for (int i = 0; i < n-1; i++) {
        scanf("%d %d", &x2, &y2);
        dx = x2 - x1;
        dy = y2 - y1;
        res += sqrt(dx*dx + dy*dy);
        x1 = x2;
        y1 = y2;
    }
    dx = x2 - x0;
    dy = y2 - y0;
    res += sqrt(dx*dx + dy*dy);
    printf("%lf\n", res);
    return 0;
}