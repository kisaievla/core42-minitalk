# MINITALK
**The purpose of this project is to code a small data exchange program using UNIX signals**
## Task
Creating a communication program in the form of a client and a server.

Server is launched at first and will print its **PID**.
The client takes as parameters, the server **PID** and a string to send.

We can only use the `SIGUSR1` and `SIGUSR2` signals.

The server acknowledges the message received by sending back a signal to the client.
Unicode characters _partially_ supported.

### Allowed `signal.h` functions
+ signal
+ sigemptyset
+ sigaddset
+ sigaction
+ kill
+ getpid
