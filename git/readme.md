# snippets/git

`git-real-empty-commit-if-initial-ed2311748428d60a40d740227db8002a49a41d94.sh`

initial commit 으로 위 파일을 실행했을 경우 (no parent commit, 즉 또는 `--orphan`) commit object 의 내용은 다음과 같게 됩니다.

```
$ git cat-file -p ed2311748428d60a40d740227db8002a49a41d94
tree 4b825dc642cb6eb9a060e54bf8d69288fbee4904
author nobody <noreply@example.com> 0 +0000
committer anonymous <example@example.com> 1234567890 +0000

```

tree object 는 비어 있습니다.

```
$ echo -ne "tree 0\x00" | sha1sum
4b825dc642cb6eb9a060e54bf8d69288fbee4904 *-
```
