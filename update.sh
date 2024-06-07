#!/usr/bin/env bash

echo "## 👼 Watch me **BEAT THE LIVING HELL** out of my weakness _(Competitve Programming Style Problem Solving)_" >README.md

echo "![IMAGE-WITH_ETXT](https://github.com/amir-kedis/problem-solving-solutions/assets/88613195/4261855d-07b5-42a7-85cd-ec48c2cf3f9e)" >>README.md

echo "___" >>README.md

number_of_problems=$(find . -path './**/.cph' -prune -or -path './**/.git' -prune -o -type f -print | grep .cpp -c)
echo "## 📈 Progress" >>README.md
echo "### Total Problems Solved: $number_of_problems" >>README.md
