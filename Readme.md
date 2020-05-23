# Data Structures and Algorithms

This repository is for help learner who have dificuties in there **coursera's Data structure and algorithms\*** course.The quiz and all acepted programming homework will be here.
Maybe this repo help you lot.

### About this Specialization

This specialization is a mix of theory and practice: you will learn algorithmic techniques for solving various computational problems and will implement about 100 algorithmic coding problems in a programming language of your choice. No other online course in Algorithms even comes close to offering you a wealth of programming challenges that you may face at your next job interview. To prepare you, we invested over 3000 hours into designing our challenges as an alternative to multiple choice questions that you usually find in MOOCs. Sorry, we do not believe in multiple choice questions when it comes to learning algorithms...or anything else in computer science! For each algorithm you develop and implement, we designed multiple tests to check its correctness and running time — you will have to debug your programs without even knowing what these tests are! It may sound difficult, but we believe it is the only way to truly understand how the algorithms work and to master the art of programming. The specialization contains two real-world projects: Big Networks and Genome Assembly. You will analyze both road networks and social networks and will learn how to compute the shortest route between New York and San Francisco (1000 times faster than the standard shortest path algorithms!) Afterwards, you will learn how to assemble genomes from millions of short fragments of DNA and how assembly algorithms fuel recent developments in personalized medicine.

## Courses in this repository

- # [Algorithmic Toolbox](https://github.com/SohanR/Data-Structures-and-Algorithms/tree/master/Algorithmic%20Toolbox/)

The course covers basic algorithmic techniques and ideas for computational problems arising frequently in practical applications: sorting and searching, divide and conquer, greedy algorithms, dynamic programming. We will learn a lot of theory: how to sort data and how it helps for searching; how to break a large problem into pieces and solve them recursively; when it makes sense to proceed greedily; how dynamic programming is used in genomic studies. You will practice solving computational problems, designing new algorithms, and implementing solutions efficiently (so that they run in less than a second).

- ## week 1

  # [Programming Challenges](https://github.com/SohanR/Data-Structures-and-Algorithms/tree/master/Algorithmic%20Toolbox/Week%2001)

  ## Assignments

  - ### [1-1:Sum of Two Digits](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2001/aplusb.cpp)
  - ### [1-2: Maximum Pairwise Product](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2001/maximum_pairwise_product.cpp)

* ## Week 2

  # [Algorithmic Warm-up](https://github.com/SohanR/Data-Structures-and-Algorithms/tree/master/Algorithmic%20Toolbox/Week%2002)

  ## Assignments

  - ### [2-1: Fibonacci Number ](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/fibonacci.cpp)
  - ### [2-2: Last Digit of a Large Fibonacci Number](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/fibonacci_last_digit.cpp)
  - ### [2-3: Greatest Common Divisor](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/gcd.cpp)
  - ### [2-4: Least Common Multiple](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/lcm.cpp)
  - ### [2-5: Fibonacci Number Again](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/huge_fibonacci.cpp)
  - ### [2-6: Last Digit of the Sum of Fibonacci Numbers](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/fibonacci_sum.cpp)
  - ### [2-7: Last Digit of the Sum of Fibonacci](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/fibonacci_partial_sum.cpp)
  - ### [2-8: Last Digit of the Sum of Squares of Fibonacci Numbers](https://github.com/SohanR/Data-Structures-and-Algorithms/blob/master/Algorithmic%20Toolbox/Week%2002/fibonacci_sum_of_squares.cpp)

* # Data Structure

  A good algorithm usually comes together with a set of good data structures that allow the algorithm to manipulate the data efficiently. In this course, we consider the common data structures that are used in various computational problems. You will learn how these data structures are implemented in different programming languages and will practice implementing them in our programming assignments. This will help you to understand what is going on inside a particular built-in implementation of a data structure and what to expect from it. You will also learn typical use cases for these data structures. A few examples of questions that we are going to cover in this class are the following: 1. What is a good strategy of resizing a dynamic array? 2. How priority queues are implemented in C++, Java, and Python? 3. How to implement a hash table so that the amortized running time of all operations is O(1) on average? 4. What are good strategies to keep a binary tree balanced? You will also learn how services like Dropbox manage to upload some large files instantly and to save a lot of storage space!

- # Algorithms on Strings

World and internet is full of textual information. We search for information using textual queries, we read websites, books, e-mails. All those are strings from the point of view of computer science. To make sense of all that information and make search efficient, search engines use many string algorithms. Moreover, the emerging field of personalized medicine uses many search algorithms to find disease-causing mutations in the human genome

- # Advance Algorithms and Complexity

You've learned the basic algorithms now and are ready to step into the area of more complex problems and algorithms to solve them. Advanced algorithms build upon basic ones and use new ideas. We will start with networks flows which are used in more typical applications such as optimal matchings, finding disjoint paths and flight scheduling as well as more surprising ones like image segmentation in computer vision. We then proceed to linear programming with applications in optimizing budget allocation, portfolio optimization, finding the cheapest diet satisfying all requirements and many others. Next we discuss inherently hard problems for which no exact good solutions are known (and not likely to be found) and how to solve them in practice. We finish with a soft introduction to streaming algorithms that are heavily used in Big Data processing. Such algorithms are usually designed to be able to process huge datasets without being able even to store a dataset.

- # Genome Assembly Programming Challenge

In Spring 2011, thousands of people in Germany were hospitalized with a deadly disease that started as food poisoning with bloody diarrhea and often led to kidney failure. It was the beginning of the deadliest outbreak in recent history, caused by a mysterious bacterial strain that we will refer to as E. coli X. Soon, German officials linked the outbreak to a restaurant in Lübeck, where nearly 20% of the patrons had developed bloody diarrhea in a single week. At this point, biologists knew that they were facing a previously unknown pathogen and that traditional methods would not suffice – computational biologists would be needed to assemble and analyze the genome of the newly emerged pathogen. To investigate the evolutionary origin and pathogenic potential of the outbreak strain, researchers started a crowdsourced research program. They released bacterial DNA sequencing data from one of a patient, which elicited a burst of analyses carried out by computational biologists on four continents. They even used GitHub for the project: https://github.com/ehec-outbreak-crowdsourced/BGI-data-analysis/wiki The 2011 German outbreak represented an early example of epidemiologists collaborating with computational biologists to stop an outbreak. In this Genome Assembly Programming Challenge, you will follow in the footsteps of the bioinformaticians investigating the outbreak by developing a program to assemble the genome of the E. coli X from millions of overlapping substrings of the E.coli X genome.
