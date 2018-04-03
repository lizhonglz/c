#include <QCoreApplication>
#include<iostream>
using namespace std;
void useOfSwich(void);                       //the function to practice switch
void useOfSwich1(void);                      //the function to practice switch
void practice413(int size);                  //练习4.13，计算并打印1到size的阶乘
void countSales(void);                       //练习4.19，计算商品总销售额switch
void countSales2(void);                      //练习4.19，计算商品总销售额,数组
int main()
{
    //useOfSwich();
    //useOfSwich1();
    //practice413(5);
    //countSales();
    countSales2();
    return 0;
}

//the function to practice switch
void useOfSwich(void)
{
    int grade;
    int aCount=0;
    int bCount=0;
    int cCount=0;
    int dCount=0;
    int eCount=0;
    cout<<"Enter the leter grades: a/A,b/B,c/C,d/D,e/E"<<endl;
    cout<<"Enter the EOF character to end input"<<endl;
    while((grade=getchar())!=EOF)
    {
        switch(grade)
        {
        case'a':
        case'A':
            aCount++;
            break;
        case'b':
        case'B':
            bCount++;
            break;
        case'c':
        case'C':
            cCount++;
            break;
        case'd':
        case'D':
            dCount++;
            break;
        case'e':
        case'E':
            eCount++;
            break;
        case'\n':
        case'\t':
        case' ':
            //empty;
            break;
        default:
            cout<<"Incorrect letter grade entered"<<endl;

        }

    }
    cout<<"the number of a/A:"<<aCount<<endl;
    cout<<"the number of b/B:"<<bCount<<endl;
    cout<<"the number of c/C:"<<cCount<<endl;
    cout<<"the number of d/D:"<<dCount<<endl;
    cout<<"the number of e/E:"<<eCount<<endl;
}
//switch but no break
void useOfSwich1(void)
{
    int grade;
    int aCount=0;
    int bCount=0;
    int cCount=0;
    int dCount=0;
    int eCount=0;
    cout<<"Enter the leter grades: a/A,b/B,c/C,d/D,e/E"<<endl;
    cout<<"Enter the EOF character to end input"<<endl;
    while((grade=getchar())!=EOF)
    {
        switch(grade)
        {
        case'a':
        case'A':
            aCount++;

        case'b':
        case'B':
            bCount++;

        case'c':
        case'C':
            cCount++;

        case'd':
        case'D':
            dCount++;

        case'e':
        case'E':
            eCount++;
            break;
        case'\n':
        case'\t':
        case' ':
            //empty;
           cout<<"empty"<<endl;
        default:
            cout<<"Incorrect letter grade entered"<<endl;

        }

    }
    cout<<"the number of a/A:"<<aCount<<endl;
    cout<<"the number of b/B:"<<bCount<<endl;
    cout<<"the number of c/C:"<<cCount<<endl;
    cout<<"the number of d/D:"<<dCount<<endl;
    cout<<"the number of e/E:"<<eCount<<endl;
}
//练习4.13，计算并打印1到size的阶乘
void practice413(int size)
{
    int i;
    long number=1;
    for(i=1;i<=size;i++)
    {
        number=number*i;
        cout<<number<<",";
    }
    cout<<endl;

}
//练习4.19，计算商品总销售额
void countSales(void)
{
    const double price[]={2.98,4.50,9.98,4.49,6.87};
    int productNumber=6;
    double productAmount=0;
    double toltalSales=0;
    cout<<"there are five types of product with number from 1 to 5"<<endl;
    cout<<"enter 1000 as the productNumber to quit"<<endl;
    while(productNumber!=1000)
    {
        cout<<"enter the product number:";
        cin>>productNumber;
        cout<<"enter the product amount:";
        cin>>productAmount;
        switch(productNumber)
        {
        case 1:
            toltalSales=toltalSales+productAmount*price[0];
            break;
        case 2:
            toltalSales=toltalSales+productAmount*price[1];
            break;
        case 3:
            toltalSales=toltalSales+productAmount*price[2];
            break;
        case 4:
            toltalSales=toltalSales+productAmount*price[3];
            break;
        case 5:
            toltalSales=toltalSales+productAmount*price[4];
            break;
        default:
            cout<<"productNumber out range"<<endl;

        }

    }
    cout<<"the toltal sales is:"<<toltalSales<<endl;
}

void countSales2(void)
{
    const double price[]={2.98,4.50,9.98,4.49,6.87};
    int productNumber=6;
    double productAmount=0;
    double toltalSales=0;
    cout<<"there are five types of product with number from 1 to 5"<<endl;
    cout<<"enter 1000 as the productNumber to quit"<<endl;
    while(productNumber!=1000)
    {
        cout<<"enter the product number:";
        cin>>productNumber;
        cout<<"enter the product amount:";
        cin>>productAmount;
        if(productNumber>=1&&productNumber<=5)
        {
            toltalSales=toltalSales+productAmount*price[productNumber-1];
        }
        else if(productNumber!=1000)
        {
            cout<<"productNumber out range"<<endl;
        }
        else
        {
            cout<<"end of countSales2"<<endl;
        }


    }
    cout<<"the toltal sales is:"<<toltalSales<<endl;

}

























