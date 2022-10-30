from genericpath import isdir
import os

starters = {
    "LeetCode": "![LeetCode Stats](https://leetcode.card.workers.dev/khadesaurabh?theme=dark&font=source_code_pro&extension=activity&width=400&height=400)\n\n# LeetCode Solved Problems\n\n",
    "CodingNinjas": """"""
}

counter = {
    "LeetCode": {
        "Easy": 0,
        "Medium": 0,
        "Hard": 0
    },
    "CodingNinjas": {
        "Easy": 0,
        "Medium": 0,
        "Hard": 0
    }
}

for dir in os.listdir("./"):
    if isdir(dir) and not dir.startswith("."):
        file = starters[dir]
        for diff in ["Easy", "Medium", "Hard"]:
            file += f"## {diff}\n\n"
            code_files = os.listdir(f"./{dir}/{diff}")
            if dir == "LeetCode":
                code_files = sorted(
                    code_files, key=lambda x: int(x.split(".")[0]))

            for file_name in code_files:
                link = f'https://github.com/SaurabhKhade/CODING-deCODING/blob/master/{dir}/{diff}/{file_name}/'
                link = link.replace(" ", "%20")
                file += f"- [{file_name}]({link})\n"
            file += "\n"

            counter[dir][diff] = len(code_files)

        with open(f"./{dir}/README.md", "w") as f:
            f.write(file)

main_template = f"""<h1 align="center"> CODING deCODING </h1>

<p align="center">Coding questions solved by me.</p>

## For easier navigation and code searching, visit my [website](https://coding-decoding.vercel.app/)

### [&bull; Leetcode Problems](https://github.com/SaurabhKhade/CODING-deCODING/tree/master/LeetCode)
- **Easy : {counter['LeetCode']['Easy']}**
- **Medium : {counter['LeetCode']['Medium']}**
- **Hard : {counter['LeetCode']['Hard']}**

### [&bull; CodingNinjas](https://github.com/SaurabhKhade/CODING-deCODING/tree/master/Strivers%20SDE%20Sheet%20Problems)
- **Easy : {counter['CodingNinjas']['Easy']}**
- **Medium : {counter['CodingNinjas']['Medium']}**
- **Hard : {counter['CodingNinjas']['Hard']}**
"""

with open(f"./README.md", "w") as f:
    f.write(main_template)
