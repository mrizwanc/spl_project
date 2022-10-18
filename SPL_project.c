#include<stdio.h>
#include<string.h>
#define size 300



int menu()
{
    int choice;

    printf("\n\t---Main Menu---\n\n 1: Arithmetic Process.\n 2: String Process.\n 3: One D Array Process.\n 4: Two D Array Process.\n 5: Fibonacci Series.\n 6: Exit Main Menu.\n\n");


    printf("\tPlease Choose From Above: ");
    scanf("%d",&choice);

Check:
    if(choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5 && choice!=6)
    {
        printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
        scanf("%d",&choice);
        goto Check;
    }

    return choice;
}


void arithmetic_Processing ()
{
    while(1)
    {
        printf("\n\n\t---Arithmetic Process---\n\n");
        printf("1: Sum\n");
        printf("2: Subtraction\n");
        printf("3: Multiplication\n");
        printf("4: Division\n");
        printf("5: Average\n");
        printf("6: Reminder\n");
        printf("7: Exit Arithmetic Process\n");

        int apv;                ///Arithmetic Process Variable

        printf("\n\tPlease Choose From Above: ");
        scanf("%d",&apv);

Acheck:                     ///Arithmetic Check
        if(apv <1 || apv >7)
        {
            printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
            scanf("%d",&apv);
            goto Acheck;
        }


        else if(apv==1)                  ///Sum Operation
        {
            int sv;                   ///Sum Variable
            printf("\nHow Many Numbers You Want To Sum: ");
            scanf("%d",&sv);


Scheck:                           ///Sum Check
            if(sv<2)
            {
                printf("\nSum Of Less Then Two Number Is Not Possible.\n**Please Enter Again Wisely: ");
                scanf("%d",&sv);
                goto Scheck;
            }


            float n,sum=0;
            int i;
            for(i=0; i<sv; i++)
            {
                printf("\nInput Number: ");
                scanf("%f",&n);


                sum = sum+n;

            }

            printf("\n\tSum Is: %g\n\n",sum);



        }



        else if(apv==2)             ///Subtraction Operation
        {

            float sv1,sv2,sub;

            printf("\nInput your 1st Number: ");
            scanf("%f",&sv1);
            printf("\nInput your 2nd Number: ");
            scanf("%f",&sv2);

            sub=sv1-sv2;

            printf("\n\tSubtraction Is: %g\n",sub);

        }


        else if (apv==3)        ///Multiplication Operation
        {

            int mulC;           ///Multiplication Choice
            printf("\n\n--Multiplication Process--\n");
            printf("1: Table\n");
            printf("2: Normal Multiplication\n");
            printf("\nPlease Choose From Above: ");
            scanf("%d",&mulC);

Mcheck:             ///Multiplication Check
            if(mulC !=1 && mulC !=2)
            {
                printf("\nPlease Choose Again Wisely: ");
                scanf("%d",&mulC);
                goto Mcheck;
            }

            else if(mulC == 1)
            {
                int i, n, t;
                printf("\n\nFor Which Number You Want Table: ");
                scanf("%d",&n);
                printf("\nFor How many times: ");
                scanf("%d",&t);
                for(i=1; i<=t; i++)
                {
                    printf("\n\t%d * %d = %d",n,i,n*i);
                }
                printf("\n\n\n");
            }


            else if(mulC == 2)
            {
                float multi;
                printf("\n\tHow Many Numbers You Want To Multiply: ");
                scanf("%f",&multi);

MultiCheck:                 ///Multi Value Check
                if(multi<1)
                {
                    printf("\n\t**Wrong Input**\nPlease Enter Again Wisely: ");
                    scanf("%d",&multi);
                    goto MultiCheck;
                }

                float mi,m=1,mn;

                for(mi=1; mi<=multi; mi++)
                {
                    printf("\nPress Input :");
                    scanf("%f",&mn);

                    m =m*mn;

                }
                printf("\n\tMultiplication Is: %g\n\n",m);
            }
        }


        else if(apv==4)           ///Division Operation
        {


            float n1,n2,div;

            printf("\nEnter Dividend: ");
            scanf("%f",&n1);
            printf("\nEnter Divisor: ");
            scanf("%f",&n2);

            div=n1/n2;

            printf("\n\tDivision Result Is: %g\n\n",div);
        }


        else if(apv==5)             ///Average Operation
        {

            int a;
            printf("\nHow many numbers you wanted to get average: ");
            scanf("%d",&a);

Avcheck:                 ///Average Check
            if(a<1)
            {
                printf("\n\t**Wrong Input**\nPlease Input Again Wisely: ");
                scanf("%d",&a);
                goto Avcheck;
            }

            float i,n,av,t=0;
            for(i=0; i<a; i++)
            {
                printf("\nEnter Number: ");
                scanf("%f",&n);
                t= t+n;
            }

            av=t/a;

            printf("\n\tSum: %f\n",t);
            printf("\tNumber: %d\n",a);
            printf("\tAverage Is: %f\n",av);
        }


        else if(apv==6)             ///Reminder Operation
        {

            int rv1,rv2,rem;

            printf("\nEnter Dividend: ");
            scanf("%d",&rv1);
            printf("\nEnter Divisor: ");
            scanf("%d",&rv2);

            rem=rv1%rv2;

            printf(" \n\tReminder: %d\n\n",rem);
        }


        else if(apv==7)
            break;
    }
}


void string_processing()
{

    while(1)
    {
        printf("\n\t---String Process---\n\n");
        printf("1: Length of a String\n");
        printf("2: Reverse of a string\n");
        printf("3: String concatenate \n");
        printf("4: Sub-string copy paste\n");
        printf("5: Compare String\n");
        printf("6: Exit String Process\n");
        int choice;

        printf("\n\tPlease Choose From Above: ");
        scanf("%d",&choice);

StCheck:                ///String Check
        if(choice <1 || choice >6)
        {
            printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
            scanf("%d",&choice);
            goto StCheck;
        }



        else if(choice==1)             ///Length
        {
            char str[size];
            int len;
            printf("\nEnter Your String: ");
            getchar();
            gets(str);
            len=strlen(str);
            printf("\nLength Of The String Is: %d\n",len);
        }


        else if(choice==2)         ///Reverse String
        {
            char str[size];
            char rev[size];
            int len,strIndex,revIndex;
            printf("\nEnter Your String: ");
            getchar();
            gets(str);
            len=strlen(str);
            strIndex=len-1;
            revIndex=0;
            while(strIndex>=0)
            {
                rev[revIndex]=str[strIndex];
                strIndex--;
                revIndex++;
            }
            rev[revIndex]='\0';
            printf("\nReversed string is: %s\n",rev);

        }


        else if(choice==3)            ///String Concatenation
        {
            char str[size],str1[size];
            printf("\nEnter 1st String: ");
            getchar();
            gets(str);
            printf("\nEnter 2nd String: ");
            gets(str1);
            strcat(str,str1);
            printf("String After Concatenation Is: %s\n",str);
        }


        else if(choice==4)          ///SubString CpyPst
        {
            char str[size],sub_str[size];
            printf("\nEnter The String: ");
            getchar();
            gets(str);
            int i,s,f,k=0;
            printf("\nEnter The Start and Finish Position Which Will Be Copied As Sub-String: ");
            scanf("%d %d",&s,&f);
            for(i=s-1; i<f; i++)
            {
                sub_str[k]=str[i];
                k++;
            }
            sub_str[k]='\0';
            printf("Sub-String Is: %s\n",sub_str);
        }


        else if(choice==5)                    ///String Compare
        {
            char str[size],str1[size];

            printf("\nEnter The 1st String: ");
            getchar();
            gets(str);

            printf("\nEnter The 2nd String: ");
            gets(str1);

            if(strcmp(str,str1)==0)
            {
                printf("Strings Are Equal\n");
            }
            else
            {
                printf("Strings Are Not Equal\n");
            }
        }


        else if(choice==6)
            break;
    }


}



void one_d_array()
{

    printf("\n\nYou Have To Create An Array First.");
    int choice,array[size],sz,i,sum;
    printf("\n\nArray Length: ");
    scanf("%d",&sz);

    printf("\nInput Array Elements: ");
    for(i=0; i<sz; i++)
    {
        scanf("%d",&array[i]);
    }


    while(1)
    {

        printf("\n\n\n\t---One D Array Process---\n\n\n");
        printf("0: Change The Array\n");
        printf("1: Display\n");
        printf("2: Reverse Display\n");
        printf("3: Sum\n");
        printf("4: Average\n");
        printf("5: Find Maximum Value\n");
        printf("6: Find Minimum Value\n");
        printf("7: Sort Small To Big\n");
        printf("8: Sort Big To Small\n");
        printf("9: Search Element\n");
        printf("10: Exit OneD Array Process\n");

        printf("\n\tChoose From Above: ");
        scanf("%d",&choice);

Check1D:
        if(choice <0 || choice >10)
        {
            printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
            scanf("%d",&choice);
            goto Check1D;
        }




        else if(choice==0)                  ///Change Array
        {
            printf("\n\nArray Length: ");
            scanf("%d",&sz);

            printf("\nInput Array Elements: ");
            for(i=0; i<sz; i++)
            {
                scanf("%d",&array[i]);
            }
        }




        else if(choice==1)              ///Display
        {


            printf("\n\nYour Array Is: ");
            for(i=0; i<sz; i++)
            {
                printf("%d ",array[i]);
            }
            printf("\n\n\n");

        }



        else if (choice==2)             ///Reverse Display
        {


            printf("\nReversed Array Is: ");
            for(i=sz-1; i>=0; i--)
            {
                printf("%d  ",array[i]);
            }

            printf("\n\n\n");

        }



        else if (choice==3)                 ///Array Sum
        {
            sum=0;
            for(i=0; i<sz; i++)
            {
                sum=sum+array[i];
            }
            printf("\n\nSum Is: %d\n\n\n",sum);
        }



        else if (choice==4)                     ///Array Average
        {
            sum=0;
            for(i=0; i<sz; i++)
            {
                sum=sum+array[i];
            }
            float avg=(float)sum/(float)sz;
            printf("\nAverage Is: %f\n\n\n",avg);
        }



        else if (choice==5)                 ///Max Value
        {
            int max=array[0];
            for(i=1; i<sz; i++)
            {
                if(array[i]>max)
                {
                    max=array[i];

                }
            }
            printf("\nMaximum Value Is: %d\n\n\n",max);
        }



        else if (choice==6)                     ///Min Value
        {
            int min=array[0];
            for(i=0; i<sz; i++)
            {

                if(array[i]<min)
                {
                    min=array[i];
                }

            }
            printf("\nMinimum Value: %d\n\n\n",min);
        }



        else if (choice==7)                         ///Sorting Small To Big
        {

            int temp,j;
            for(i=0; i<sz; i++)
            {
                for(j=i+1; j<sz; j++)
                {
                    if(array[i]>array[j])
                    {
                        temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;

                    }

                }
            }
            printf("\nArray After Sorting: ");
            for(i=0; i<sz; i++)
                printf("%d  ",array[i]);

            printf("\n\n\n");

        }



        else if (choice==8)                             ///Big To Small Sorting
        {

            int temp,j;
            for(i=0; i<sz; i++)
            {
                for(j=i+1; j<sz; j++)
                {
                    if(array[i]<array[j])
                    {
                        temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;

                    }

                }
            }
            printf("\nArray After Sorting: ");
            for(i=0; i<sz; i++)
                printf("%d  ",array[i]);

            printf("\n\n\n");
        }



        else if(choice==9)                              ///Searching Array
        {
            int n,flag=0;
            printf("\nElement You Want To Search: ") ;
            scanf("%d",&n);

            for(i=0;i<sz;i++)
            {
                if(array[i]==n)
                {
                    printf("\nYour Element %d Is Found On Index: %d",n,i);
                    flag++;
                }
            }
            if(flag==0)
            {
                printf("\nYour Element %d Is Not Found In The Array",n);
            }

            printf("\n\n");

        }


        else if(choice==10)
            break;

    }

}



void two_d_array()
{

    int choice,n,i,j,row,col,sum,sub ;
    int array[size][size],array_1[size][size],array_2[size][size];

    printf("\n\nYou Have To Create An Array First: \n");
    printf("\nRow Length: ");
    scanf("%d",&row);
    printf("\nColumn Length: ");
    scanf("%d",&col);

    printf("Enter Your Array Elements:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }


    while(1)
    {
        printf("\n\n\t---Two D Array Process---\n\n");
        printf("0: Change Array\n");
        printf("1: Display\n");
        printf("2: Search Element\n");
        printf("3: Find Maximum\n");
        printf("4: Find Minimum\n");
        printf("5: Matrix Addition\n");
        printf("6: Matrix Subtraction\n");
        printf("7: Matrix Multiplication\n");
        printf("8: Finding Matrix Diagonal\n");
        printf("9: Exit TwoD Array Process\n");

        printf("\n\tChoose From Above: ");
        scanf("%d",&choice);

Check2D:
        if(choice <0 || choice >9)
        {
            printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
            scanf("%d",&choice);
            goto Check2D;
        }


        else if(choice==0)                      ///Change Array
        {
            printf("\nRow Length: ");
            scanf("%d",&row);
            printf("\nColumn Length: ");
            scanf("%d",&col);

            printf("Enter Your Array Elements:\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    scanf("%d",&array[i][j]);
                }
            }

        }



        else if(choice==1)                      ///Display
        {

            printf("Your Array Is: \n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    printf("  %d  ",array[i][j]);        ///display sesh.
                }
                printf("\n");
            }
            printf("\n\n\n");
        }

        else if(choice==2)                     ///Search Element
        {

            printf("\nElement You Want To Search: ");
            scanf("%d",&n);
            int flag=0;

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(array[i][j]==n)
                    {
                        printf("\nYour Element %d Is Found On:\nRow No: %d\nColumn No: %d",n,row,col);
                        flag++;
                    }
                }
            }

            if(flag==0)
            {
                printf("\nYour Element %d Is Not Found In The Array.",n);
            }

            printf("\n\n\n");
        }


        else if(choice==3)                   ///Maximum Finding
        {

            int max=0;
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(array[i][j]>max)
                    {

                        max=array[i][j];
                    }
                }
            }
            printf("Maximum Element Is: %d\n\n",max);

        }


        else if(choice==4)                      ///Minimum Finding
        {

            int mini=array[0][0];
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(array[i][j]<mini)
                    {
                        mini=array[i][j];
                    }
                }
            }
            printf("Minimum Element Is: %d\n\n",mini);

        }

        else if(choice==5)                      ///Matrix Addition
        {
            printf("\n\nFor Matrix Addition You Need To Create A Second Array Which Size Is Same As First Array.\n");
            printf("Size Of First Array:\nRow: %d\nColumn: %d",row,col);

            printf("\nEnter Element Of Second Array:\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    scanf("%d",&array_1[i][j]);
                }
            }

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    array_2[i][j]=array[i][j]+array_1[i][j];
                }
            }

            printf("\n\nAfter Addition Matrix Is:\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    printf(" %d  ",array_2[i][j]);
                }
                printf("\n");
            }
            printf("\n\n\n");

        }




        else if(choice==6)                  ///Matrix Subtraction
        {
            printf("\n\nFor Matrix Subtraction You Need To Create A Second Array Which Size Is Same As First Array.\n");
            printf("Size Of First Array:\nRow: %d\nColumn: %d",row,col);

            printf("\nEnter Element Of Second Array:\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    scanf("%d",&array_1[i][j]);
                }
            }

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    array_2[i][j]=array[i][j]-array_1[i][j];
                }
            }

            printf("After Subtraction Matrix Is:\n");
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    printf(" %d  ",array_2[i][j]);
                }
                printf("\n");
            }

            printf("\n\n\n");
        }



        else if(choice==7)                    ///Matrix Multiplication
        {

            int col_1,row_1;
            printf("\n\nFor Matrix Multiplication You Need To Create A Second Array Which Row Size Is Same As First Array's Column Size.\n");
            printf("Size Of First Array:\nRow: %d\nColumn: %d",row,col);


            printf("Row Size For Second Array: ");
            scanf("%d",&row_1);
            printf("Column Size For Second Array: ");
            scanf("%d",&col_1);

            printf("Enter Your Array Elements:\n");
            for(i=0; i<row_1; i++)
            {
                for(j=0; j<col_1; j++)
                {
                    scanf("%d",&array_1[i][j]);
                }
            }


            if(col !=row_1)
            {
                printf("You Didn't Entered Row Size Wisely. Please Try Again Later.\n");
            }

            else
            {
                for(i=0; i<row; i++)
                {
                    for(j=0; j<col_1; j++)
                    {
                        int k,sum_multi=0;
                        for(k=0; k<col; k++)
                        {

                            sum_multi+=array[i][k]*array_1[k][j];
                        }

                        array_2[i][j]=sum_multi;
                    }
                }

                printf("After Multiplication Array Is:\n") ;
                for(i=0; i<row_1; i++)
                {
                    for(j=0; j<col_1; j++)
                    {
                        printf(" %d  ",array_2[i][j]);
                    }
                    printf("\n");
                }
            }

            printf("\n\n\n");


        }


        else if(choice==8)                      ///Finding Diagonal
        {

            printf("Main Diagonal Elements Are: ");

            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(i==j)
                    {
                        printf("%d ",array[i][j]);
                    }
                }
            }

            printf("\nMinor Diagonal Elements Are: ");
            for(i=0,j=col-1; i<row; i++,j--)
            {
                printf("%d ",array[i][j]);
            }
            printf("\n\n\n");
        }


        else if(choice==9)
            break;
    }
}



void fibonacci_series()
{

            int prev1=1;
            int prev2=1;

            int n;
            printf("\nPlease Enter The Value Of N: ");
            scanf("%d",&n);

            if(n==1)
            {
                printf("%d",prev1);
            }
            else if(n>=2)
            {
                printf("%d, %d",prev1,prev2);
                int cnt;
                for(cnt=3; cnt<=n; cnt++)
                {
                    int term=prev1+prev2;
                    printf(", %d",term);
                    prev1=prev2;
                    prev2=term;
                }
            }

}



void main()
{
    printf("\t\t\tWELCOME TO THE PROJECT\n\n");
    while(1)
    {
        int mv;             ///Main Variable
        printf("\n\t--Main Program Window--\n\n");
        printf("1: Enter The Program\n");
        printf("2: About\n");
        printf("3: Terminate The Program\n");

        printf("\n\tPlease Choose From Above: ");
        scanf("%d",&mv);

check:
        if(mv!=1 && mv!=2 && mv!=3)
        {
            printf("\n\t**Wrong Input**\nPlease Choose Again Wisely: ");
            scanf("%d",&mv);
            goto check;
        }


        if(mv == 3)
            break;

        if(mv == 2)
        {
            printf("This project was created for our Structured Programming Language(SPL) course\n");
            printf("as a Lab Project to show what we learned from the course.\n");
            printf("\nProject Partners:\n");
            printf("\tMd. Rizwan Chowdhury\n\t\tmail: mchowdhury171056@bscse.uiu.ac.bd\n");
            printf("\tMehjabin Johra\n\t\tmail: mjohra171037@bscse.uiu.ac.bd\n");
            printf("\tHebron Hossain Hamim\n\t\tmail: hhamim171095@bscse.uiu.ac.bd\n");
        }


        if(mv == 1)
        {
            int choiceM;            ///Choice Main
            while(1)
            {
                choiceM = menu();

                if(choiceM==1)
                    arithmetic_Processing ();

                else if(choiceM==2)
                    string_processing();


                else if(choiceM==3)
                    one_d_array();


                else if(choiceM==4)
                    two_d_array();


                else if(choiceM==5)
                    fibonacci_series();


                else if(choiceM==6)
                    break;

            }
        }

    }

}
