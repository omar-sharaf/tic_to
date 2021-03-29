#include <iostream>
using namespace std;
int main() {
  string arr1[9],commandx,commando;
  bool restart;
  int i;
  restart=true;
  while(restart==true)
{
  for(i=0;i<3;i++)
  {
    cout<<arr1[i]<<",";

  } 
  cout<<"\n";
  for(i=3;i<6;i++)
  {
    cout<<arr1[i]<<",";

  }
  cout<<"\n";
  for(i=6;i<9;i++)
  {
    cout<<arr1[i]<<",";

  }
  cout<<"\n";
      if ((arr1[0]=="x")and(arr1[1]=="x")and(arr1[2]=="x"))
  {
    cout<<"winner x";
    break;
  }
   if ((arr1[3]=="x")and(arr1[4]=="x")and(arr1[5]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[6]=="x")and(arr1[7]=="x")and(arr1[8]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[0]=="x")and(arr1[3]=="x")and(arr1[6]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[1]=="x")and(arr1[4]=="x")and(arr1[7]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[2]=="x")and(arr1[5]=="x")and(arr1[8]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[0]=="x")and(arr1[4]=="x")and(arr1[8]=="x"))
  {
    cout<<"winner x";
    break;
  }
    if ((arr1[2]=="x")and(arr1[4]=="x")and(arr1[6]=="x"))
  {
    cout<<"winner x";
    break;
  }


   if ((arr1[0]=="o")and(arr1[1]=="o")and(arr1[2]=="o"))
  {
    cout<<"winner o";
    break;
  }
   if ((arr1[3]=="o")and(arr1[4]=="o")and(arr1[5]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[6]=="o")and(arr1[7]=="o")and(arr1[8]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[0]=="o")and(arr1[3]=="o")and(arr1[6]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[1]=="o")and(arr1[4]=="o")and(arr1[7]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[2]=="o")and(arr1[5]=="o")and(arr1[8]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[0]=="o")and(arr1[4]=="o")and(arr1[8]=="o"))
  {
    cout<<"winner o";
    break;
  }
    if ((arr1[2]=="o")and(arr1[4]=="o")and(arr1[6]=="o"))
  {
    cout<<"winner o";
    break;
  }


  cout<<"enter where you want your x to go: ";
  cin>>commandx;
  if((arr1[0]!="x")and(arr1[0]!="o"))
  {
  if (commandx=="top-left")
  {
    arr1[0]="x";
  }
  }
  if((arr1[1]!="x")and(arr1[1]!="o"))
  {
  if (commandx=="top-mid")
  {
    arr1[1]="x";
  }
  }
  if((arr1[2]!="x")and(arr1[2]!="o"))
  {
    if (commandx=="top-right")
  {
    arr1[2]="x";
  }
  }
   if((arr1[3]!="x")and(arr1[3]!="o"))
  {
    if (commandx=="mid-left")
  {
    arr1[3]="x";
  }
  }
   if((arr1[4]!="x")and(arr1[4]!="o"))
  {
    if (commandx=="mid-mid")
  {
    arr1[4]="x";
  }
  }
   if((arr1[5]!="x")and(arr1[5]!="o"))
  {
    if (commandx=="mid-right")
  {
    arr1[5]="x";
  }
  }
   if((arr1[6]!="x")and(arr1[6]!="o"))
  {
   if (commandx=="bottom-left")
  {
    arr1[6]="x";
  }
  }
   if((arr1[7]!="x")and(arr1[7]!="o"))
  {
  if (commandx=="bottom-mid")
  {
    arr1[7]="x";
  }
  }
   if((arr1[8]!="x")and(arr1[8]!="o"))
  {
  if (commandx=="bottom-right")
  {
    arr1[8]="x";
  }
  }
  for(i=0;i<3;i++)
  {
    cout<<arr1[i]<<",";

  } 
  cout<<"\n";
  for(i=3;i<6;i++)
  {
    cout<<arr1[i]<<",";

  }
  cout<<"\n";
  for(i=6;i<9;i++)
  {
    cout<<arr1[i]<<",";

  }
  cout<<"enter where you want your o to go: ";
  cin>>commando;
  if((arr1[0]!="x")and(arr1[0]!="o"))
  {
   if (commando=="top-left")
  {
    arr1[0]="o";
  }
  }
  if((arr1[1]!="x")and(arr1[1]!="o"))
  {
  if (commando=="top-mid")
  {
    arr1[1]="o";
  }
  }
  if((arr1[2]!="x")and(arr1[2]!="o"))
  {
    if (commando=="top-right")
  {
    arr1[2]="o";
  }
  }
   if((arr1[3]!="x")and(arr1[3]!="o"))
  {
    if (commando=="mid-left")
  {
    arr1[3]="o";
  }
  }
   if((arr1[4]!="x")and(arr1[4]!="o"))
  {
    if (commando=="mid-mid")
  {
    arr1[4]="o";
  }
  }
   if((arr1[5]!="x")and(arr1[5]!="o"))
  {
    if (commando=="mid-right")
  {
    arr1[5]="o";
  }
  }
  if((arr1[6]!="x")and(arr1[6]!="o"))
  {
   if (commando=="bottom-left")
  {
    arr1[6]="o";
  }
  }
  if((arr1[7]!="x")and(arr1[7]!="o"))
  {
  if (commando=="bottom-mid")
  {
    arr1[7]="o";
  }
  }
  if((arr1[8]!="x")and(arr1[8]!="o"))
  {
  if (commando=="bottom-right")
  {
    arr1[8]="o";
  }
  }
  }
  return(0);
}