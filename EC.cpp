//============================================================================
// Name        : EC.cpp
// Author      : ATPNguyen
// Version     :
// Copyright   : 
// Description : Elliptic Curves in C++, calculate basic properties
//============================================================================

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define ll long long

int singular; // flag for singular curves

ll EC(ll p, ll a, ll b){
	ll count = 0;
	ll sum, f_x;
	ll disc;

	// search whole plane for all points P_i(x,y) for which y^2 = x^3 + ax + b is true
	for(int i=0; i<p; i++){
		for(int j=0; j<p; j++){
			sum = pow(i, 3) + a*i + b;	// right side of equation
			f_x = j*j;	// left side of equation
			if(f_x%p == sum%p){ // iterate counter if both sides are congruent
				count += 1;
			}
		}
	}

	disc = (-4*a*a*a-27*b*b)%p;	// calculate discriminant and mod p
	if(disc == 0)
		singular = 1; // curve is singular if discriminant is zero

	return count;
}

int main() {
	ll p, a, b;
	while(cin >> p >> a >> b){	// read in prime integer p and coefficients a, b
		int count;	// counter for affine points on the curve
		singular = 0;

		count = EC(p, a, b); // search elliptic curves points
		cout << singular << " " << count << endl; // print out singular_flag and number of affine points
	}
	return 0;
}
