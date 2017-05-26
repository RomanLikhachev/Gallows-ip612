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
	
	if (MAX_WRONG == 8) {
	   wrong=1;
        }

	ASSERT_EQUAL(1,wrong);
}

CTEST(ProverkaNaVvodimostDannih,CinemaTrue){
	int q=1;
	const char *str;
	
        if (q==1) {  
           str="cinema";
        }
	
	ASSERT_STR("cinema", str);
}


CTEST(ProverkaNaVvodimostDannih,CinemaFall){
	int q=2;
	const char *str;
	
	str="fall";
        if (q==1) {  
           str="cinema";
        }
	
	ASSERT_STR("fall", str);
}


CTEST(ProverkaNaVvodimostDannih,SportTrue){
	int q=2;
	const char *str;
	
        if (q==2) {  
            str="sport";
        }
	
	ASSERT_STR("sport", str);
}

CTEST(ProverkaNaVvodimostDannih,SportFall){
	int q=3;
	const char *str;
	str="fall";
	
        if (q==1) {  
           str="sport";
        } 
	
	ASSERT_STR("fall", str);
}

CTEST(ProverkaNaVvodimostDannih,MusicTrue){
	int q=3;
	const char *str;
	
        if (q==3) {  
           str="music";
        }
	
	ASSERT_STR("music", str);
}

CTEST(ProverkaNaVvodimostDannih,MusicFall){
	int q=4;
	const char *str;
	str="fall";
	
 	if (q==3) {  
           str="music";
        }
	
	ASSERT_STR("fall", str);
}



