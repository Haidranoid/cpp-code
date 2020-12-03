//
// Created by Administaff on 11/20/20.
//

#ifndef _MOVE_H
#define _MOVE_H


class Move {
private:
    int *data;
public:
    Move(int d);

    Move(const Move &source);

    Move(Move &&source) noexcept;

    ~Move();

    int get_data() const;

    void set_data(int d);
};


#endif //_MOVE_H
