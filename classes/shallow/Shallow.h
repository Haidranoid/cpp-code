//
// Created by Administaff on 11/20/20.
//

#ifndef _SHALLOW_H
#define _SHALLOW_H


class Shallow {
private:
    int *data;
public:
    Shallow(int d);

    Shallow(const Shallow &source);

    ~Shallow();

    int get_data() const;

    void set_data(int d);
};


#endif //_SHALLOW_H
