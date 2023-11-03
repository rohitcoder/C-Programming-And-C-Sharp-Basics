
/*
       
              20. Write a C# program to print odd numbers from 1 to 99. Prints one number per line.

 */

using System;
using System.Collections.Generic;

namespace Practice
{
    class program
    { 
        public static void Main(string[] args)               
        {
            Console.WriteLine("print add numbers from 1 to 99 in diffrent line :");
            for(int i =1; i < 100; i++)   //here we first loop from 1 to 99 using for loop
            {
                if((i % 2) != 0)  //then we check condition that is every even number id divisible by 2 and if the remainder/ modulus is 0 we ignore them
                {

                    Console.WriteLine(i);  //printing the output of all the numbers (odd)
                }
            }
        }
            
    }

}
