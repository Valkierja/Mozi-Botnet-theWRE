int main(){
    //TODO another thread to alarm setSleep function
    while(true){
        spareBeacon();
        detectMachine();
        detectNetwork();
        setSleep(3600);
    }

}

void alarm(){



}