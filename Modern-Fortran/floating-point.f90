! This is a Fortran Tutorial file located at: https://fortran-lang.org/en/learn/quickstart/
! It's time to learn to use Floating-point Precision in Fortran
! The usual set of arithmetic operators are available, listed in order of precedence:
! Operator  Description
!   **       Exponent
!   *        Multiplication
!   /        Division
!   +        Addition
!   -        Subtraction

program arithmetic ! Start of arithmetic program
  ! Declare Variables
  implicit none
  real :: pi
  real :: radius
  real :: height
  real :: area
  real :: volume
  ! Define Variables
  pi = 3.1415927

  ! Collect cylinder information
  print *, 'Enter cylinder base radius:'
  read(*,*) radius

  print *, 'Enter cylinder height:'
  read(*,*) height

  ! Run calculations
  area = pi * radius**2
  volume = area * height

  ! Print results to stdout
  print *, 'Cylinder radius is: ', radius
  print *, 'Cylinder height is: ', height
  print *, 'Cylinder base area is: ', area
  print *, 'Cylinder volume is: ', volume

end program arithmetic ! End of arithmetic program

! Save this file as expressions.f90 and run it in the compiler by; gfortran expressions.f90 -o expressions