-- SQLite lab starter script
-- This file is ready to run with the VS Code SQL task.

DROP TABLE IF EXISTS students;

CREATE TABLE students (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL,
    age INTEGER,
    course TEXT
);

INSERT INTO students (name, age, course) VALUES
    ('Aman', 19, 'AI/DS'),
    ('Riya', 20, 'AI/DS'),
    ('Karan', 18, 'CSE');

SELECT * FROM students;
