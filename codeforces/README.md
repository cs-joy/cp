# How to come up with the solutions: techniques

As I work with students I often face the situation when if a problem doesn't seem clear to a student at the first sight, it makes them unable to solve it. Indeed, you always hear about specific methods and techniques. But you don't hear about how to think in order to apply them. In this note I'll try to sum up my experience of solving programming contest problems. However, some pieces of advice will also be applicable for olympiads in mathematics and your first steps in academic research.

So you've read a problem and you don't know how to solve it. Try the following techniques, some of them can often come handy.

## Technique 1: "Total Recall"
Try to remember some similar problems that you had to solve. Quite many problems do not have a brand new idea. So probably, you can use your experience of solving a similar problem to solve this one.

## Technique 2: "From Specific to General"
Let's say that you've found the solution for the problem (hurray!). Let's consider some particular case of a problem. Of course, you can apply the algorithm/solution to it. That's why, in order to solve a general problem, you need to solve all of its specific cases. Try solving some (or multiple) specific cases and then try and generalize them to the solution of the main problem. Such specific cases can be regarded as the simplifications of the problem, i.e. we can reason by the following principle: "if I don't know how to solve a complex problem, I think I'll simplify it and find the solutions of the simplified version".

> The popular examples of simplifications (specific cases):

1. you get a problem for a tree. Consider its variant where the tree degenerates into a path;
2. the problem has weights? Consider a variant where all the weights are equal either to one or to an arbitrary number, or there are only two distinct weights (and so on).

Note that the solution of a specific case almost always isn't easier than the solution of a general one, so you need to try and find a solution that would be as easy and effective as possible.

## Technique 3: "Bold Hypothesis"
Don't be shy of making bold hypotheses that seem true to you. You do not have to prove your solutions during contests, tap your inner intuition. When you've come up with your hypothesis, try to prove it — it may either work out well or give you an idea of how to disprove it. Do test the hypothesis on a wide set of tests as it would be a pain to waste time on implementing a solution based on a hypothesis and only after that disprove the hypothesis.

> Examples:

1. the solution always exists;
2. item the number of states isn't large.

## Technique 4: "To solve a problem, you should think like a problem"
I'm serious, put yourself in the shoes of the character of the problem, imagine that it's your job to handle the input sets. Think about how you'd act in this case. Try to process some small samples on your own. If the problem is about a game, play it. Sometimes I try to visualize a process or a model for better understanding. It's a little like how movies show the way scientists think. Try to think in images, imagine the solution, see it unfolding.

## Technique 5: "Think together"
This technique is only applicable to team contests. In group of two or three persons start saying some clear facts about the problem. For example: "if n is even, then the answer is always 0", "if n is prime, then the solution should go like that", and so on. Sometimes your teammates will pick up ideas and develop them and this strategy can get you through the problem.

## Technique 6: "Pick a Method"
Try coming through popular algorithms or methods that can apply to the problem in any way. It is useful to see the problem limits. Having picked a method, try thinking on the solution assuming that the problem is solved using this method. Your reasonings should be somewhat like this: "Let's assume that the problem is solved by divide and conquer. Then let us solve this problem recursively for the left and right half. Now all that's left is to find a way to unite these solutions. I wonder how we can do that..."

## Technique 7: "Print Out and Look"
Quite often (especially in problems with a small input: one/two numbers) there are some patterns in the composition of the solution. To see a pattern, you sometimes need to write some naive method of solving a problem, generate answers for a large number of tests on large limits and meditate on your answers for a while. In order not to keep the computer busy, a good strategy is to print out the acquired results and meditate this time on the print outs.

Sometimes it is a good idea to print not only the answer, but also some extra information, such as a manner of acquiring a solutions.

## Technique 8: "Google"
This technique can only be used if the round/contest rules allow it. If the problem is about sequences, then you can look for solutions (see technique 7) on the site https://oeis.org/. It helps to understand the formal model of the problem and google the correct mathematical terms.


### REF ::
1. [Codeforces-Topic](https://codeforces.com/topic/20633/en3)
2. [Quora](https://www.quora.com/What-is-the-most-interesting-problem-solving-technique-or-trick-in-programming-contest)
3. [Codeforces-blog](https://codeforces.com/blog/entry/20548)
