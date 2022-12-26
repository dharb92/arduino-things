# Useful Arduino Libraries, Utilities and Examples

## Libraries and utilities

A collection of libraries you can use in new projects.

### Usage

Clone this repo and create a symlink for each library you want to be able to use in Arduino IDE

> If we can find a better way to do this we should document it here. For example automatically creating symlinks for all libraries using a script.

Windows Powershell
```
New-Item -Path ~\Documents\libraries\[LIB_NAME] -ItemType SymbolicLink -Value <Repo Dir>\libs\[LIB_NAME]
```

For example
```
New-Item -Path C:\Users\dean\Documents\Arduino\libraries\new_library -ItemType SymbolicLink -Value C:\Projects\Arduino\arduino-things\libs\new_library
```

#### Examples

Examples of how to use the libraries individually or together with other libraries.