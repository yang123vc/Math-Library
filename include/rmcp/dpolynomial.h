#ifndef _RMCP_DPOLYNOMIAL_H_
#define _RMCP_DPOLYNOMIAL_H_

#include <rmcp/rmcp.h>

namespace rmcp {

	rmcp::dvector poly3coeff(double x0, double xf, double y0, double yf, double dy0, double dyf);
	
	double poly3val(rmcp::dvector coeff, double x);
	double poly3der(rmcp::dvector coeff, double x);

	rmcp::dvector poly5coeff(double x0, double xf, double y0, double yf, double dy0, double dyf, double ddy0, double ddyf);

	double poly5val(rmcp::dvector coeff, double x);
	double poly5der(rmcp::dvector coeff, double x);
	double poly5secder(rmcp::dvector coeff, double x);
} // namespace rmcp

#endif /* _RMCP_DPOLYNOMIAL_H_ */
