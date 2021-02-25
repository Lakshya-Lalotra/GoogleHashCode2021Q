# GoogleHashCode_Pratice
Pratice Round

**Introduction**

Isn't it fun to share pizza with friends? But, sometimes you just don't have enough time to choose
what pizza to order. Wouldn't it be nice if someone else chose for you?
In an imaginary world…
© Google 2021, All rights reserved.
This is a practice problem which allows you to get familiar

**Problem description**

**Task**

Help the imaginary pizzeria choose the pizzas to deliver to Hash Code teams. And since we want
everyone to enjoy their food, let's try to deliver to each team, as many dierent ingredients as we
can.

**Pizza**

Expecting many hungry customers, the pizzeria has already prepared some pizzas with dierent
ingredients. Each pizza can be delivered to at most one team. There can be multiple pizzas with
the exact same set of ingredients.

**Teams**

Teams of 2, 3, or 4 people all ordered pizzas. Each team ordered one pizza per team member, but
did not specify what ingredients to put on the pizzas. The pizzeria might not deliver to a team (no
pizzas are sent to that team). However, if the order is delivered, exactly one pizza should be
available per person. For example, it is an error to send 3 pizzas to a 4-person team.

**Goal**
Given the description of the pizzas available, and the number of teams of 2, 3, or 4 people that
have ordered, decide which pizzas to send to each of the teams. The goal is to maximize, per
team, the number of dierent ingredients used in all their pizzas.

For example, if we deliver to a 3-person team Pizzas 0, 2 and 3, there will be 7 dierent
ingredients (9 ingredients in total, but pepper and mushroom occur twice):
● Pizza 0
○ onion
○ pepper
○ olive
● Pizza 2:
○ chicken
○ mushroom
○ pepper (is already on Pizza 0)
● Pizza 3:
○ tomato
○ mushroom (is already on Pizza 2)
○ basil


**Input data set**
The input data is provided as a data set le - a plain text le containing exclusively ASCII
characters with lines terminated with a single ‘\n’ character (UNIX-style line endings).
**File format**
The rst line of the input le contains the following integer numbers separated by single spaces:
● M ( 1 ≤ M ≤ 100 000 ) - the number of pizzas available in the pizzeria
● T2
( 0 ≤ T 0 000 ) - the number of 2-person teams 2 ≤ 5
● T3 ( 0 ≤ T 0 000 ) - the number of 3-person teams 3 ≤ 5
● T4
( 0 ≤ T 0 000 ) - the number of 4-person teams 4 ≤ 5
The next M lines describe the pizzas available. Each line contains (space separated):
● an integer I ( 1 ≤ I ≤ 10 000 ) - the number of ingredients,
● followed by the list of I ingredients - Each ingredient consists of lowercase ASCII leers
and dash (-) characters, and its length can be between 1 and 20 characters in total. Each
ingredient in a pizza is dierent, but the same ingredient can appear on dierent pizzas

