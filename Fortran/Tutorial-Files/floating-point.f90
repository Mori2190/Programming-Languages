! This is a Fortran Tutorial file located at: https://fortran-lang.org/en/learn/quickstart/
! It's time to learn to use Floating-point Precision in Fortran
! The desired floating-point precision can be explicitly declared using a kind parameter.
! The iso_fortran_env intrinsic module provides kind parameters for the common 32-bit and 64-bit floating-point types.

program float ! Start of explicit real 'kind'
  ! Declare Variables
  use, intrinsic :: iso_fortran_env, only: sp=>real32, dp=>real64
  implicit none
  real(sp) :: float32
  real(dp) :: float64
  
  ! Define Variables
  float32 = 1.0_sp ! Explicit suffix for literal constants
  float64 = 1.0_dp
  
end program float

program float ! C-interoperable 'kind'
   ! Declare Variables
   use, intrinsic :: iso_c_binding, only: sp=>c_float, dp=>c_double
   implicit none
   
   !Define Variables
   real(sp) :: float32
   real(dp) :: float64
   
end program float
! Save this file as floating-point.f90 and run it in the compiler by; gfortran floating-point.f90 -o floating-point