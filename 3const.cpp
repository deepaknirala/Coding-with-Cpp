#include <iostream>

int main(){
    const double PI=3.14159;//adding const to variable adds data security
    //such that it cannot be changed in the program
    const int LIGHT_SPEED=299792458;//speed of light in m/s
    const int WIDTH=1920;//width of screen in pixels
    const int HEIGHT=1080;//height of screen in pixels

  
    double radius=10;
    double circumference=2*PI*radius;
    int total_pixels=WIDTH*HEIGHT;

    std::cout<<circumference<<" cm"<<'\n';
    std::cout<<total_pixels<<" pixels";

    return 0;
}