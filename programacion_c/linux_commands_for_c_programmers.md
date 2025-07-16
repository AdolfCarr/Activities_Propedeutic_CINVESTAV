
# 🧰 Useful Linux Terminal Commands for C Programmers

## 🛠️ Development (Writing, Compiling, Debugging)

| Command | Description |
|---------|-------------|
| `gcc file.c -o output` | Compile a C file to an executable |
| `gcc file.c -o output -lm` | Link with math library |
| `make` | Use Makefile to compile large projects |
| `gdb output` | Launch the GNU debugger for the program |
| `valgrind ./output` | Check for memory leaks and errors |
| `strace ./output` | Trace system calls made by your program |
| `ldd ./output` | Show shared library dependencies |
| `objdump -d output` | Disassemble compiled binary |
| `nm output` | Show symbol table of object/binary |
| `time ./output` | Measure execution time of your program |

## 📁 File and Project Management

| Command | Description |
|---------|-------------|
| `touch file.c` | Create a new C file |
| `mkdir project` | Create a directory for your project |
| `rm file` | Remove a file |
| `rm -rf dir` | Remove a directory and its contents (use with care) |
| `cp file1 file2` | Copy a file |
| `mv old new` | Rename or move a file or folder |

## 🔍 Searching and Inspecting Code

| Command | Description |
|---------|-------------|
| `grep "main" file.c` | Search for `main` in a file |
| `find . -name "*.c"` | Find all C source files |
| `wc -l file.c` | Count lines in a file |
| `diff file1.c file2.c` | Compare two source files |
| `ctags -R` | Generate tags for code navigation |
| `cscope -Rbq` | Browse code using Cscope |

## 📚 Documentation & Help

| Command | Description |
|---------|-------------|
| `man gcc` | Manual for GCC |
| `man 3 printf` | Manual for `printf()` from the C standard library |
| `info gcc` | Detailed GNU info documentation |
| `gcc --help` | GCC command-line help |
| `apropos malloc` | Find man pages related to `malloc` |

## 🧪 Testing & Execution

| Command | Description |
|---------|-------------|
| `./output` | Run your compiled program |
| `chmod +x script.sh` | Make a script executable |
| `./script.sh` | Run a shell script |
| `clear` | Clear the terminal screen |
| `echo $?` | Get exit code of last command (useful for testing success/failure) |

## 🌐 Version Control (Git)

| Command | Description |
|---------|-------------|
| `git init` | Initialize a Git repository |
| `git add .` | Stage changes |
| `git commit -m "message"` | Commit with a message |
| `git status` | Check current Git status |
| `git diff` | View changes not yet staged/committed |

## 🧮 Common Linux Commands (General Usage)

| Command | Description |
|---------|-------------|
| `ls` | List directory contents |
| `ls -l` | Long listing format (detailed view) |
| `ls -a` | Show hidden files |
| `cd dir` | Change to directory `dir` |
| `pwd` | Show current working directory |
| `echo "text"` | Print text to the terminal |
| `cat file` | Display contents of a file |
| `less file` | View file one page at a time |
| `head file` | Show first 10 lines of a file |
| `tail file` | Show last 10 lines of a file |
| `tail -f file` | Continuously watch the end of a file (e.g., logs) |
| `whoami` | Display current user |
| `uname -a` | Show system information |
| `df -h` | Show disk space usage in human-readable format |
| `du -sh *` | Show size of files and directories |
| `top` | Display real-time process info |
| `ps aux` | Show all running processes |
| `kill PID` | Kill a process by PID |
| `chmod +x file` | Make a file executable |
| `chown user:group file` | Change ownership of a file |
| `tar -xvf file.tar` | Extract a tar archive |
| `tar -czvf file.tar.gz dir` | Create a compressed tar.gz archive |
| `scp file user@host:/path` | Securely copy file to remote host |
| `ssh user@host` | Connect to remote machine via SSH |
| `history` | Show command history |
| `alias ll='ls -l'` | Create a shortcut command |
| `clear` | Clear the terminal screen |
| `exit` | Exit the terminal session |

---

