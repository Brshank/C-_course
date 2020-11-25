#include<iostream>
using namespace std;
class Matrix2D
{

    int row,col;
    double **mat;
    public:
    Matrix2D()
    {
        row=col=2;
        mat=new double*[row];//dynamic memory allocator
        for (int c=0;c<col;c++)
        {
            mat[c]=new double[col];
        }
    }
    Matrix2D(int r, int c)
    {
        row=r;
        col=c;
        mat=new double*[row];
        for (int c=0;c<col;c++)
        {
            mat[c]=new double[col];
        }
    }
    
    ~Matrix2D()   //destructor
    {
        cout<<"destructor called"<<endl;
        if (mat!=NULL)
        {
            delete mat;
        }
    }
    void LTM()
    {

    }

    void UTM()
    {  for (int r=0;r<row-1;r++)
        {
            for(int c=0;c<col;c++)
            {
                double factor=mat[r][c]

    }
    void setElements()
    {
        for (int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                cout<<"Enter value of an array mat[" <<r<<"]["<<c<<"]";
                cin>>mat[r][c];
                //mat[r][c]=rand();  
            }
        }
    }
    void determinant()
    {

    }
    void display()
    {
        for (int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                cout<<mat[r][c]<<"\t";

            }
            cout<<endl;
        }
    }
	
};
int main()
{
    Matrix2D obj;
    obj.setElements();
    obj.display();
    obj.LTM();
    obj.display();
    obj.determinant();
	Matrix2D obj1(3,4);
    obj1.setElements();
    obj1.display();
    obj1.UTM();
    obj1.display();
    return 0;
}