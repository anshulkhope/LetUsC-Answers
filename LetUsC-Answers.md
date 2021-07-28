
# CHP-1

Section [A]
===
*  **'3.5'** :-
	it an invalid constant because it is a number
	and multiple chars or numbers cannot be put
	in single quotes
*  **'elearning'** :-
	it is an invalid const because multiple chars
	cannot be wrapped in single quotes.
*  **'Quest'** :-
	it is an invalid const because multiple chars
	cannot be wrapped in single quotes
*  **'2 3'** :-
	it is an invalid constant beacuse more than one number cannot be written with spaces.

Section [B]
===

*  **\$hello** :-
	It is valid

*  **B'day** :-
	(')cannot be used while writing a var name

*  **dot.** :-
	(.)cannot be used while writing a var name

*  **_main()** :-
	a parenthesis cannot be used while writing a var name
*  **stack-queue** :-
	a hyphen is invalid to use while writing a var name
*  **int** :-
	int is a C keyword so cannot be used while writing a var name

*  **%name%, total%** :-
	% is a logical operator so cannot be used while writing a var name
*  **variable name**
	a space cannot be inserted while writing a var name

Section [C]
===
 **(a)** -- true

 **(b)** -- true

 **(c)** -- true

 **(d)** -- true

 **(e)** -- true

 **(f)** -- true

 **(g)** -- true

 **(h)** -- true

 **(i)** -- true

 **(j)** -- false

 **(k)** -- true

 **(l)** -- false

# CHP-2

Section [A]
===
**(a)** **No Error**

**(b)** **No Error**

**(c)** **Error** :- A value cannot be assigned to a C keyword.

**(d)** **Error** :- the sequence is wrong(a variable cannot be assigned to an equation)

**(e)** **Error** :- algebric equations cannot be written as it is in C
(f) --nl
(g) --nl
(h) --nl
(i) --nl
(j) --error <there are algebric operators in here>
(k) --error <varibles cannot be assigned to numbers>
(l) --nl
(m) --error <multiple characters cannot be filled in a single char>

[B] --answers--
	(a) declaration: a=3; b=2; x=5; y=4;
	(a) -- ans = 5 * b * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y;
	== 20 * b * x - 3 * a * y * y - 8 * b * b * x + 10 * a * y; --operation *
	== 20 * 20 - 3 * a * y * y - 8 * b * b * x + 10 * a * y; --operation *
	== 20 * 17 * a * y * y - 8 * b * b * x + 10 * a * y; --operation -
	== 20 * 17 * 12 * y - 8 * b * b * x + 10 * a * y; --operation *
	== 20 * 17 * 48 - 8 * b * b * x + 10 * a * y; --operation *
	== 20 * 17 * 40 * b * b * x + 10 * a * y; --operation -
	== 20 * 17 * 40 * 4 * x + 10 * a * y; --operation *
	== 20 * 17 * 40 * 4 * 15 * a * y; --operation +
	== 20 * 17 * 40 * 60 * a * y; --operation *
	== 20 * 17 * 2400 * a * y; --operation *
	== 20 * 17 * 2400 * 12; --operation *
	== 140 * 2400 * 12; --operation *
	== 140 * 2800; --operation *
	== 362000 --operation *
	(b) declaration: a=4; y=1; c=3;
	(b) -- res = 4 * a * y / c - a * y / c;
	== 16 * y / c - a * y / c; --operation *
	== 16 / c - a * y / c; --operation *
	== 5 - a * y / c; --operation /
	== 5 - 4 / c; --operation *
	== 5 - 1; --operation /
	res = 4; --operation -
	(c) declaration: a=2.2; b=0.0; c=4.1; y=3.0;
	(c) -- s = c + a * y * y / b;
	== 6.3 * y * y / b; --operation +
	== 18.90 * y / b; --operation *
	== 567 / b; --operation *
	== 0 (cannot divide a number by zero);
	(d) declaration: x=3.5
	(d) -- R = x * x + 2 * x + 1 / 2 * x * x + x + 1;
	== 117.5 + 2 * x + 1 / 2 * x * x + x + 1; --operation *
	== 119.5 * x + 1 / 2 * x * x + x + 1; --operation +
	== 41725.5 + 1 / 2 * x * x + x + 1; --operation *
	== 41726.5 / 2 * x * x + x + 1; --operation +
	== 20863.205 * x * x + x + 1; --operation /
	== 72821217.500 * x + x + 1; --operation *
	== 254874261.25 + x + 1; --operation *\
	== 254874262.75 + 1; --operation +
	== 254874263.75; --operation +
[C] --doubted
[D] --answers--
	(a) Z = (x+3)*x*3 / (y-4)*(y+5);
	(b) R = 2*v+6.22*(c+d) / g+v;
	(c) A = 7.7*b*(xy+a)/c-0.8+2*b / (x+a);
	(d) X = 12*x*3 / 4*x + 8*x*2 / 4*x + x / 8*x + 8 / 8*x;
[E] --answers--
	(a):: 0 2 0.000000 2.000000
	(b):: a=2 b=-2 c=2 d=-2
	(c):: <error> operator% cannot be used with floats
	(d):: {
	nn

	 nn
	nn /n/n nn/n
	}
	(e):: the answer will be the keyboard input or the entered value
[F] --answers--
    (a) False
    (b) False
    (c) True
    (d) False
    (e) False
    (f) True
[G] --answers--
    (a) *
    (b) 5
    (c) 5
    (d) -9
    (e) -1610612736
[H] --answers--
    {$PROG}[logic.h]
    {$}[doubted($a,b,(little bit)d,e,g,i)]c

## Chapter 3
[A] -answers
    (a) {
        5 200
    }
    (b) {
        300 200
    }
    (c) {
        ...
    }
    (d) {
        x and y are equal
    }
    (e) {
        x=10 y=10 z=0
    }
    (f) {
        C is WOW
    }
[B] -answers
    (a) -error (the assigment operator (=) is used instead of the relational operator (==))
    (b) -error no_error
    (c) -error (there is no such keyword as 'then' in C)
    (d) -error (we cannot assign a expression to a expression)
    (e) -error (there must be a space in elseif (else if) )
    (f) -error no_error
[C] -answers
    {$PROG}[logic.h]
    {$douted(d)}
