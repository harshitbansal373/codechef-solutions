//Nikhil Sachan

//Photo: https://spidergems.com/images/keyword.png

//Location: India

//Github: https://github.com/nikhil254/

import java.util.*;
import java.lang.*;
import java.io.*;
class CodeChef
{
 public static void main (String[] args)
 {
  Scanner scanner = new Scanner(System.in);
  int Test = scanner.nextInt();
  
  while(Test> 0){
  int no = scanner.nextInt();
  int p = scanner.nextInt();
  int x = scanner.nextInt();
  int y = scanner.nextInt();
  int q=0;
  
  if(y>no){
      System.out.println("NO");
  }
  else{
      for(int i=1;i<=no;i++){
          if((x+p*i)%no == y){
             System.out.println("YES");
             q--;
             break;
          }
      }
  }
  if(q==0)
     System.out.println("NO");
Test--;
  }
  
 }
}
