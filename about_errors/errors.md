# Sources of errors

- **Poor specifi cation**:
  - If we are not specifi c about what a program should do, we are unlikely to adequately examine the “dark corners” and make sure that all cases are handled (i.e., that every input gives a correct answer or an adequate error message).
- **Incomplete programs**:
  - During development, there are obviously cases that we haven’t yet taken care of. That’s unavoidable. What we must aim for is to know when we have handled all cases.
- **Unexpected arguments**:
  - Functions take arguments. If a function is given an argument we don’t handle, we have a problem. An example is calling the standard library square root function with –1.2: sqrt(–1.2). Since sqrt() of a double returns a double, there is no possible correct return value. §5.5.3 discusses this kind of problem.
- **Unexpected input**:
  - Programs typically read data (from a keyboard, from fi les, from GUIs, from network connections, etc.). A program makes many assumptions about such input, for example, that the user will input a number. What if the user inputs “aw, shut up!” rather than the expected integer? §5.6.3 and §10.6 discuss this kind of problem.
- **Unexpected state**:
  - Most programs keep a lot of data (“state”) around for use by different parts of the system. Examples are address lists, phone directories, and vectors of temperature readings. What if such data is incomplete or wrong? The various parts of the program must still manage. §26.3.5 discusses this kind of problem.
- **Logical errors**:
  - That is, code that simply doesn’t do what it was supposed to do; we’ll just have to fi nd and fi x such problems. §6.6 and §6.9 give examples of fi nding such problems.
