#include <stdio.h>
int main() {                                                                    
    float M1 = 100 ; // marks objtained in maths
    float M2 = 90 ;  // marks obtained in physics
    float M3 = 80 ; // marks obtained in chemistry 
    float M4 = 68 ; //  marks obtained in english 
    float M5 = 45 ; // marks obtained in cs

    float P = (M1 +M2+M3+M4+M5)/5; // Percentage
    printf("percentage is : %f ",P);
    return 0;
}