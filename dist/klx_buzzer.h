#ifndef klx_buzzer
#define klx_buzzer

class Buzzer {
  private:
    int _pin;
  public:
    Buzzer(int pin);
    void Accept();
    void Error();
};

#endif
