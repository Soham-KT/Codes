#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2;
    float x_inc, y_inc, del_x, del_y, major_axis, x_temp, y_temp;

    printf("Enter x1, y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2, y2: ");
    scanf("%d %d", &x2, &y2);

    del_x = x2 - x1;
    del_y = y2 - y1;
    major_axis = abs(del_x) >= abs(del_y) ? del_x : del_y;

    x_inc = x1;
    y_inc = y1;
    x_temp = x1;
    y_temp = y1;

    for(int i=0; i < major_axis; i++){
        printf("(%d, %f, %f, %f, %f)\n", i, x_temp, y_temp, x_inc, y_inc);

        x_temp += del_x / major_axis;
        if((x_temp - (int)x_temp) >= 0.5) x_inc += ceil(del_x / major_axis); 
        else x_inc += floor(del_x / major_axis); 

        y_temp += del_y / major_axis;
        if((y_temp - (int)y_temp) >= 0.5) y_inc += ceil(del_y / major_axis); 
        else y_inc += floor(del_y / major_axis); 
    }

    printf("(%d, %d, %d, %d, %d)", abs(del_x) >= abs(del_y) ? del_x : del_y, x2, y2, x2, y2);

    return 0;
}