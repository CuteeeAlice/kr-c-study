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

// C Language Study Log

// Reason for starting C.
// While casually talking with GPT about worldbuilding and philosophy,
// we somehow ended up talking about the C language.
// Through that conversation, I began to understand the concept of C.
//
// I understood C as something like unassembled LEGO blocks.
// Compared to languages like Python or Java, which use the same LEGO concept,
// C is like having only the most basic 2-stud blocks,
// yet being able to create infinite possibilities with them.
// Python and Java, on the other hand, feel like languages that provide
// 3-stud blocks, L-shaped blocks, square blocks, circular blocks, etc.,
// allowing you to build many things with fewer, more specialized pieces.
//
// In the end, the essence of programming is the same:
// using a computer language to create something.
// The difference is whether you build everything yourself,
// or rely on parts that many people commonly use,
// which are already defined to make things more convenient.

// After many days passed, I was playing a game and happened to see
// a Discord server template.
// It felt a bit empty with just the template, so I thought,
// “What if I add a bot?”
//
// With GPT’s help, I successfully created and deployed
// a Discord music bot using Python.
// During that process, even though I didn’t fully understand the code,
// I started to infer its structure by reading the comments.
// Breaking the code down into natural language made me think,
// “Wow, this is actually fun.”
//
// The reason I chose C instead of continuing with Python was this:
// I don’t plan to become a professional developer,
// so did I really need to deeply learn Python?
// Python is convenient in daily life, and there are many situations
// where it would be useful,
// but most things I need aren’t very complex.
// Those can be handled with AI.
// What I really wanted was to understand the fundamentals,
// so I chose C.

// From here, I began learning C.
// The very first step was translating the following code line by line.

#include <stdio.h> // stdio.h is a header.
// In natural language, I think of it as a toolbox that contains tools.
// To use the printf tool, I include the stdio toolbox
// using the include command.

int main() { // This opens a space called main using {}.
// Inside this space, I define what main should do.

    printf("hello world");
    // printf is a command that tells the program to output something.
    // The contents inside the parentheses are what should be printed.
    // Quotation marks and commas are used to explain how the output should look.
    // The semicolon acts like a period at the end of a sentence.

    return 0;
    // This signals normal termination.
    // Return can be used in many ways, and it does more than just this,
    // but for now, I understand and use it only as a normal exit signal.
    // Even though I don’t fully understand return values yet,
    // I decided to use it anyway to complete the code.
    // Once I understand it properly,
    // I plan to experiment with non-zero values like return 1.
}

// By translating the code above into natural language line by line,
// I began to understand what each part of the code does
// and started using it based on that understanding.
// Usually, people first learn what C is and what its purpose is,
// and then learn this code,
// but since I already had a rough sense of what C is,
// I jumped straight into coding examples.

// While translating examples into natural language,
// I repeatedly asked the AI whether my understanding was correct,
// going through a process of continuous correction.

// The above is the record up to 2025.12.12.

// From the basics, I learned that int is used to define integers.
// Although it can have other meanings,
// so far I mainly use int to define integers
// and when opening and closing the main function.
// I learned that char is used to define characters,
// and that using [] allows strings.
// I also learned that characters use single quotes,
// while strings use double quotes.

// By learning if statements, I learned about conditions.
// I learned how to use symbols like >, <, ==, >=, <=, !=
// as well as else if and else.
// However, I can currently only implement simple cases.
// I know that I should eventually be able to handle complex structures
// like if inside if inside if,
// but I’m not used to it yet.
// I plan to get comfortable with this gradually
// by creating many examples.

// I learned about scanf,
// but for now I only know how to use it to read integers.

// int a;
// scanf("%d", &a);

// I can only use it at about this level,
// and using it in more complex expressions like
// if(scanf(printf(if ...))) is still difficult for me.

// The CUTECATCAFE example was created by thinking about
// how to combine what I had learned so far into a single program.
// I typed the code in MS Visual Studio,
// ran build simulations with GPT to catch mistakes
// like missing semicolons or quotation marks,
// then built it directly in MSVS,
// confirmed that it worked correctly,
// and finally uploaded it to GitHub.

// When getting feedback from GPT,
// my understanding of concepts often expanded.
// I accepted and applied those concepts directly to my code.
// However, I never used code that I hadn’t learned yet
// or didn’t understand why it worked.

// GPT often suggests code using things like char*,
// int main(void), or void,
// which I have seen before but don’t fully understand.
// I deliberately chose not to use those.

// Record from 2025.12.12 ~ 2025.12.14.

// I wanted to read a novel,
// but coding in C was so fun that I couldn’t focus on the book...
// I told myself I’d stop coding and read,
// lay down on my bed, read a couple of pages,
// then suddenly thought,
// “This might work as if(){ if()... }”
//
// I thought, “Should I try it?”
// sat back down at my computer,
// and started writing code step by step with GPT.
// And it worked...ㅠ

// In the spaceship launch checklist,
// I tried nesting if statements by myself for the first time,
// without directly relying on GPT.
// After finishing the code, I thought,
// “Wait… if the conditions aren’t met, nothing gets printed.”
//
// I felt like it should display something,
// so I started writing if(condition where one or the other is false).
// GPT then told me that my if statement hadn’t ended yet,
// so it shouldn’t be another if, but an else.
//
// I looked at my code again and realized
// it ended as if → if → else → return.
// “Oh… that’s true.”
// But then I struggled to figure out
// which closing brace the else should attach to.
// With nested ifs, everything got confusing.
// I spent a long time thinking about it…ㅠ
// Then I thought, “What if I just try putting it here?”
// I added else { printf(...) },
// and when it built successfully, I literally shouted.

// That took exactly one hour.
// Since I’ve now used nested if statements,
// the structure still doesn’t jump out at me immediately,
// so for a while I plan to make similar examples
// until the structure becomes familiar.

// Previously, I defined integers with different values
// using separate variable names.
// GPT taught me that variables with the same meaning
// but different values can be defined like this:
//
// int price[3] = {1000, 2000, 3000};
//
// and that they can be accessed starting from price[0],
// then [1], [2], and so on.

// Now I feel really happy knowing that
// I can write cleaner code
// for variables that share the same meaning
// but have different values.
