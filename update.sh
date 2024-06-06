#!/usr/bin/env bash

# ## 👼 Watch me **BEAT THE LIVING HELL** out of my weakness _(Competitve Programming Style Problem Solving)_

echo "## 👼 Watch me **BEAT THE LIVING HELL** out of my weakness _(Competitve Programming Style Problem Solving)_" >README.md

echo "![image](https://github.com/amir-kedis/problem-solving-solutions/assets/88613195/fc08d456-bbef-4a51-b559-7324c46519e5)" >>README.md

echo "___" >>README.md

number_of_problems=$(git ls-files | grep -c .cpp)
echo "## 📈 Progress" >>README.md
echo "### Total Problems Solved: $number_of_problems" >>README.md
