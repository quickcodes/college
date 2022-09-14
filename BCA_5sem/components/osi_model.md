## OSI Model
- In simple words, the OSI model is just a logical model for how systems are supposed to communicate with each other.
- When we break down the network communication into different layers it forms an OSI model.

- You may hear of the physical layer. The physical layer is all the wiring, All the physical stuff required to connect computers together.
- Then comes the data link layer. It is where switching occurs, All the switches that you plug your computer into.
- And so on. Basically OSI model is just 7 logical layers that allow you to think about networking communication from starting to end.
- Breaking down the model into 7 layers is important because when an error occurs we can easily figure out, ohh it is a session layer issue or a transport layer issue etc...

#### Lets understand each layer
##### 1. Physical Layer
##### 2. Data Link Layer
##### 3. Network Layer
##### 4. Transport Layer
##### 5. Session Layer
##### 6. Presentation Layer
##### 7. Application Layer

- My request is to imagine it like a real-world communication Because we will learn OSI like a story...

#### 1. Physical Layer
Our goal is to make communication between computers, So Obviously the first thing is to turn ON computers at the physical level and all the physical stuff that connects computers together. The cables, wires, etc... which physically connect a machine to the network. And if a cable gets cracked or miss-wired then it is a physical layer problem or issue or if a computer is unplugged. There are no fancy configurations here. No Hacking kinda stuff in the terminal. It's physical.

#### 2. Data Link Layer
It's a little bit bigger concept. So, After all the physical setup is done Let's suppose we have to communicate with the devices which are in the same **SINGLE** networks. So can be done with the use of a mac address or physical address. We can establish a connection between all the devices present in a single network using a mac or physical address. Or here can understand what actually network is. Here It can be the router, National connection, etc.

This means all the devices connected with the same router can communicate with each other using a mac or physical address.

Now Okay here communication between devices under the same networks is done.

Now we have to make communication between 2 or more networks. So a device in our network can communicate with the device in another network.

Now understand that there are millions are networks available.

Let us continue with our router example.
So now the first duty is to communicate our device with our router then the next duty is to communicate that router with our target device network router and then at the last the task is to communicate that router with our target device.
And all this work comes in our Data Link layer, from choosing the right network from millions of available networks.

Here we saw a pattern of hopping from device to router, then router to router, then router to device. In general, all these are called nodes, and this process is called node to node or hop to hop.
If any issue occurs as we got connected with another network or other that kind of stuff then it comes under the data link layer issue.













[Index](../networking.md)