! This is a Fortran Tutorial file located at: https://fortran-lang.org/en/learn/quickstart/
! It's time to lear to define variables in Fortran
! Syntax for variable is <variable_type> :: <variable_name>
! The 5 built-in data types are:
!   integer – for data that represent whole numbers, positive or negative
!   real – for floating-point data (not a whole number)
!   complex – pair consisting of a real part and an imaginary part
!   character – for text data
!   logical – for data that represent boolean (true or false) values


program variables ! Start defined variables program tutorial
   implicit none ! Always use! It is considered poor practice not to use defined and clear variables
   
   ! Examples for declaring variables 
   integer :: amount
   real :: pi
   complex :: freqency
   character :: initial
   logical :: isOkay
   
   ! Examples for assigning variables 
   amount = 10
   pi = 3.1415927
   freqency = (1.0, -0.5)
   initial = 'A'
   isOkay = .false.
   
   ! We can use the "print" statement to send the variables to stdout
   Print *, 'We can use the "print" statement to send the variables to stdout'
   print *, 'The value of amount (integer) is: ', amount
   print *, 'The value of amount (real) is: ', pi
   print *, 'The value of amount (complex) is: ', freqency
   print *, 'The value of amount (character) is: ', initial
   print *, 'The value of amount (logical) is: ', isOkay
       
end program variables


program read_value ! Start read from user input tutorial
   implicit none
   integer :: age

   print *, 'Please enter your age: '
   read(*,*) age
   
   print *, 'Your age is: ', age
   
end program read_value
   
   
   ! Save this file as variables.f90 and run it in the compiler by; gfortran hello.f90 -o hello