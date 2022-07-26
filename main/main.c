int main(){
    //TODO another thread to alrm setSleep function
    while(true){
        spareBeacon();
        detectMachine();
        detectNetwork();
        setSleep(3600);
    }


}

void alrm(){
    


}