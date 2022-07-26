#ifndef _WRE_HEART_BEAT_BEACON
#define  _WRE_HEART_BEAT_BEACON
#endif
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
bool pingCheck(string* url);

string* outboundCheck(){
    if (pingCheck("www.baidu.com") or pingCheck("www.google.com")){
            //TODO set beacon to true
    }
}
