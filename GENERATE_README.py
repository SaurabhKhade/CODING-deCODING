print("Its Precommit")

with open("./re.py", "w") as f:
    f.write("Its Precommit")

# from genericpath import isdir
# import os

# starters = {
#     "LeetCode": "![LeetCode Stats](https://leetcode.card.workers.dev/khadesaurabh?theme=dark&font=source_code_pro&extension=activity&width=400&height=400)\n\n# LeetCode Solved Problems\n\n",
#     "Strivers SDE Sheet Problems": """"""
# }

# for dir in os.listdir("./"):
#     if isdir(dir) and not dir.startswith("."):
#         file = starters[dir]
#         for diff in ["Easy", "Medium", "Hard"]:
#             file += f"## {diff}\n\n"
#             code_files = os.listdir(f"./{dir}/{diff}")
#             if dir == "LeetCode":
#                 code_files = sorted(
#                     code_files, key=lambda x: int(x.split(".")[0]))

#             for file_name in code_files:
#                 link = f'https://github.com/SaurabhKhade/CODING-deCODING/blob/master/{dir}/{diff}/{file_name}/'
#                 link = link.replace(" ", "%20")
#                 file += f"- [{file_name}]({link})\n"
#             file += "\n"

#         with open(f"./{dir}/README22.md", "w") as f:
#             f.write(file)
