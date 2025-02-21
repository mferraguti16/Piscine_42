**command line**

***Create a new directory***
```mkdir ex00```

Move up to the newly created directory:
```cd ex00```

Move up from the current directory:
```cd ..```

Move up from the current directory and go directly to the next one:
```cd ../ex01```

***Create a file***
```touch testShell00```

***Vim functionnment***

Edit the file using vi:
```vi testShell00```

Press ```i``` to enter insert mode and write content.

When you have finished writing, press ```ecs``` to leave the writing mod.

Press ```:wq``` to save and exit vim.

/!\ Sometimes, you can have a readonly error, just do ```:wq!``` to force the closure
W10: Warning: Changing a readonly file
E45: 'readonly' option is set (add ! to override)

***Check file content***
```cat -e testShell00```
    the ```e``` option allow you to see any missing spaces or newline, so better than ```cat``` alone

if you want to check a pull of exos in the same time:
```cat -e *```
