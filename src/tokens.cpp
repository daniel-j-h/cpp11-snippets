#include <iostream>

using namespace std;

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
  cout << a<:0:> << endl; /* output is 2 */
  %: else
  cout << a<:1:> << endl; /* output is 3 */
  %: endif
}
