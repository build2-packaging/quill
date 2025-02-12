# Quill - Asynchronous low latency C++ logging library.

This is a [`build2`](https://build2.org/) package repository for [`Quill`](https://github.com/odygrd/quill)

This file contains setup instructions and other details that are more appropriate for development rather than consumption. If you want to use [`Quill`](https://github.com/odygrd/quill) in your [`build2`](https://build2.org/)-based project, then instead see the accompanying [`PACKAGE-README.md`](libquill/PACKAGE-README.md) file.

The development setup for [`Quill`](https://github.com/odygrd/quill) uses the standard [`bdep`](https://build2.org/bdep/doc/bdep.xhtml)-based workflow. For example:

```
git clone .../quill.git
cd quill

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
