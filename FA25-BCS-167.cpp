#include <iostream>

using namespace std;

 //const int Number_of_Rows =3  ;
 //const int Number_of_Columns  = 4 ;


void inputMatrix( int Arr[][c])
{
   int row , col ;
   for( row =0 ; row < Number_of_Rows ; row++)
   {
       for( col = 0 ; col < Number_of_Columns; col ++)
        cin >> Arr[row][col];

}
}

void PrintArr(int Arr[][Number_of_Columns])
{
    int row , col ;
    for ( row =0 ; row < Number_of_Rows ; row ++)
    {
        for ( col = 0 ; col < Number_of_Columns; col ++)
            cout << Arr[row][col]<<" ";
    }
}

void RowMax( int Arr[][Number_of_Columns])
{
    int row , col ;
    int sum = 0 ;
    for ( row = 0 ; row < Number_of_Rows ; row ++)
    {
        for ( col = 0 ; col < Number_of_Columns ; col ++)
            sum = sum + Arr[row ][col ];

        }
        cout <<" The Value of sum is "<<sum <<endl;

}

void ColMax( int Arr[][Number_of_Columns])
{
    int row , col ;
    int sum = 0 ;

    for ( col = 0 ; col < Number_of_Columns ; col ++)
    {

        for ( row  = 0 ; row < Number_of_Rows ; row ++)
            sum = sum + Arr[row][col ];

        }
        cout <<" The Value of sum is "<<sum <<endl;

}


// LAB TASK 2 : FUNCTIONS :

void PrintArray( int Arr[][Number_of_Columns])
{
      int row , col ;

   for( row =0 ; row < Number_of_Rows ; row++)
   {
       for( col = 0 ; col < Number_of_Columns; col ++)
        cin >> Arr[row][col];
    }
}

void OutputArr(int Arr[][Number_of_Columns])
{
    int row , col ;
    for ( row = 0 ; row < Number_of_Rows ; row ++)
    {
        for ( col = 0 ; col < Number_of_Columns; col ++)
            cout << Arr[row][col]<<" ";
        cout << endl;
    }


}

void Evencount( int Arr[][Number_of_Columns])
{
     int row , col ;
     int sum = 0 ;

     int Evenlist[4];

      for( col = 0 ; col < Number_of_Columns ; col++){

       int Evencount = 0 ;

    for ( row =0 ; row < Number_of_Rows ; row ++){
            if( Arr[row][col] % 2 == 0 )
                Evencount++;}

        Evenlist[col] = Evencount;
      }

 int  Maxindex = 0 ;

 for ( col =1  ; col < Number_of_Columns ; col ++)
    {
        if ( Evenlist[Maxindex] < Evenlist[ col] )
        Maxindex = col ;
        }


        cout << "The maximum Value in The column is"<< Evenlist[Maxindex];

}


// LAB TASK 3 :

void PrintArray1(int Array[][Number_of_Columns])
{
    int row , col ;
    for ( row = 0 ; row < Number_of_Rows ; row ++)
    {
        for ( col = 0 ; col < Number_of_Columns  ; col++ )
            cin >> Array[row][col];

    }
}

 void OutputMatrix1( int Array [][ Number_of_Columns])
 {
     int row , col ;
     for ( row = 0 ; row < Number_of_Rows ; row ++)
     {
         for ( col = 0 ; col < Number_of_Columns ; col ++)
            cout << Array[row][col]<<" " ;

            cout <<endl;
     }
 }
// NOW TRANSPOSE :

 void TransposeMatrix( int Array[][Number_of_Columns])
{
    int row , col ;
    for ( col = 0 ; col < Number_of_Columns ; col ++)
    {
        for ( row = 0 ; row < Number_of_Rows ; row ++)
            cout << Array[row][col]<<" ";
        cout << endl;

    }

}

int main(){
int choice  ;
char  Again ;


do{
cout <<" Enter Your choice To Check Task "<<endl;
cout <<" 1. To check The first Task "<<endl;
cout <<" 2. To check The Second Task "<<endl;
cout <<" 3. To check The Third  Task "<<endl;
cin >> choice ;

switch( choice){

case 1:
    {

    int Arr[Number_of_Rows][Number_of_Columns];
    cout <<" Enter the Elements in the Arrays "<<endl;

    inputMatrix(Arr);
    cout << endl;

    cout <<" Get the output of Function "<<endl;
    PrintArr(Arr);
    cout << endl;

    cout <<" Find the MAX in each row "<<endl;
    RowMax(Arr);

    cout <<" Find the max in the col "<<endl;
    ColMax( Arr);

     break ;

    }

// LAB TASK 2 :
case 2 :{

 int matrix[Number_of_Rows][Number_of_Columns];
cout <<" Enter the Elements in the Array "<<endl;

PrintArray( matrix);

cout <<" Out put the Array "<< endl;
OutputArr( matrix );


cout <<" Check the Number of Even count "<<endl;
Evencount( matrix);

break;

}

// LAB TASK NO 3 :

case 3 :
    {

 int Matrix[ Number_of_Rows][Number_of_Columns];
 cout <<" Enter the Elements of Arrays "<< endl;

 PrintArray1( Matrix);

 cout <<" Enter the output of the Array "<<endl;
OutputMatrix1( Matrix);

cout <<" The Transpose of the Matrix is = "<<endl;
TransposeMatrix(Matrix);

 break ;

    }
default:
    cout <<" Invalid statement "<<endl;

}
cout << " Enter the  Y or y Case U wanna Check "<<endl;
cin >> Again;

}while ( Again =='Y' || Again =='y' );


    return 0;
}
