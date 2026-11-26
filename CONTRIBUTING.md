# Contributing

Thanks for wanting to improve **C Language Practice**! 🎉

## Ways to contribute

- 🐛 **Report a bug** — a program that does not compile or gives a wrong result
- ✍️ **Improve an explanation** — clearer wording helps everyone
- ➕ **Add a program** — new practice programs are very welcome
- 🌍 **Fix a typo** — in the code, comments or documentation

## Adding a new program

1. Fork the repository and create a branch:

   ```bash
   git checkout -b add-my-program
   ```

2. Name the file `Program NN.c`, where `NN` is the next free number.

3. Use the same layout as every other file in the repository:

   ```c
   // Write a program to do something useful

   #include <stdio.h>

   int main()
   {
       /* ... your code ... */

       return 0;
   }

   /*
   Explanation

   1. Short, numbered points that walk through each step.

   Complete Output

   Paste the real output of your program here.
   */
   ```

4. Follow the existing code style:

   - 4 spaces for indentation, no tabs
   - `main` should return `int` and end with `return 0;`
   - Give every variable a clear name
   - Keep comments in simple English

5. Make sure it builds **without warnings**:

   ```bash
   bash compile-all.sh
   ```

   Every file must print `OK`. If your program creates a file on disk, add that
   file name to `.gitignore`.

6. Record its expected output so CI can check it:

   ```bash
   bash run-tests.sh --update
   ```

   That writes `tests/cases/NN.test`. Open the file, check the output is what you
expect, and commit it with the program.

7. Open a pull request that describes what the program does.

## Pull request checklist

- [ ] The file is named `Program NN.c`
- [ ] The program compiles with `-Wall -Wextra` and no warnings
- [ ] An `Explanation` block is included at the bottom of the file
- [ ] The sample output in the explanation matches the real output
- [ ] A test case exists in `tests/cases/NN.test` and `bash run-tests.sh` passes
- [ ] The README program index has been updated

## Code of conduct

Be kind and patient. This is a learning repository, and everyone here is learning.
