\alias{GFilterInputStream}
\name{GFilterInputStream}
\title{GFilterInputStream}
\description{Filter Input Stream}
\section{Methods and Functions}{
\code{\link{gFilterInputStreamGetBaseStream}(object)}\cr
\code{\link{gFilterInputStreamGetCloseBaseStream}(object)}\cr
\code{\link{gFilterInputStreamSetCloseBaseStream}(object, close.base)}\cr

}
\section{Hierarchy}{\preformatted{GObject
   +----GInputStream
         +----GFilterInputStream
               +----GBufferedInputStream}}
\section{Structures}{\describe{\item{\verb{GFilterInputStream}}{
A base class for all input streams that work on an underlying stream.

}}}
\section{Properties}{\describe{
\item{\verb{base-stream} [\code{\link{GInputStream}} : *         : Read / Write / Construct Only]}{

The underlying base stream on which the io ops will be done.

}
\item{\verb{close-base-stream} [logical : Read / Write / Construct Only]}{

If the base stream should be closed when the filter stream is closed.  Default value: TRUE

}
}}
\references{\url{http://library.gnome.org/devel//gio/GFilterInputStream.html}}
\author{Derived by RGtkGen from GTK+ documentation}
\keyword{internal}
