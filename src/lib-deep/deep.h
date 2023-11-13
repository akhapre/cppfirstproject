#ifndef _DEEP_H
#define _DEEP_H
class Deep {
    private:
        int *data;

    public:
        Deep(int d);
        Deep(const Deep &source);
        ~Deep();
        int get_data();
};
#endif