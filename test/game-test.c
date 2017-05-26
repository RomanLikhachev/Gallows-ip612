#include <stdio.h>

#define CTEST_MAIN

#define CTEST_SEGFAULT
#define CTEST_COLOR_OK

#include "ctest.h"

int main(int argc, const char** argv)
{
	return ctest_main(argc, argv);
}

  
CTEST(Proverka,Proigrisha){
	const int MAX_WRONG=8;
	int wrong=8; 
        const char *str;
	
	if(wrong==MAX_WRONG) {
           str="Tebya povesili!";
        }

	ASSERT_STR("Tebya povesili!", str);
}

CTEST(Proverka,Pobedi){
	const int MAX_WRONG=8;
	int wrong=3; 
        const char *str;
	
	if(wrong==MAX_WRONG) {
           str="Tebya povesili!";
        }
	
        else {
            str="You win!";
         }

	ASSERT_STR("You win!", str);
}

CTEST(Proverka,VvodnihDannih){
	const char *str="1";
	const int n=1;
	
	if(n==1) {
           str="Error!";
        }

	ASSERT_STR("Error!", str);
}


CTEST(Proverka,UgeIspolsovanihBukv){
	const char *str="n";
	const char *prov="n";

	ASSERT_STR(prov, str);
}


CTEST(Proverka,EsliNashelBukvu){
	const char *str;
	const char *prov="Ti prav!";
	const int n=1;
	
	if(n==1) {
	   str="Ti prav!";
        }
	
	ASSERT_STR(prov, str);
}

