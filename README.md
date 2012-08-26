C++11 Snippets
==============

Learn the new C++11 features by examples


Compiler compatibility
----------------------

Please see the documentation on what's currently supported by your compiler

* [clang](http://clang.llvm.org/cxx_status.html) (preferably in combination with [libc++](http://libcxx.llvm.org/))
* [g++](http://gcc.gnu.org/projects/cxx0x.html)

e.g. the initializer list code compiles only with g++ >= 4.4 or clang++ >= 3.1, which in the latter case is a rather current version


Description
-----------

Source for the references is the free [N3337](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3337.pdf) working draft (pdf), dated 16 January 2012

<table>
  <tr><th>file</th><th>reference</th><th>description</th></tr>
  <tr><td>[algorithms.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/algorithms.cpp)</td><td>[algorithms]</td><td>algorithm on container, using lambda</td></tr>
  <tr><td>[aliastemplates.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/aliastemplates.cpp)</td><td>[temp.alias]</td><td>alias templates</td></tr>
  <tr><td>[array.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/array.cpp)</td><td>[array]</td><td>constant size array container</td></tr>
  <tr><td>[auto.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/auto.cpp)</td><td>[dcl.spec.auto]</td><td>auto type-specifier for variables</td></tr>
  <tr><td>[chrono.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/chrono.cpp)</td><td>[time.syn]</td><td>time utilities</td></tr>
  <tr><td>[constexpr.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/constexpr.cpp)</td><td>[expr.const]</td><td>compile time and run time const</td></tr>
  <tr><td>[defaultdelete.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/defaultdelete.cpp)</td><td>[dcl.fct.def.general]</td><td>defaulted and deleted definition</td></tr>
  <tr><td>[defaultfunctiontemplates.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/defaultfunctiontemplates.cpp)</td><td>[temp.param]</td><td>default arguments in function templates</td></tr>
  <tr><td>[delegation.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/delegation.cpp)</td><td>[class.base.init]</td><td>delegating constructor</td></tr>
  <tr><td>[enumeration.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/enumeration.cpp)</td><td>[dcl.enum]</td><td>type-safe enumerations</td></tr>
  <tr><td>[file.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/file.cpp)</td><td>[iostreams.base]</td><td>file stream</td></tr>
  <tr><td>[foreach.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/foreach.cpp)</td><td>[stmt.ranged]</td><td>range-based for</td></tr>
  <tr><td>[forwardlist.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/forwardlist.cpp)</td><td>[forwardlist]</td><td>single linked list</td></tr>
  <tr><td>[future.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/future.cpp)</td><td>[futures]</td><td>asynchronous results</td></tr>
  <tr><td>[hashtable.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/hashtable.cpp)</td><td>[unord.general]</td><td>hashtable</td></tr>
  <tr><td>[initializer.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/initializer.cpp)</td><td>[support.initlist]</td><td>initializer lists</td></tr>
  <tr><td>[lambda.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/lambda.cpp)</td><td>[expr.prim.lambda]</td><td>simple function objects</td></tr>
  <tr><td>[literals.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/literals.cpp)</td><td>[lex.ext]</td><td>user defined literals</td></tr>
  <tr><td>[math.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/math.cpp)</td><td>[c.math]</td><td>math functions</td></tr>
  <tr><td>[mutex.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/mutex.cpp)</td><td>[thread.mutex]</td><td>synchronization</td></tr>
  <tr><td>[nullptr.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/nullptr.cpp)</td><td>[lex.nullptr]</td><td>null</td></tr>
  <tr><td>[overridefinal.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/overridefinal.cpp)</td><td>[class.virtual]</td><td>identifier</td></tr>
  <tr><td>[random.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/random.cpp)</td><td>[rand]</td><td>random number generation</td></tr>
  <tr><td>[referencewrapper.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/referencewrapper.cpp)</td><td>[ref_wrap]</td><td>reference wrapper</td></tr>
  <tr><td>[regex.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/regex.cpp)</td><td>[re]</td><td>regular expressions</td></tr>
  <tr><td>[rightbrackets.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/rightbrackets.cpp)</td><td>[diff.cpp03.temp]</td><td>removed template whitespace</td></tr>
  <tr><td>[smartpointer.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/smartpointer.cpp)</td><td>[smartptr]</td><td>smart memory management</td></tr>
  <tr><td>[staticassert.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/staticassert.cpp)</td><td>[dcl.dcl]</td><td>compile time assertions</td></tr>
  <tr><td>[stringliterals.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/stringliterals.cpp)</td><td>[lex.string]</td><td>string literals</td></tr>
  <tr><td>[thread.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/thread.cpp)</td><td>[thread.threads]</td><td>threading</td></tr>
  <tr><td>[tokens.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/tokens.cpp)</td><td>[lex.digraph]</td><td>alternative tokens</td></tr>
  <tr><td>[trailingreturntype.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/trailingreturntype.cpp)</td><td>[dcl.decl]</td><td>trailing return type</td></tr>
  <tr><td>[trigraph.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/trigraph.cpp)</td><td>[lex.trigraph]</td><td>alternative sequences</td></tr>
  <tr><td>[tuple.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/tuple.cpp)</td><td>[tuple]</td><td>tuples</td></tr>
  <tr><td>[valarray.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/valarray.cpp)</td><td>[numarray]</td><td>numeric arrays</td></tr>
  <tr><td>[variadictemplates.cpp](https://github.com/daniel-j-h/cpp11-snippets/blob/master/src/variadictemplates.cpp)</td><td>[temp.variadic]</td><td>variadic templates</td></tr>
</table>
