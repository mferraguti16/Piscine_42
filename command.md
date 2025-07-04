**command line**

***make a new directory***
```mkdir ex00```

***change directory***
```cd ex00```

***move up from the current directory***
```cd ..```

***move up from the current directory and go directly to an other one***
```cd ../ex01```

***create a file***
```touch testShell00```


**Vim functionnment**

***open the editing mode***
```vi testShell00```

***insert mode***
press ```i``` to enter insert mode and write content

***escape mode***
when you have finished writing, press ```ecs``` to leave the writing mod

***save and exit***
press ```:wq``` to save and exit vim

***readonly error***
do ```:wq!``` to force closure

***check file content***
```cat -e testShell00```
    the ```e``` option allow you to see any missing spaces or newline, so better than ```cat``` alone

check a pull of exos in the same time:
```cat -e *```