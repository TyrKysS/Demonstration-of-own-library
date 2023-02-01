#ifndef LedLibrary_H
#define LedLibrary_H

class LedLibrary {
    public:
        LedLibrary(int pin, int numPixels);
        LedLibrary(int pin);
        void red();
        void green();
        void blue();
        void fade();
        void off();
        void ledOFF();
        void ledON();
    private:
        int _pin;
        int _numPixels;
};
#endif