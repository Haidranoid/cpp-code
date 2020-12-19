//
// Created by Administaff on 11/20/20.
//

#ifndef _DEEP_H
#define _DEEP_H


class Deep {
private:
    int *data;
public:
    Deep(int d);

    Deep(const Deep &source);

    ~Deep();

    int get_data() const;

    void set_data(int d);
};


#endif //_DEEP_H
