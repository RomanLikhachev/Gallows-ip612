#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ctest.h"

CTEST(Speed, testspeed) {
    usleep(2000);
}

CTEST(Wrong,countwrongword){
	const int MAX_WRONG=8;
	int wrong=0; 
	
	if (MAX_WRONG == 8){
			wrong=1;
     }

	ASSERT_EQUAL(1,wrong);
}
/*
CTEST(Count,countcloseword){

	const  W = ;
	int i;

	for (i=0; i<sizeof(W); i++)
    ASSERT_EQUAL(7,i);
}
*/





