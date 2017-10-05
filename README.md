# Elliptic Curves Affine Points Counter

This code computes all affine points of a given elliptic curve and returns the total number of points and whether it is a singular curve. The curve has to be non-singular/smooth to be classified as an elliptic curve.  

#### Input
Each line contains a space-separated list of one prime integer _p_ and two integer coefficients _a_ and _b_ of an elliptic curve _y<sup>2</sup> = x<sup>3</sup> + ax + b_. All integers are positive.  

#### Output
Every output line contains a 1/0 depending on whether the curve is singular/smooth and the total number of affine points on the curve - the point at infinity excluded.

## Example files:
- ec_sample.in &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;// input file
- ec_sample.out &nbsp;&nbsp;&nbsp;&nbsp;// output for the example