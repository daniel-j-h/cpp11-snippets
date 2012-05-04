#include <iostream>

/*
Alternative Primary
<% {
and &&
and_eq &=
%> }
bitor |
or_eq |=
<: [
or ||
xor_eq ˆ=
:> ]
xor ˆ
not !
%: #
compl ∼
not_eq !=
%:%: ##
bitand &
*/

%: define OUT

int main() {
  int a<::> = <% 2,3 %>;

  %: if defined(OUT)
  std::cout << a<:0:> << std::endl; /* output is 2 */
  %: else
  std::cout << a<:1:> << std::endl; /* output is 3 */
  %: endif
}
