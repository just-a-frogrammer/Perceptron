#include <iostream>

/*
===============-> PERCEPTRON USAGE <-===============

-binary clasyfication -> would customer buy a smartphone based on following parameters
    >Age / 100 to get input below 1 in most cases
    >Gender 1/0 there are only two 1 - man; 0 - female
    >Obtaining phone? 1/0
    >Earnings / 1000 (in US $)

===============-> PERCEPTRON USAGE <-===============
*/

//weights list
float weights[4] = {0.2, 0.8, 0.3, 0.5};

//bias
int bias = 1;

//training inputs list
float t_inputs[4][4] = 
{
    {0.85, 1, 1, 1000},//old man
    {0.16, 0, 1, 0},//highschool teen
    {0.38, 1, 0, 1800},//normal man, nothing special
    {0.09, 0, 1, 0}//elementary school girl
};

//training outputs list
int t_outputs[4] = {0, 1, 1, 0};

int RELu(float output){
    if(output <= 0){
        return 0;
    }
    else{
        return output;
    }
}

int main(){

    std::cout << "This will be single perceptron :)\n";


}