Scripts
=======

* Extremely simple scripts to perform a few shortcut operations

* To use any of them in your system:
  * Clone this git repository
    
    `git clone https://github.com/ARulzz/Scripts.git`
  * Move to this repository
    
    `cd Scripts`
  * Say, you want to add the command `cmd` to your PC, then move into it's folder
    
    `cd cmd`
  * Copy the bash script file to `/usr/bin/` folder
    
    `sudo cp cmd /usr/bin/`
  * To avail it's man file, move it to `man1` folder
    
    `sudo cp cmd.1.gz /usr/local/share/man/man1/`
  
  That's it! You're all set to go. Type `man cmd` in your terminal to know how to use the command!
  
* Ps, you can also edit your man file before copying it to the `man1` folder by:
  * First unzip the man file
    
    `gunzip cmd.1.zip`
  * Edit the file `cmd.1` using your preferred editor (say, nano)
    
    `nano cmd.1`
  * Save it, and zip it again
    
    `gzip cmd.1`
  
  Now, you can continue to move it to `man1` folder. 

*Please note, some of the scripts are written entirely based on the file locations in my PC. Go through the scripts to add the necessary modifications so that it will work perfectly on your PC as well.*
