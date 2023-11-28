#include <stdio.h>
#include <math.h>

int N=12;

double arr[13];

double radians(double deg);
double traprule(int N);


int main(){

    int i=0;
    double deg,rad;

    for(i=0;i<=N;i++){

        deg= i*5.0;
        rad= radians(deg);
        arr[i]=tan(rad);

    }

    double approx= traprule(N);
    double exact= log(2.0);

    //Comparing exact and approximate value
    printf("Your approximation of the integral from x=0 to x=60 degrees of the function tan(x) with respect to x is: \n%.5f\nThe exact solution is : \n%.5f\n", approx,exact);

}

//Defining radians funtion to convert degrees to radians
double radians(double angle){

    return( (M_PI * angle)/180.0 );
}

double traprule(int N){

   
    double width,area= arr[0]+arr[N];
    int i=0;

   
    for(i=1;i<N;i++){
        area+= 2.0*arr[i];
    }
    width = radians(60.0-0)/(2.0*N);
    area= width*area;
    return area;
}
