
# invoked after dependencies are built

import sys
import shutil

SolutionDir = sys.argv[1]
OutDir = sys.argv[2]
Config = sys.argv[3]

GLFW = SolutionDir + "Dependencies\glfw\out\src"

shutil.copy(GLFW + "\\" + Config + "\glfw3.lib", OutDir)