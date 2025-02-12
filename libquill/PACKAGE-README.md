# libquill - A C++ library

This is a `build2` package for the [`Quill`](https://github.com/odygrd/quill)
C++ library. It provides high-performance asynchronous logging.


## Usage

To start using `libquill` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: libquill ^8.1.0
```

Then import the library in your `buildfile`:

```
import libs = libquill%lib{quill}
```


## Importable targets

This package provides the following importable targets:

```
lib{quill}
```

### Importable targets description

* `quill` - Asynchronous low latency C++ logging library.


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libquill.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
