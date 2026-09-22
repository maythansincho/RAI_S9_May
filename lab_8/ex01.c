#include<stdio.h>
//float dimension(float *length, float *height, float *width);
float base_area(float length, float width){
    return length * width;
}

float base_parameter(float length, float width){
    return 2*(length +  width);
}

float volume(float length, float width, float height){
    return length *  width * height;
}


int main(){
    float length, width, height;

    printf("Enter length, width, amd height in cm: ");
    scanf("%f %f %f\n", &length, &width, &height);

    if (length <= 0 || height <= 0 || width <= 0){
        printf("Error: All dimesaions must be greater than zero");


    }else {
        printf("Base Area : %.2f squared cm\n ", base_area(length, width));
        printf("Parameter : %.2f  cm\n ", base_parameter(length, width));
        printf("Volume : %.2f cubic cm\n ", volume(length, width, height));


        
        

    }

    

}


