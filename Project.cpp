//! کل این تابع ها داخل یه پوشه دیگه بود و لینک بود به این فایل
//! اما چون اصلا کار نمیکرد و باگش قابل رفع نبود مجبور شدم کل فایل هارو یکی کنم 

#include <iostream>
#include <iomanip>
#include <math.h>
#include <unistd.h>
#include <string>

#include "utils\\utils.hpp"
#include "utils\\timer.hpp"
using namespace std;

#define var 32
#define size 28



//? **************************

struct img_info
{
    float featurs[32];
    float distance;
    int label;
};

//? **************************

img_info ary[10000];
string trash;


//TODO ********************************************** Functions ************************************************************************

float std_func ( float x, float y , float img_matrix[size][size]);

float mean_func( float x, float y , float img_matrix[size][size]);

float ary_distance( float ary_1[var] , float ary_2[var] );

void matrix_array_distance( float matrix [100][28] , float array_input[var] , float container[100] );

void feature_vectore( float img_matrix[size][size] , float ary_feature[32] ) ;

void label_checker(img_info mins[] ,  int k , int true_lable );

float percentage(float truee , float total);


void second_menu();
void info ();
void explore();
void train();
void test ();
void clear_screen();


//TODO **********************************************************************************************************************


/*
*    0 = Black       8 = Gray
*    1 = Blue        9 = Light Blue
*    2 = Green       A = Light Green
*    3 = Aqua        B = Light Aqua
*    4 = Red         C = Light Red
*    5 = Purple      D = Light Purple
*    6 = Yellow      E = Light Yellow
*    7 = White       F = Bright White

*/

 

int main()
{
system("color 3E");

Timer timer;





int input ;  
clear_screen();
input=0;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             In The Name Of GOD            *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    1)menu                                 *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    2)info                                 *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    3)exit                                 *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
usleep(75000);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;




cin>>input;

switch (input)
{
case 1 :
    
    second_menu() ;

case 2 :
    
    info();

case 3 :
    
    exit(0);
    system("Pause");

default:
input=0;
while(input!=1)
{
clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             press 1 to return ...         *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;

cin>>input;
}

main();
}


return 0;
}

//************************************************  تابع منو دوم  ****************************************************************************

void second_menu()
{
Timer timer;

clear_screen();

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                   MENU                    *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    1)Explore                              *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    2)Train                                *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    3)Test                                 *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*    4)Return                               *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;



int input_2;
cin>>input_2;

switch (input_2)
{
case 1:
    clear_screen();
    explore();

case 2:
    clear_screen();
    train();

case 3:
    clear_screen();
    test();

case 4:
    clear_screen();
    main();

default:
clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;

cin>>trash;
clear_screen();
second_menu();
}




}

//***************************************************  تابع info  ******************************************************************************

void info ()
{
Timer timer;
clear_screen();

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             In The Name Of GOD            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       Date : 4/12/2022                    *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       Created by Shayan Chaleshi          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       Email:raziahamini@gmail.com         *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       Be in touch:09136527723             *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>trash;
main();

clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>trash;


clear_screen();
main();
}

//******************************************************  تابع explore *******************************************************************************

void explore()
{
Timer timer;
clear_screen();
string label ;
int index ;

    
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                 Explore                   *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       PLease enter your ideal label :     *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*               (Betwen 0 to 9)             *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>label ;
clear_screen();

int trans , flag= 0 ;
trans=stoi (label);


if (trans<0 || trans>9)
{


clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Enter a valid number          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;

cin>>trans;
explore();
}


int flag_2=0;

while (1==1)
{

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                 Explore                   *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       PLease enter your ideal index :     *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*            (Betwen 1 to 10000)            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>index;

if (index>0 && index<10000 )
{
    break;
}


clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Enter a valid number          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>trash;
clear_screen();
}


clear_screen();
    std::string image_path = interpolation("data\\mnist", "train", label);
    float img[IMAGE_SIZE][IMAGE_SIZE];

    load_image(image_path, index , img);

    for (int i = 0; i < IMAGE_SIZE; i++)
    {
        cout<<"\t\t\t";
        for (int j = 0; j < IMAGE_SIZE; j++)
        {
            if(img[i][j] != 0)
            std::cout << "**";

            else
            std::cout << "--";
        }
        std::cout << std::endl;
    }




cout<<endl<<"\t\t\t           ";
system("pause");

clear_screen();
second_menu();


}

//***************************************************** تابع train *****************************************************************

void train()
{
Timer timer;
clear_screen();


//!-------0--------
std::string image_path = interpolation("data\\mnist", "train", "0");

for (int   i= 0;  i<1000 ; i++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[i].featurs );

//*------- label ----------
    ary[i].label=0;

}



//!----1----
 image_path = interpolation("data\\mnist", "train", "1");
for (int  j= 1000; j <2000 ; j++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[j].featurs );

//*------- label ----------
    ary[j].label=1;


}



//!----2----
 image_path = interpolation("data\\mnist", "train", "2");
for (int  q=2000;  q<3000 ; q++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[q].featurs );

//*------- label ----------
    ary[q].label=2;


}



//!----3----
 image_path = interpolation("data\\mnist", "train", "3");
for (int   w=3000;  w<4000 ;w ++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img); 

//*------- featurs --------
    feature_vectore ( img , ary[w].featurs );

//*------- label ----------
    ary[w].label=3;


}



//!----4----
 image_path = interpolation("data\\mnist", "train", "4");
for (int   e= 4000;  e<5000 ; e++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[e].featurs );

//*------- label ----------
    ary[e].label=4;


}



//!----5----
 image_path = interpolation("data\\mnist", "train", "5");
for (int  r= 5000;  r<6000 ; r++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[r].featurs );

//*------- label ----------
    ary[r].label=5;


}



//!----6----
 image_path = interpolation("data\\mnist", "train", "6");
for (int   t= 6000;  t<7000 ; t++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[t].featurs );

//*------- label ----------
    ary[t].label=6;


}



//!----7----
 image_path = interpolation("data\\mnist", "train", "7");
for (int   y= 7000;  y<8000 ; y++)
{

    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[y].featurs );

//*------- label ----------
    ary[y].label=7;


}



//!----8----
 image_path = interpolation("data\\mnist", "train", "8");
for (int   u= 8000;  u<9000 ; u++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[u].featurs );

//*------- label ----------
    ary[u].label=8;


}



//!----9----
 image_path = interpolation("data\\mnist", "train", "9");
for (int   o= 9000;  o<10000 ; o++)
{
    float img[IMAGE_SIZE][IMAGE_SIZE];
    load_image(image_path, rand() % 5000 , img);

//*------- featurs --------
    feature_vectore ( img , ary[o].featurs );

//*------- label ----------
    ary[o].label=9;


}

//! print all 100,00 imgs featurs

/*
for (int i = 0; i < 10000; i++)
{
    for (int j = 0; j < 32; j++)
    {
    cout<<ary[i].featurs[j]<<"\t";
    }
}
system("pause");
*/

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                  Train                    *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                  Done :)                  *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;

cout<<endl<<endl<<"\t \t \t \t \t   ";
system("pause");
clear_screen();
second_menu();

}

//*****************************************************  تابع test ********************************************************************

void test ()
{
Timer timer;
clear_screen();
float label;
string addres ;
int index ;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                     Test                  *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*   PLease enter img address (two numbers): *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*         (firts one betwen 0 to 9 )        *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       (second one betwen 1 to 10000 )     *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>addres;
cin>>index;

int trans;
trans=stoi(addres);

if ( trans<0 || trans>9 || index<1 || index>10000 )
{

clear_screen();
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Enter a valid number          *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*          press any key to return ...      *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
cin>>trash;
test();
}


clear_screen();
    std::string image_path = interpolation("data\\mnist", "train", addres);
    float img[IMAGE_SIZE][IMAGE_SIZE];

    load_image(image_path, index, img);

    for (int i = 0; i < IMAGE_SIZE; i++)
    {
        cout<<"\t\t\t";
        for (int j = 0; j < IMAGE_SIZE; j++)
        {
            if(img[i][j] != 0)
            std::cout << "**";
            else
            std::cout << "--";
        }
        std::cout << std::endl;
    }
    

cout<<"\t\t\t         ";
system("pause");
clear_screen();
int k;

while (1==1)
{
    clear_screen();    

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                     Test                  *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*      PLease choose your KNN accuracy :    *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*     (an odd number betwen 3 to 10,000)    *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;


    cin>>k;

    if (k>=3 && k<=10000 && k%2!=0 )
    {
        break;
    }


    clear_screen();
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*             Dont Fuck With Me :)          *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*            Enter a valid number           *"<<endl;
    cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * * +"<<endl;
    cin>>trash;
    



}


clear_screen();

float img_featurs[32];
feature_vectore( img , img_featurs );

//* محسابه فاصله عکس داده شده با دیتابیس 10000 تایی 
for (int i = 0; i < 10000; i++)
{
    ary[i].distance=ary_distance ( img_featurs , ary[i].featurs ) ;
}




//* چاپ فاصله ها 

/*
for (int i = 0; i < 10000; i++)
{
    cout<<ary[i].distance<<endl;
}
system("pause");
*/





//* پیدا کردن مینیمم ها 
int counter=0  ;
img_info temp , min[k];



int m=10000;
for (int i = 0; i < 10000; i++)
{
   
    for (int j = 0; j < m-1; j++)
    {
        if ( ary[j+1].distance < ary[j].distance )
        {
            temp=ary[j];
            ary[j]=ary[j+1];
            ary[j+1]=temp;
        }
        
    }
    
}


for (int i = 0; i < k; i++)
{
    min[i]=ary[i];
}


clear_screen();

label_checker(min , k , stoi (addres));

clear_screen();

second_menu();

}

//? **
//? ***
//? ****
//? *****
//? ******
//? *******
//? ********


//TODO ************************************************** فاصله دو آرایه از هم ********************************************************************

float ary_distance( float ary_1[var] , float ary_2[var] )
{
float storage=0 ;

for (int i = 0; i < 32 ; i++)
{
    storage += (ary_1[i]-ary_2[i]) * (ary_1[i]-ary_2[i]) ;
    
}


return storage ;
}

//TODO ********************************************* فاصله آرایه از هر خط ماتریکس *****************************************************************

void matrix_array_distance( float matrix [100][28] , float array_input[var] , float container[100] )
{


for (int i = 0; i < 32; i++)
{

    container[i] += ary_distance( array_input , matrix[i] );
}


}

//TODO **************************************************  STD محسابه  ***********************************************************************

float std_func ( float x, float y , float img_matrix[size][size])

{
    float std , mean;
    float sum=0;

    mean= mean_func( x , y , img_matrix );


    for(int i=x; i< x+7 ; i++)
    {
        for(int j=y; j< y+7 ; j++)
        {
            sum += ( (img_matrix[i][j] - mean) *  (img_matrix[i][j] - mean) );
        } 
    }
    std = sqrt(sum/48);
    return std;

}


//TODO *************************************************  mean محاسبه  *************************************************************************

float mean_func( float x, float y , float img_matrix[size][size])
{
    float sum=0 , mean;


    for(int i=x; i< x+7 ; i++)
    {
        for(int j=y; j< y+7 ; j++)
        {

            sum += img_matrix[i][j];

        }
    }
    mean = sum/(49);
    return mean;
}


//TODO ***************************************************** Feature_Vecture **********************************************************************


void feature_vectore ( float img_matrix[size][size] , float ary_feature[32] )

{

    float mean , std ;
    int x=0;

    for (int i = 0; i < size; i=i+7)
    {
        for (int j = 0; j < size; j=j+7)
        {
            mean = mean_func ( i , j , img_matrix);
            std = std_func   ( i , j , img_matrix);

            ary_feature[x] = mean;
            x++;
            ary_feature[x] = std;
            x++;
        }
    }


 }


//TODO ******************************************  Screen_Clear  *********************************************************************

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

//TODo *******************************************  Label_Checker  ************************************************************************

void label_checker(img_info mins[] ,  int k , int true_lable )
{
float count_label[k];


/*
//چاپ همه لیبل ها 
for (int i = 0; i < k ; i++)
{
    cout<<mins[i].label<<"\t";
}
*/


cout<<"\n" "\n";
//صفر کردن همه خانه ها 
for (int i = 0; i < k; i++)
{
    count_label[i]=0;
}



//شمارش تعداد هر لیبل 
for (int i = 0; i < k ; i++)
{

    if (mins[i].label == 0)
    {
        count_label[0]= count_label[0] +1 ;
    }


    if (mins[i].label == 1)
    {
        count_label[1] =  count_label[1] +1 ;
    }


    if (mins[i].label == 2)
    {
        count_label[2]= count_label[2] +1 ;
    }


    if (mins[i].label == 3)
    {
        count_label[3]= count_label[3] +1 ;
    }


    if (mins[i].label == 4)
    {
        count_label[4]= count_label[4] +1;
    }


    if (mins[i].label == 5)
    {
        count_label[5]= count_label[5] +1; 
    }

    if (mins[i].label == 6)
    {
        count_label[6] =  count_label[6] +1 ;
    }


    if (mins[i].label == 7)
    {
        count_label[7]=  count_label[7] +1 ;
    }


    if (mins[i].label == 8)
    {
        count_label[8]= count_label[8] +1 ;
    }

    if (mins[i].label == 9)
    {
        count_label[9]= count_label[9] +1;
    }

}









//* پیدا کردن لیبلی که بیشترین تکرار را دارد
int max_num =0 , max_label=0 ;
for (int i = 0; i < 10; i++)
{
    if (count_label[i]>max_num)
    {
        max_num=count_label[i];
        max_label=i;
    }

}
float a;
a=percentage( count_label[true_lable] , k );

cout<<fixed<<setprecision(0);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * *  +"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                   Test                     *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       image label is :  "<<max_label<<"                  *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<fixed<<setprecision(3);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*       accuracy is    :  "<<a<<"             *"<<endl;
cout<<fixed<<setprecision(0);
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 0 Recognized : "<<count_label[0]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 1 Recognized : "<<count_label[1]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 2 Recognized : "<<count_label[2]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 3 Recognized : "<<count_label[3]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 4 Recognized : "<<count_label[4]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 5 Recognized : "<<count_label[5]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 6 Recognized : "<<count_label[6]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 7 Recognized : "<<count_label[7]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 8 Recognized : "<<count_label[8]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*  Number of label 9 Recognized : "<<count_label[9]<<"\t\t*"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"*                                            *"<<endl;
cout<<"\t" "\t" "\t" "\t" " " " " " "<<"+ * * * * * * * * * * * * * * * * * * * * *  +"<<endl;

cout<<"\t \t \t \t \t " ;
system("pause");

}

//TODO *******************************************************  Succes_Percentage  ***********************************************************

float percentage(float truee , float total)

{
float output=0.001;

cout<<fixed<<setprecision(3);

output=(truee / total)*100;


return output;
}

//TODO ********************************************************************************************************************************




