using namespace std;
class Matrix
{
  protected:
           int k_ryadkiv;
           int k_stovpciv;
           double **a;
    public:
            Matrix ();
            Matrix (int n_ryadkiv,int m_stovpciv);
            Matrix (int n_ryadkiv,int m_stovpciv, int **b);
            Matrix (const Matrix &m);
            Matrix operator + (Matrix &b); // оператор додавання
            friend Matrix operator * (Matrix &a, Matrix &b); // оператор множення
            Matrix operator - (Matrix &b);
            Matrix operator = (Matrix &b); // оператор присвоєння
            Matrix inverse (); // обернена матриця
            Matrix determinant () // детермінант
            double GetCoef (int x, int y);
            void SetCoef (int x, int y, double v);
            void Show ();
            friend ostream&operator << (osream &os, Matrix &a)
            void Print ();
            
};
