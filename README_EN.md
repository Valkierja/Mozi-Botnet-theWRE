# WRE-Botnet

reinvent a wheel for the  purpose of learning bot-net. This project simulate mozi-botnet virus (md5: 849b165f28ae8b1cebe0c7430f44aff3 , SHA256: c6f6ca23761292552e6ea5f12496dc9c73374be0c5f9d0b2142ca3ae0bb8fe14).

**DISCLAIMER:** **DO NOT** use this project for real-world attacking, if so the original programmer have nothing to do with that and take no responsibility.

we are willing to answer issues and welcome to PR
# the data-flow in the whole botnet and how's it working

[vF1er6.png](https://s1.ax1x.com/2022/07/31/vF1er6.png)
any one who has certain GPG private KEY can order the whole botnet and upload signed update packet to the botnet

therefore, the original programmer is safe to make an order without expose IP bucause it's a P2P network: everyone have the exactly same data, everyone can be the author.


# opensource declare

MIT License

Copyright (c) 2009-2017 Dave Gamble and cJSON contributors

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Besides thanks to the following projects, this project is able to come out

* https://github.com/DaveGamble/cJSON

* https://github.com/fatedier/frp

* https://github.com/embedthis/goahead

* https://github.com/mkj/dropbear

<!-- * https://gitee.com/KSroido/http-downloader -->

# TODO list

- [x] add goahead midware for local communication

- [ ] add light cross-compile env 

- [ ] add tunnel and proxy

- [ ] realize a Decentralized p2p protocol for internet communication

- [ ] add order making and sending modules, and they will Authenticate the signature by using GPG

- [ ] add some Nday payloads and a weak password burp module

- [ ] find next victim by using API such as fofa.info

