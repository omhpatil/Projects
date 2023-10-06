---
title: "Git Cheat-sheet"
datePublished: Fri Oct 06 2023 09:46:44 GMT+0000 (Coordinated Universal Time)
cuid: clnef9iod001j0albccqud7ss
slug: git-cheat-sheet
cover: https://cdn.hashnode.com/res/hashnode/image/upload/v1696586102318/aa760001-92db-4f22-8744-06bb73d20e3a.avif

---

![](https://cdn.hashnode.com/res/hashnode/image/upload/v1696585585753/830c8a53-a7af-4d72-b1ca-3cfb6682e7b4.avif align="left")

Git is a version control (VCS) system for tracking changes to projects. These projects can be large-scale programs like the Linux kernel, but they can also be smaller-scale projects like your own R development, homework assignments, papers, or thesis.

![git logo](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/ba1u21ce1nyxxy8pqiwu.png align="left")

# Using Git

* to add name
    

**COPY**

```plaintext
git config --global user.name yourname
```

* to add email
    

**COPY**

```plaintext
git config --global user.email youremail@yourdomain.com
```

* to check name
    

**COPY**

```plaintext
git config --global user.name
```

* to check email
    

**COPY**

```plaintext
git config --global user.email
```

* to initialize an empty git repository
    

**COPY**

```plaintext
git init
```

* to show hidden files
    

**COPY**

```plaintext
ls - lart
```

* to create blank files
    

**COPY**

```plaintext
touch file_name
```

* to check the status of the file
    

**COPY**

```plaintext
git status
```

* to commit file
    

**COPY**

```plaintext
git commit
```

* to commit all files
    

**COPY**

```plaintext
git commit -a
```

* to add a file in the current repository
    

**COPY**

```plaintext
git add file_name
```

* to add all files
    

**COPY**

```plaintext
git add -A
```

\-to add a commit message

**COPY**

```plaintext
git commit -m "MESSAGE_HERE"
```

* to match with the last commit, i.e., to recover losses
    

**COPY**

```plaintext
git checkout file_name
```

* to match all files with the last git commit
    

**COPY**

```plaintext
git checkout -f
```

* to check all commits
    

**COPY**

```plaintext
git log
```

* to check last 'n' commits (n should be a number)
    

**COPY**

```plaintext
git log -p -n
```

* to get the difference between a working file and a staged file
    

**COPY**

```plaintext
git diff
```

* to get a list of the version history for the current branch.
    

**COPY**

```plaintext
ls
```

* to directly commit files (skip staging area)
    

**COPY**

```plaintext
git commit -a -m "MESSAGE_HERE
```

* to delete files
    

**COPY**

```plaintext
git rm file_name
```

* to remove files from staging area
    

**COPY**

```plaintext
git rm --cached file_name
```

* to get a summarized status
    

**COPY**

```plaintext
git status -s
```

* to create ignore files
    

**COPY**

```plaintext
touch .gitignore
```

* to add new branches to git
    

**COPY**

```plaintext
git branch branch_name
```

* to switch between branches
    

**COPY**

```plaintext
git checkout branch_name
```

* to restore the branch into the master branch
    

**COPY**

```plaintext
git checkout master
```

* to merge branches into master branch (user must be in master)
    

**COPY**

```plaintext
git merge branch_name
```

* to create a branch and directly switch into it
    

**COPY**

```plaintext
git checkout -b branch_name
```

* to add a remote git repository
    

**COPY**

```plaintext
git remote add URL_HERE
```

* to push the branch into a remote repository
    

**COPY**

```plaintext
git push repository_name branch_name
```

* to clone the repository into a local setup from a URL
    

**COPY**

```plaintext
git clone URL_HERE
```

* to get the remote URL from where the repository was cloned
    

**COPY**

```plaintext
git config --get remote.origin.url
```

* to unstage the file, but preserve the file contents
    

**COPY**

```plaintext
git reset file_name
```

* to undo all the commits after the specified commit and preserve the changes locally
    

**COPY**

```plaintext
git reset [commit]
```

* to discard all history and go back to the specified commit
    

**COPY**

```plaintext
git reset –hard [commit]
```

* to show the metadata and content changes of the specified commit
    

**COPY**

```plaintext
git show [commit]
```

Hope you find it helpful and informative!

> ***Do follow for more such blogs***
> 
> ***Feel free to comment down your thoughts or suggestions if any.***

1

### **Did you find this article valuable?**

Support **POOJA SANAP** by becoming a sponsor. Any amount is appreciated!

**Sponsor**[**Learn more about Hashnode Sponsors**](https://hashnode.com/sponsors)

[**GitHub**](https://poojasanap.hashnode.dev/tag/github?source=tags_bottom_blogs)[**Git**](https://poojasanap.hashnode.dev/tag/git?source=tags_bottom_blogs)[**Programming Blogs**](https://poojasanap.hashnode.dev/tag/programming-blogs?source=tags_bottom_blogs)[**Productivity**](https://poojasanap.hashnode.dev/tag/productivity?source=tags_bottom_blogs)[**cheatsheet**](https://poojasanap.hashnode.dev/tag/cheatsheet?source=tags_bottom_blogs)