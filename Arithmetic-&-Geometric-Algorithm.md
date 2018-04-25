## Arithmetic Progression
Look at this sequence of numbers below:
#### 1, 3, 5, 7, 9, ...
You will notice this sequence is progressing by three each time. This is what we call arithmetic progression ('AP' for short). Below is the arithmetic behind the sequence shown above:
#### 1,      3,          5,            7,            9
#### 1,    1 + 2,    1 + 2 × 2,    1 + 3 × 2,    1 + 4 × 2, 
The first term of the sequence is where you start. This time are first term is '1'. If you look at the above formulae you will realise that '2' is consistent in each sum this shows us its the common difference.
The common way of representing this information above is the use of algebra. Below is how this process would translate:
#### a, a + d, a + 2d, a + 3d, a + 4d
The letters represent the following:
#### a=1
#### d=2

#### Geometric Progression
Look at this sequence of numbers below:
#### 2, 6, 18, 54, ...
As you may have noticed the numbers are multiplying by three sequentially. Below is the arithmetic behind the sequence.
#### 2,      6,        18,        54, 
#### ![](https://i.imgur.com/dYg7qHo.png)
Like in Arithmetic Progression you have a first term which here is '2' here. Where it differs is that instead of a common difference, there is a common ratio. Are common ratio for this sequence is '3' you find it using the same thought process as with finding the common difference.
The common way of representing this information above is the use of algebra. Below is how this process would translate:
#### ![](https://i.imgur.com/WGp8lbH.png)
The letters represent the following:
#### a=2
#### r=3

## Formulae
#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
int input;
cout<< "type a number: \n";
cin >> input; 
int loop = 0;

do{
int geometric;
input * input;
int arithmetic = input + input;

//adds 1 to loop variable
loop++;

cout<<"geometric value:";
  cout<<geometric;
  cout<<"\n";
  cout<<"arithmetic value:";
  cout<<arithmetic;
} 

while( loop < 1 );
return (0);

 
}
