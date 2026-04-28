
#ifndef BLINKER_H
      #define BLINKER_H
    class Blinker {
    private:
        unsigned long n_volgendeBlinkON;
        unsigned long n_nu;
        unsigned long n_blinkInterval; 
        unsigned int  n_LEDPIN ;
    public:
    //Constructor
    Blinker(unsigned int ledpin, unsigned long blinkInterval);
    //destructor
    ~Blinker();

    int begin();
    int handle();
    };
#endif