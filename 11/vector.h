//
// Created by xianghui on 2017/7/18.
//

#ifndef C_PROJECT_VECTOR_H
#define C_PROJECT_VECTOR_H


#include <iosfwd>

namespace VECTOR {
    class Vector {
    public:
        enum class Mode {
            RECT, POL
        };
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;

        void set_mag();

        void set_ang();

        void set_x();

        void set_y();

    public:
        Vector();

        Vector(double n1, double n2, Mode form = Mode::RECT);

        void reset(double n1, double n2, Mode form = Mode::RECT);

        ~Vector();

        double getX() const {
            return x;
        }

        double getY() const {
            return y;
        }

        double getMag() const {
            return mag;
        }

        double getAng() const {
            return ang;
        }

        void polar_mode();

        void rect_mode();

        Vector operator+(const Vector &b) const;

        Vector operator-(const Vector &b) const;

        Vector operator-() const;

        Vector operator*(double n) const;

        friend Vector operator*(double n, const Vector &a);

        friend std::ostream &operator<<(std::ostream &os, const Vector &v);

    };
}

#endif //C_PROJECT_VECTOR_H
