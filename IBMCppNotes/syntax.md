| Symbol  | Definition                                                       |
| ------- | ---------------------------------------------------------------- |
| `>>---` | Beginning of the sytnax                                          |
| `--->`  | Indicates that the syntax diagram is continued to the next line. |
| `>---`  | Indicates that the syntax is continued from the previous line.   |
| `---><` | Indicates the end of the syntax diagram.                         |

<table id="wq2" width="100%" summary="" border="1" frame="hsides" rules="all">
<caption>Table 1. Syntax examples</caption>
<thead valign="bottom">
<tr>
<th id="wq3" colspan="1" align="left" valign="top">Item</th>
<th id="wq4" colspan="1" align="left" valign="top">Syntax example</th>
</tr>
</thead>
<tbody valign="top">
<tr>
<td colspan="1" align="left" valign="top" headers="wq3">Required item. 
<p>Required items appear on
the main path of the horizontal line. You must specify these items.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">&gt;&gt;-KEYWORD--required_item--------------------------------------&gt;&lt;
 
</pre>
<a name="skipsyn-1" id="skipsyn-1"></a></td>
</tr>
<tr>
<td colspan="1" align="left" valign="top" headers="wq3">Required choice. 
<p>A required choice (two
or more items) appears in a vertical stack on the main path of the
horizontal line. You must choose one of the items in the stack.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">&gt;&gt;-KEYWORD--+-required_choice1-+-------------------------------&gt;&lt;
            '-required_choice2-'
 
</pre>
<a name="skipsyn-2" id="skipsyn-2"></a></td>
</tr>
<tr>
<td colspan="1" align="left" valign="top" headers="wq3">Optional item. 
<p>Optional items appear below
the main path of the horizontal line.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">&gt;&gt;-KEYWORD--+---------------+----------------------------------&gt;&lt;
            '-optional_item-'
 
</pre>
<a name="skipsyn-3" id="skipsyn-3"></a></td>
</tr>
<tr>
<td align="left" valign="top" headers="wq3">Optional choice. 
<p>An optional choice (two
or more items) appears  in a vertical stack below the main path of
the horizontal line. You may choose  one of the items in the stack.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">&gt;&gt;-KEYWORD--+------------------+-------------------------------&gt;&lt;
            +-optional_choice1-+
            '-optional_choice2-'
 
</pre>
<a name="skipsyn-4" id="skipsyn-4"></a></td>
</tr>
<tr>
<td colspan="1" align="left" valign="top" headers="wq3">Default. 
<p>Default items appear above the
main path of the horizontal line. The remaining items (required or
optional) appear on (required) or below (optional) the main path of
the horizontal line. The following example displays a default with
optional items.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">            .-default_choice1--.
&gt;&gt;-KEYWORD--+------------------+-------------------------------&gt;&lt;
            +-optional_choice2-+
            '-optional_choice3-'
 
</pre>
<a name="skipsyn-5" id="skipsyn-5"></a></td>
</tr>
<tr>
<td align="left" valign="top" headers="wq3">Variable. 
<p>Variables appear in lowercase
italics. They represent  names or values.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">&gt;&gt;-KEYWORD--<em>variable</em>-------------------------------------------&gt;&lt;
 
</pre>
<a name="skipsyn-6" id="skipsyn-6"></a></td>
</tr>
<tr>
<td align="left" valign="top" headers="wq3">Repeatable item. 
<p>An arrow returning to
the left above the main  path of the horizontal line indicates an
item that can be repeated.</p> 
<p>A character within the arrow means
you must separate repeated items with that  character.</p> 
<p>An arrow
returning to the left above a group of repeatable items indicates
 that one of the items can be selected,or a single item can be repeated.</p></td>
<td colspan="1" headers="wq4">
<pre class="cgraphic">            .-----------------.
            V                 |
&gt;&gt;-KEYWORD----repeatable_item-+--------------------------------&gt;&lt;
 
</pre>
<a name="skipsyn-7" id="skipsyn-7"></a>

<pre class="cgraphic">            .-,---------------.
            V                 |
&gt;&gt;-KEYWORD----repeatable_item-+--------------------------------&gt;&lt;
 
</pre>

<a name="skipsyn-8" id="skipsyn-8"></a></td>

</tr>
<tr>
<td align="left" valign="top" headers="wq3">Fragment. 
<p>The fragment symbol indicates
that a labelled group  is described below the main syntax diagram.
Syntax is occasionally broken into  fragments if the inclusion of
the fragment would overly complicate the main  syntax diagram.</p></td>
<td headers="wq4">
<pre class="cgraphic">>&gt;&gt;-KEYWORD--| fragment |---------------------------------------&gt;&lt;
 
fragment:
 
|--+-,required_choice1----------------------+-------------------|
   |                   .-,default_choice--. |
   '-,required_choice2-+------------------+-'
                       '-,optional_choice-'
 
</pre>
<a name="skipsyn-9" id="skipsyn-9"></a></td>
</tr>
</tbody>
</table>
