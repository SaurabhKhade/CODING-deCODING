import fs from "fs";

export default function ListExtracter(filePath) {
  const fileContents = fs.readFileSync(filePath, "utf8");
  let lines = [];
  let line = "";
  for (let char of fileContents) {
    if (char == "\n") {
      lines.push(line);
      line = "";
    } else {
      line += char;
    }
  }

  let list = {
    Easy: [],
    Medium: [],
    Hard: [],
  };
  let currentGoing = "Easy";

  for (let line of lines) {
    if (line.includes("Easy")) currentGoing = "Easy";
    else if (line.includes("Medium")) currentGoing = "Medium";
    else if (line.includes("Hard")) currentGoing = "Hard";

    if (line.startsWith("-")) {
      list[currentGoing].push(line);
    }
  }

  for (let difficulty in list) {
    for (let i = 0; i < list[difficulty].length; i++) {
      line = list[difficulty][i];
      let j = 0;
      let name = "";
      let url = "";
      while (line[j] != "[") j++;
      for (++j; line[j] != "]"; j++) name += line[j];

      while (line[j] != "(") j++;
      for (++j; line[j] != ")"; j++) url += line[j];

      list[difficulty][i] = {
        name,
        url,
      };
    }
  }

  return list;
}
