C++11 Snippets
==============

Learn the new C++11 features by examples


Compiler compatibility
----------------------

Please see the documentation on what's currently supported by your compiler

* [g++](http://gcc.gnu.org/projects/cxx0x.html)
* [clang](http://clang.llvm.org/cxx_status.html)

e.g. the initializer list code compiles only with g++ >= 4.4 or clang++ >= 3.1, which in the latter case is a rather current version


Description
-----------

Source for the references is the free [N3337](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3337.pdf) working draft (pdf), dated 16 January 2012

<table>
  <tr><th>file</th><th>reference</th><th>description</th></tr>
  <tr><td>algorithms.cpp</td><td>[algorithms]</td><td>algorithm on container, using lambda</td></tr>
  <tr><td>aliastemplates.cpp</td><td>[temp.alias]</td><td>alias templates</td></tr>
  <tr><td>array.cpp</td><td>[array]</td><td>constant size array container</td></tr>
  <tr><td>auto.cpp</td><td>[dcl.spec.auto]</td><td>auto type-specifier for variables</td></tr>
  <tr><td>chrono.cpp</td><td>[time.syn]</td><td>time utilities</td></tr>
  <tr><td>constexpr.cpp</td><td>[expr.const]</td><td>compile time and run time const</td></tr>
  <tr><td>defaultdelete.cpp</td><td>[dcl.fct.def.general]</td><td>defaulted and deleted definition</td></tr>
  <tr><td>defaultfunctiontemplates.cpp</td><td>[temp.param]</td><td>default arguments in function templates</td></tr>
  <tr><td>delegation.cpp</td><td>[class.base.init]</td><td>delegating constructor</td></tr>
  <tr><td>enumeration.cpp</td><td>[dcl.enum]</td><td>type-safe enumerations</td></tr>
  <tr><td>file.cpp</td><td>[iostreams.base]</td><td>file stream</td></tr>
  <tr><td>foreach.cpp</td><td>[stmt.ranged]</td><td>range-based for</td></tr>
  <tr><td>forwardlist.cpp</td><td>[forwardlist]</td><td>single linked list</td></tr>
  <tr><td>future.cpp</td><td>[futures]</td><td>asynchronous results</td></tr>
  <tr><td>hashtable.cpp</td><td>[unord.general]</td><td>hashtable</td></tr>
  <tr><td>initializer.cpp</td><td>[support.initlist]</td><td>initializer lists</td></tr>
  <tr><td>lambda.cpp</td><td>[expr.prim.lambda]</td><td>simple function objects</td></tr>
  <tr><td>literals.cpp</td><td>[lex.ext]</td><td>user defined literals</td></tr>
  <tr><td>math.cpp</td><td>[c.math]</td><td>math functions</td></tr>
  <tr><td>mutex.cpp</td><td>[thread.mutex]</td><td>synchronization</td></tr>
  <tr><td>nullptr.cpp</td><td>[lex.nullptr]</td><td>null</td></tr>
  <tr><td>overridefinal.cpp</td><td>[class.virtual]</td><td>identifier</td></tr>
  <tr><td>random.cpp</td><td>[rand]</td><td>random number generation</td></tr>
  <tr><td>referencewrapper.cpp</td><td>[ref_wrap]</td><td>reference wrapper</td></tr>
  <tr><td>regex.cpp</td><td>[re]</td><td>regular expressions</td></tr>
  <tr><td>rightbrackets.cpp</td><td>[diff.cpp03.temp]</td><td>removed template whitespace</td></tr>
  <tr><td>smartpointer.cpp</td><td>[smartptr]</td><td>smart memory management</td></tr>
  <tr><td>staticassert.cpp</td><td>[dcl.dcl]</td><td>compile time assertions</td></tr>
  <tr><td>stringliterals.cpp</td><td>[lex.string]</td><td>string literals</td></tr>
  <tr><td>thread.cpp</td><td>[thread.threads]</td><td>threading</td></tr>
  <tr><td>tokens.cpp</td><td>[lex.digraph]</td><td>alternative tokens</td></tr>
  <tr><td>trailingreturntype.cpp</td><td>[dcl.decl]</td><td>trailing return type</td></tr>
  <tr><td>trigraph.cpp</td><td>[lex.trigraph]</td><td>alternative sequences</td></tr>
  <tr><td>tuple.cpp</td><td>[tuple]</td><td>tuples</td></tr>
  <tr><td>valarray.cpp</td><td>[numarray]</td><td>numeric arrays</td></tr>
  <tr><td>variadictemplates.cpp</td><td>[temp.variadic]</td><td>variadic templates</td></tr>
</table>
