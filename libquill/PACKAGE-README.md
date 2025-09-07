# libquill - A C++ library

This is a `build2` package for the [`Quill`](https://github.com/odygrd/quill)
C++ library. It provides high-performance asynchronous logging.


## Usage

To start using `libquill` in your project, add the following [`depends`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifest-package-depends) value to your [`manifest`](https://build2.org/bpkg/doc/build2-package-manager-manual.xhtml#manifests), adjusting the version constraint as appropriate:

```
depends: libquill ^10.1.0
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
[bool] config.libquill.no_exceptions ?= false
[bool] config.libquill.no_thread_name_support ?= false
[bool] config.libquill.x86arch ?= false
[bool] config.libquill.disable_non_prefixed_macros ?= false
[bool] config.libquill.disable_function_name ?= false
```

### Configuration variables description

* `no_exceptions` - Whether to build without exception handling support.
* `no_thread_name_support` - Whether to disable features that require thread name retrieval, ensuring compatibility with older Windows versions (e.g., Windows Server 2012/2016) and Android.
* `x86arch` - Whether to enable x86-specific optimizations for cache coherence using _mm_prefetch, _mm_clflush, and _mm_clflushopt instructions.
* `disable_non_prefixed_macros` - Whether to disable non-prefixed `LOG_*` macros, keeping only the `QUILL_LOG_*` macros to avoid conflicts with other logging libraries.
* `disable_function_name` - Whether to disable the use of __FUNCTION__ in `LOG_*` macros when the function name is not needed.
