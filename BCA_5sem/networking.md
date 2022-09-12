# Networking

#### Note 
It's all gonna be in english, Not because english is an international language bla bla bla... but because as we are in this field we scrap websites to learn stuff's and all of them are in english, So it is good to make it a habit.

## OSI Model
- In simple words OSI model is just a logical model for how system are supposed to communicate to each other. 
- When we break down the network communication into different layers it forms a OSI model.

- You may heared of physical layer. Physical layer is all the wiring, All the physical stuff required to connect computer together.
- Then comes data link layer. It is where switching occurs, All the switches that you plug your computer into.
- And so on. Basically OSI model is just 7 logical layers that allows you to think about a networking communication from starting to end.
- Breaking down the model into 7 layers is important because when an error occured we can easily figure out, ohh it a session layer issue or its a transport layer issue etc...

#### Lets understand each layer
###### 1. Physical Layer
###### 2. Data Link Layer
###### 3. Network Layer
###### 4. Transport Layer
###### 5. Session Layer
###### 6. Presentation Layer
###### 7. Application Layer

- My requrest is to imagine it like a real world communication Because we will learn OSI like a story...

##### 1. Physical Layer
Our goal is to make a communication between computers, So Obviously the first thing to turn ON computers at physical level and all the physical stuff that's connect's computer together. The cables, wires etc... which physically connects a machine to network. And if a cable get cracked or miss-wired then it is a physical layer problem or issue or if a computer is unpluged. There is no fancy configurations here. No Hacking kinda stuff in terminal. It's physical.

##### 2. Data Link Layer
It's a little bit bigger concept. So, After all the physical setup is done Let suppose we have to communicate with the devices which are in same **SINGLE** networks. So can be done with the use of mac address or physical address. We can establish a connection between all the devices present in a single network using mac or physical address. Or here can understand that what actually network is. Here It can be router, National connection, etc. 
Means all the devices connected with same router can communicate with each other using mac or physical address.
Now Okay here communication between devices under same networks are done. 
Now we have to make communication between 2 or more networks. So a device in our network can communicate with the device in another network. 
Now understand that there are millions are networks available. 
Lets continue with our router example. 
So now first duty is to communicate our device with our router then next duty is to communicate that router with our target device network router and then at the last the task is to communicate that router with our target device.
And all this work done in our physical layer of choosing a right network from millions of available network. 
Here you we saw a patter of hopping from device to router, then router to router, then router to device. In general all this are called nodes and this process is called node to node or hop to hop.
If any issue occure like we got connected with another network or other that kind of stuff then it comes under data link layer issue.