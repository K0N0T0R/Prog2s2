#ifndef MATRIX_H_
#define MATRIX_H_
#define N 10
class matrix{
    private:
    unsigned int size;
    double data[N][N];
    public:
    matrix();
    void setzize(unsigned int size);
    int getsize()const;
    void eingabe()const;
    void ausgabe()const;
    matrix add(const matrix inmatrix)const;
    matrix sub(const matrix inmtarix)const;
    matrix mult(const matrix inmatrix)const;

};
#endif