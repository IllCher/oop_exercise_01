#ifndef LAB1_FAZZYNUMBER_HPP
#define LAB1_FAZZYNUMBER_HPP

class fn {
public:
    fn();
    fn(double a, double b);
    void print_value();
    static fn sum(const fn &a, const fn &b);
    static fn difference(const fn &a, const fn &b);
    static fn mult(const fn &a, const fn &b);
    static fn division(const fn &a, const fn &b);
    static fn inv(const fn &a);
    static int comparison(const fn &a, const fn &b);
private:
    double array[2];
};
#endif //LAB1_FAZZYNUMBER_HPP
