# All content below was translated from Korean to English with the help of ChatGPT.

# This is not a manual.

This document is a personal study log created to record  
the emotions I felt, the thoughts that came to mind,  
and the experiences I went through while learning C,  
so that one day I can look back and think,  
“Ah, this is what I was thinking back then.”

For information about the structure of this GitHub repository,  
please refer to `INFO.md`.

---

# I am not self-studying C.

My C language teacher is **ChatGPT**.  
Rather than receiving formal instruction,  
I learn by asking questions and absorbing the explanations provided.

Because of this, all code in this repository  
may carry some **resonance (or “aftertaste”)**  
of my conversations with my ChatGPT teacher.

// Record from 2025.12.15 ~ 2025.12.16.

// I learned about struct and for.
// Struct was easy to understand.
// I had often thought,
// “It’s annoying to define things one by one—
// wouldn’t it be nice if I could do it all at once?”
//
// When I saw code that lets you group definitions
// that share the same meaning but have different values,
// I understood it almost immediately.
// The syntax itself wasn’t particularly complicated.
// It felt like:
// first, you create a template with struct,
// then later you just define things using that template.
//
// The downside is that variable names get very long.
// Typing them can be tiring.
// For very simple cases it’s fine,
// but when both the template name and the variable names inside it are long,
// you sometimes end up accessing things like
// aaaaaaaaaa.bbbbbbbb,
// which can be annoying.
// Other than that, it feels very good.
// I haven’t made an example using struct yet,
// but if an idea comes up, I plan to try it right away.

// I learned for loops,
// but I still don’t quite have a clear sense of how to use them.
//
// for(int a = 0; a >= 10; a++)
//
// I definitely learned this,
// but because I stopped studying that day before it fully clicked,
// I ended up forgetting it.
// At this point, I can’t translate it into natural language anymore.
// I’ll need to relearn this part,
// but for now, I honestly don’t really understand it…ㅠ

// The reason I hadn’t been making many examples
// was that I kept running into syntax mistakes while writing code.
// Not simple typos like missing semicolons, quotation marks, commas,
// or mistyping printf / scanf,
// but actual grammar mistakes.
// Even though these were things I had already learned,
// I kept thinking,
// “Was this how it worked?”
// “Is this how you write it?”
// So for now, I’m focusing mainly on practicing syntax.

// Especially when nesting if statements twice in a row,
// my intended logic is clear in my head,
// but the braces make everything extremely confusing.
// A compiler would probably format the braces with tabs,
// making things easier to read,
// so the confusion would be less.
// Right now, though, I’m not in a situation
// where I need to build and run code immediately,
// so I’m often just typing in a text editor or directly in an AI app.
// Still, if I want to get used to a compiler,
// I probably should just keep coding in one.
// I’m not sure.
//
// For now, my immediate goals are:
// being able to write 30 nested if statements at once without syntax errors,
// and practicing by replacing variable names and contents with “...”
// just to focus on grammar.
// Something like:
//
// int ...;
// char ...;
// printf(...);
// if(...) { printf(...); }
// else if(...) { ... }
// else { ... }
//
// I plan to keep practicing like this,
// leaving the content empty
// and focusing only on correct structure.
//
// Record from 2025.12.17 ~ 2025.12.19.

// I didn’t do much for a while because I felt lazy.
// It’s not that I did nothing at all,
// but I mostly just rewrote code I had already learned,
// practicing so that I wouldn’t make mistakes when writing syntax.
// Even so, I still forget semicolons
// and leave out quotation marks.
// GPT says these are mistakes every developer makes,
// but I still want to reduce how often they happen.
// So I kept practicing grammar,
// and didn’t really learn anything new.

// As nested if statements kept appearing,
// GPT introduced switch.
// It didn’t seem very difficult,
// so I tried learning it.
// It definitely feels very convenient in certain situations,
// but I also felt that those situations
// don’t come up very often.
// Even when ordering at a café,
// you usually say the menu name,
// not the menu number.
// Still, I tried using switch
// to refactor or rewrite some of my existing code,
// and it turned out pretty well.

// I tried a bit harder to understand for loops.
// As a result, I now have a rough sense of how to use them.
// I also learned how to store integer values inside a for loop,
// which felt extremely useful.
// That said, since the syntax still isn’t fully familiar,
// I feel like I’ll definitely make syntax mistakes
// the next time I try to use it.

// While building and running code,
// everything happens so instantly
// that it started to feel a bit unnatural.
// I thought,
// “What if I add delays between certain branches?”
//
// That led me to discover Sleep in the Windows header.
// As expected, I ran into an error
// because I used a lowercase s instead of an uppercase S.
// GPT told me that this is a very common mistake
// when using OS functions for the first time.
// Learning new headers still feels burdensome,
// but Sleep was very simple to use,
// so I understood it almost immediately.
// For now, I plan to focus again on grammar practice
// to really make everything I’ve learned my own.
//
// Record from 2025.12.26.

// Over the past 3–4 weeks,
// I worked through input/output, operations,
// conditionals, loops, and array problems
// on Baekjoon and Programmers.
// I learned a lot of different things.
//
// What confused me about Baekjoon was that
// some array problems were accepted
// even if I didn’t actually use arrays.
// Out of curiosity, I tried solving other problems
// by producing the correct output
// without using the required functions,
// but those weren’t accepted.
//
// That made me realize that,
// at the learning stage,
// as long as I can produce the correct result
// for the program’s purpose,
// whether I hard-code it
// or take a completely unconventional approach
// doesn’t matter much for my mental health.
// It is kind of funny to reach the correct answer
// through a strange process instead of the standard one,
// but I also thought that it might give people
// who only follow textbook solutions
// a realization like,
// “Oh, you can solve it this way too.”
//
// So I decided that,
// just like I’ve been doing so far,
// I’ll first focus on producing the required output in my own way,
// then compare it with the standard approach
// and learn from that.
// I keep saying this,
// but since I’m learning C as a hobby,
// I’ll continue studying in whatever way feels fun.

// What I learned over those 3–4 weeks:
//
// In the IDE, I kept running into VLA issues,
// so I had no choice but to learn
// how to create arrays using malloc.

// I gained a vague understanding of pointers.
// It’s not perfect.
// I could be wrong.

// I tried separating logic.
// Previously, I put all code inside int main
// and built it that way.
// This time, I separated things like view (presentation)
// and print (output),
// and then called view and print from main.

// I learned about function parameters.
// When looking at other people’s code,
// I often saw things like main(void),
// or parameters like int x or char* y[],
// and I was curious about
// what you could actually do with parameters.
//
// After asking GPT and Gemini for a long time,
// I finally understood.
// The reason it took me so long
// was that I had always run code
// through compile → build in the IDE.
// To use function parameters,
// you need to pass them when executing the file directly in the terminal.
// Even when the AIs explained it,
// I couldn’t understand for a long time.
//
// If a future beginner asks
// why function parameters exist,
// I think the first thing that needs explaining
// isn’t what function parameters are,
// but the difference between
// running code via IDE build
// and directly executing an EXE file.

// Subjectively, I think my learning progress looks like this:
// Loops: absolute beginner → lower-intermediate
// Conditionals: absolute beginner → lower-intermediate
// Arrays: absolute beginner of beginners → absolute beginner
//
// My definition of learning stages:
// knows nothing <
// [absolute beginner of beginners, absolute beginner, beginner, lower-intermediate] <
// intermediate < advanced < expert <<< hacker

// What I’ll probably practice next:
// getting comfortable using function parameters naturally;
// using loops and conditionals
// with more natural logical structures;
// and studying pointers deeply enough
// that I can explain what they are in detail,
// not just vaguely.
//
// Anyway!!
// There’s still so, so much to learn…
//
// Record from 2026.01.18.
