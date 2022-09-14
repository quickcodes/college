# OSI Model
- In simple words, the OSI model is just a logical model for how systems are supposed to communicate with each other.
- When we break down the network communication into different layers it forms an OSI model.

- You may hear of the physical layer. The physical layer is all the wiring, All the physical stuff required to connect computers together.
- Then comes the data link layer. It is where switching occurs, All the switches that you plug your computer into.
- And so on. Basically OSI model is just 7 logical layers that allow you to think about networking communication from starting to end.
- Breaking down the model into 7 layers is important because when an error occurs we can easily figure out, ohh it is a session layer issue or a transport layer issue etc...

## Lets understand each layer
#### 1. Physical Layer
#### 2. Data Link Layer
#### 3. Network Layer
#### 4. Transport Layer
#### 5. Session Layer
#### 6. Presentation Layer
#### 7. Application Layer

## 1. Physical Layer
Our goal is to make communication between computers, So Obviously the first thing is to turn ON computers at the physical level and all the physical stuff that connects computers together. The cables, wires, etc... which physically connect a machine to the network. And if a cable gets cracked or miss-wired then it is a physical layer problem or issue or if a computer is unplugged. There are no fancy configurations here. No Hacking kinda stuff in the terminal. It's physical.

## 2. Data Link Layer
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

## 3. Network Layer
This is a layer where things like IP addresses are resigned. So anything you do with TCP/IP comes under this layer. In order to communicate one node(device) with another node we have to do stuff with the IP address and if we provide the wrong IP address then it's a Network layer problem. or if a router dies then it's a network layer problem. Anything related to IP address comes under this layer.

## 4. Transport layer
Here The Actual data stuff got done. The transport layer decides how large a block of data should be sent. How long a computer should wait before sending or receiving data? For example, if the data size is 5GB then we not gonna send directly 5GB we decide this data into small packets so if any error got occurs then don't have to send the whole 5GB data again we can just start resending from that packet again. You may see it while downloading any movie, When it's now downloaded properly it works but not properly. Generally IT people don't much play with this layer.

## 5. Session Layer
After deciding how large a block of data should send we, Now both the sender & receiver device should have to open their session to communicate with each other. When you visit a website you create a session between your computer and their computer again if you don't know what the website is. It is just a piece of code running on a computer on the cloud (internet). And to give you an example as we talked about the IP addresses in the before layer. If you go to google.com you don't even need to type google.com in your browser if you know the IP address of a computer on which google.com is running so you can type that IP address in your browser and can visit google.com or any other website.

If you are running Linux you can get IP address of any website by the 'host' command
```
host google.com
```
##### OUTPUT:
```
google.com has address 142.251.42.78
google.com has IPv6 address 2404:6800:4009:82a::200e
google.com mail is handled by 10 smtp.google.com.
```

Here **142.251.42.78** is the IP address of google.com you can enter this IP address in your fav browser and can see it opens google.com

and that's how you create a session between 2 devices

## 6. Presentation Layer
It's a layer where the operating system exists. Operating System gives our device able to communicate with us. and if something of an operating system breaks our communication with other devices then it comes under the presentation layer. When the operating system is not allowing the user to go on the internet it is a presentation layer problem. Sometimes drivers got messed up, they don't have the correct security port, etc.

## 7. Application Layer
The application layer is the actual software that the user is interacting with to send information. It might be firefox, google, edge, skype, dropbox, etc. In the real world, most of us deal with this level. This means if the application got crashed or miss configured it is an application layer problem.












[Index](../networking.md)
