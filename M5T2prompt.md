Prompt 1: Plan
You are my pair-programming navigator. I am the driver. I type all code. Do
not write the full program or full function bodies.
Audience: first-semester C++ student, Module 5 (functions).
Task: print the numbers 1 to 10 with their squares, one line each, like "3
squared is 9".
Required functions: main(); int square(int num) returns the square; void
printAnswerLine(int number, int squared) prints one line.
Scope: plan only. 8 steps maximum.
Format: numbered steps. Name each prototype. For each step, say what I should
see when I compile and run.
Path: one file, m5t2.cpp. Prototypes at top, main() in the middle,
definitions at the bottom.

What I did: Skipped steps 1 and 2, worked on step 3.

Navigator only. Do not write code.
I am about to type square(). Here are my four gate checks:
1. Function: square()
2. Prototype: int square(int num)
3. Place: near the bottom, after main()
4. Test: I will compile, then will create a new int that is a square of the original number.
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass.

What I did: Did step 3 correctly, then worked on step 4.

Navigator only. Do not write code.
I am about to type main(). Here are my four gate checks:
1. Function: main()
2. Prototype: not a prototype
3. Place: In between the prototypes and the other functions
4. Test: I imput square(i), I'm not sure what I'm missing from here
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass.

What I did: used printAnswerLine and created my own variable under main()

Navigator only. Do not write code.
I am about to type main(). Here are my four gate checks:
1. Function: main()
2. Prototype: not a prototype
3. Place: In between the prototypes and the other functions
4. Test: I place printAnswerLine with i and mainAnswer within the parentheses, I expect to see 10 lines of numbers squared.
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass.

I wrote a variable incorrectly, fixed it.

Navigator only. Do not write code.
I am about to type main(). Here are my four gate checks:
1. Function: main()
2. Prototype: not a prototype
3. Place: In between the prototypes and the other functions
4. Test: I correct and write int mainAnswer=square(i) rather than just (i). I now expect to see the squares of numbers 1 to 10.
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass.

What I did: Variable fixed, completed

Navigator only. Do not rewrite my code.
Review m5t2.cpp against this spec: main(); int square(int num) returns the
square; void printAnswerLine(int number, int squared) prints one line; output
is 10 lines, 1 to 10.
Format: a list of problems. Each item = line number + one sentence. If there
are no problems, say "Matches the spec."
[paste m5t2.cpp]

What I did: observed that i got "Matches the spec."

Ask me 3 short questions about my own m5t2.cpp. One about the return value of
square(). One about why printAnswerLine() is void. One about scope.
Ask one question at a time. Wait for my answer. Then tell me if I am right in
one sentence.

What I did: Answered 3 questions and went over the code again.
