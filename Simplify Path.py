# https://leetcode.com/problems/simplify-path/


class Solution:
    def simplifyPath(self, path: str) -> str:

        DIR = path.split("/")[1:]
        L = list()

        for directory in DIR:

            if directory == "." or directory == "":
                continue

            elif directory == "..":

                if len(L) != 0:
                    L.pop()

            else:

                L.append(directory)

        return "/" + "/".join(L)
