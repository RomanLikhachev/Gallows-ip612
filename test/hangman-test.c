#include <unistd.h>
#include <stdlib.h>
#include "ctest.h"


CTEST(Speedtest,Validtest) {
    usleep(2000);
}

CTEST(wordtest,imputtest) {
    
    char buk='A';
    char guess ='A';                       

    ASSERT_STR(guess,buk);
}

CTEST(wordtest,failtest){
     const char *str;
     int guess = 13;
	
     if(guess >= 1 && guess <=999){
	   str = "Error";
     }
     ASSERT_STR("Error",str);
}
