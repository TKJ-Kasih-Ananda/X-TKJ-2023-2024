Type data <
    Name: char [40]
>
score: integer
constant max ← 5
dictionary student: data[max]

algorithm
    i traversal [1..max]
        output("student ", i)
        input(student[i].name)
        input(student[i].score)

    i traversal [1..max]
        output("student", i)
        output(student[i].name)
        output(student[i].score)
