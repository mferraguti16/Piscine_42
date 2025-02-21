ex01: testShell00.tar ✅

**1- Checking File Permissions**

To check the current permissions of a file:
```ls -l```

Example output:
```-r--r-xr-x  1 Mathilde  staff     40  1 Jul  2022 testShell00```

Breaking down the permissions:
```      U       G       O                                        ``` 
```- | r - - | r - x | r - x                                      ```
```↑   ↑       ↑       ↑                                          ```
```|   |       |       └── Others                                 ```
```|   |       └────────── Group                                  ```
```|   └────────────────── User (You)                             ```
```└────────────────────── File Type (File, Directory, Link, etc.)```

**2- Understanding Numeric Values for Permissions**

Each permission has a numeric value:
Read (r) = 4
Write (w) = 2
Execute (x) = 1

Each category (User, Group, Others) is assigned a sum of these values.

Examples of Permission Combinations:

Permissions                     Numeric Value
```r-- (read only)                     4            ```
```rw- (read + write)                  4 + 2 = 6    ```
```r-x (read + execute)                4 + 1 = 5    ```
```rwx (full permissions)              4 + 2 + 1 = 7```

When using chmod, you specify three numbers (one for each category: User, Group, Others)

/!\ Using the Mnemonic UGO to remember the permission order (User, Group, Others).

For example, if you want to give yourself (the user) full permissions, but keep group and others as read-only:
```chmod 744 testShell00```

New permissions:
```-rwxr--r--  1 Mathilde  staff     40  1 Jul  2022 testShell00```

Breakdown:
```U  G  O = User Group Other```
```- r w x  r - -  r - -     ```
```   U=7    G=4    O=4      ```

**3- Add 40 Bytes to the File**

*First Method (Manually)* :
Write exactly 39 characters, since the 40th byte is the newline character (\n).

Example output:
```A simple storage folder for documents!!$```

➜  ex01 git:(main) ✗ ls -l
```-r--r-xr-x  1 Mathilde  staff     40 21 fév 17:22 testShell00```

*Second Method (Artificially)* :
```truncate -s 40 testShell00```

Example output:
```A simple storage```

➜  ex01 git:(main) ✗ ls -l
```-r--r-xr-x  1 Mathilde  staff     24 21 fév 17:24 testShell00```

```truncate -s 40 testShell00```

➜  ex01 git:(main) ✗ ls -l
```-r--r-xr-x  1 Mathilde  staff     40 21 fév 17:24 testShell00```

➜  ex01 git:(main) ✗ cat -e testShell00
```A simple storage folder$          ```
```^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@% ```

empty bits to artificially fill up the file :
```^@```

**2- Changing the Timestamp**

Use the touch command:
```touch -t 06012342 testShell00```

This sets the timestamp using the MMDDhhmm format:

06 → June

01 → 1st

23 → 23:42 (11:42 PM)

3 - Finalizing File Permissions

At the end, set the required read-only permissions:

chmod 444 testShell00

Final permissions:

-r--r--r-- 1 Mathilde staff 40 Jun 1 23:42 testShell00
