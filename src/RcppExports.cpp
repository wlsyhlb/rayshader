// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// bilineargrid
NumericMatrix bilineargrid(NumericMatrix& colorarray);
RcppExport SEXP _rayshader_bilineargrid(SEXP colorarraySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type colorarray(colorarraySEXP);
    rcpp_result_gen = Rcpp::wrap(bilineargrid(colorarray));
    return rcpp_result_gen;
END_RCPP
}
// get_boolean_distance
NumericMatrix get_boolean_distance(LogicalMatrix input);
RcppExport SEXP _rayshader_get_boolean_distance(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(get_boolean_distance(input));
    return rcpp_result_gen;
END_RCPP
}
// calculate_normal_cpp
List calculate_normal_cpp(const NumericMatrix& heightmap, bool progbar);
RcppExport SEXP _rayshader_calculate_normal_cpp(SEXP heightmapSEXP, SEXP progbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< bool >::type progbar(progbarSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_normal_cpp(heightmap, progbar));
    return rcpp_result_gen;
END_RCPP
}
// construct_matrix
NumericMatrix construct_matrix(NumericMatrix image_reference, int number_rows, int number_cols, const IntegerVector& index_x, const IntegerVector& index_y);
RcppExport SEXP _rayshader_construct_matrix(SEXP image_referenceSEXP, SEXP number_rowsSEXP, SEXP number_colsSEXP, SEXP index_xSEXP, SEXP index_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type image_reference(image_referenceSEXP);
    Rcpp::traits::input_parameter< int >::type number_rows(number_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type number_cols(number_colsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type index_x(index_xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type index_y(index_ySEXP);
    rcpp_result_gen = Rcpp::wrap(construct_matrix(image_reference, number_rows, number_cols, index_x, index_y));
    return rcpp_result_gen;
END_RCPP
}
// fill_find_groups
NumericMatrix fill_find_groups(NumericMatrix max_z_matrix);
RcppExport SEXP _rayshader_fill_find_groups(SEXP max_z_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type max_z_matrix(max_z_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_find_groups(max_z_matrix));
    return rcpp_result_gen;
END_RCPP
}
// find_groups_cpp
NumericMatrix find_groups_cpp(NumericMatrix max_z_matrix);
RcppExport SEXP _rayshader_find_groups_cpp(SEXP max_z_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type max_z_matrix(max_z_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(find_groups_cpp(max_z_matrix));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_color
NumericMatrix interpolate_color(double color_nw, double color_ne, double color_se, double color_sw);
RcppExport SEXP _rayshader_interpolate_color(SEXP color_nwSEXP, SEXP color_neSEXP, SEXP color_seSEXP, SEXP color_swSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type color_nw(color_nwSEXP);
    Rcpp::traits::input_parameter< double >::type color_ne(color_neSEXP);
    Rcpp::traits::input_parameter< double >::type color_se(color_seSEXP);
    Rcpp::traits::input_parameter< double >::type color_sw(color_swSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_color(color_nw, color_ne, color_se, color_sw));
    return rcpp_result_gen;
END_RCPP
}
// lambshade_cpp
NumericMatrix lambshade_cpp(NumericMatrix heightmap, NumericVector rayvector);
RcppExport SEXP _rayshader_lambshade_cpp(SEXP heightmapSEXP, SEXP rayvectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rayvector(rayvectorSEXP);
    rcpp_result_gen = Rcpp::wrap(lambshade_cpp(heightmap, rayvector));
    return rcpp_result_gen;
END_RCPP
}
// make_surface_cpp
List make_surface_cpp(NumericMatrix& heightmap, LogicalMatrix& na_matrix, NumericMatrix& normalsx, NumericMatrix& normalsy, NumericMatrix& normalsz, double basedepth);
RcppExport SEXP _rayshader_make_surface_cpp(SEXP heightmapSEXP, SEXP na_matrixSEXP, SEXP normalsxSEXP, SEXP normalsySEXP, SEXP normalszSEXP, SEXP basedepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix& >::type na_matrix(na_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type normalsx(normalsxSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type normalsy(normalsySEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type normalsz(normalszSEXP);
    Rcpp::traits::input_parameter< double >::type basedepth(basedepthSEXP);
    rcpp_result_gen = Rcpp::wrap(make_surface_cpp(heightmap, na_matrix, normalsx, normalsy, normalsz, basedepth));
    return rcpp_result_gen;
END_RCPP
}
// make_base_cpp
List make_base_cpp(NumericMatrix& heightmap, LogicalMatrix& na_matrix, double basedepth);
RcppExport SEXP _rayshader_make_base_cpp(SEXP heightmapSEXP, SEXP na_matrixSEXP, SEXP basedepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix& >::type na_matrix(na_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type basedepth(basedepthSEXP);
    rcpp_result_gen = Rcpp::wrap(make_base_cpp(heightmap, na_matrix, basedepth));
    return rcpp_result_gen;
END_RCPP
}
// make_water_cpp
List make_water_cpp(NumericMatrix& heightmap, LogicalMatrix& na_matrix, double waterheight);
RcppExport SEXP _rayshader_make_water_cpp(SEXP heightmapSEXP, SEXP na_matrixSEXP, SEXP waterheightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix& >::type na_matrix(na_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type waterheight(waterheightSEXP);
    rcpp_result_gen = Rcpp::wrap(make_water_cpp(heightmap, na_matrix, waterheight));
    return rcpp_result_gen;
END_RCPP
}
// make_waterlines_cpp
List make_waterlines_cpp(NumericMatrix& heightmap, LogicalMatrix& na_matrix, double waterdepth);
RcppExport SEXP _rayshader_make_waterlines_cpp(SEXP heightmapSEXP, SEXP na_matrixSEXP, SEXP waterdepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix& >::type na_matrix(na_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type waterdepth(waterdepthSEXP);
    rcpp_result_gen = Rcpp::wrap(make_waterlines_cpp(heightmap, na_matrix, waterdepth));
    return rcpp_result_gen;
END_RCPP
}
// make_baselines_cpp
List make_baselines_cpp(NumericMatrix& heightmap, LogicalMatrix& na_matrix, double waterdepth);
RcppExport SEXP _rayshader_make_baselines_cpp(SEXP heightmapSEXP, SEXP na_matrixSEXP, SEXP waterdepthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix& >::type na_matrix(na_matrixSEXP);
    Rcpp::traits::input_parameter< double >::type waterdepth(waterdepthSEXP);
    rcpp_result_gen = Rcpp::wrap(make_baselines_cpp(heightmap, na_matrix, waterdepth));
    return rcpp_result_gen;
END_RCPP
}
// cubic_interpolate
double cubic_interpolate(double p0, double p1, double p2, double p3, double x);
RcppExport SEXP _rayshader_cubic_interpolate(SEXP p0SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP p3SEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< double >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< double >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< double >::type p3(p3SEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cubic_interpolate(p0, p1, p2, p3, x));
    return rcpp_result_gen;
END_RCPP
}
// bicubic_interpolate
double bicubic_interpolate(NumericMatrix p, double x, double y);
RcppExport SEXP _rayshader_bicubic_interpolate(SEXP pSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(bicubic_interpolate(p, x, y));
    return rcpp_result_gen;
END_RCPP
}
// subsample
arma::mat subsample(arma::mat& circle, int size);
RcppExport SEXP _rayshader_subsample(SEXP circleSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type circle(circleSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(subsample(circle, size));
    return rcpp_result_gen;
END_RCPP
}
// subsample_rect
arma::mat subsample_rect(arma::mat& rect, int binsx, int binsy);
RcppExport SEXP _rayshader_subsample_rect(SEXP rectSEXP, SEXP binsxSEXP, SEXP binsySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type rect(rectSEXP);
    Rcpp::traits::input_parameter< int >::type binsx(binsxSEXP);
    Rcpp::traits::input_parameter< int >::type binsy(binsySEXP);
    rcpp_result_gen = Rcpp::wrap(subsample_rect(rect, binsx, binsy));
    return rcpp_result_gen;
END_RCPP
}
// gen_circle_psf
arma::mat gen_circle_psf(const double radius);
RcppExport SEXP _rayshader_gen_circle_psf(SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_circle_psf(radius));
    return rcpp_result_gen;
END_RCPP
}
// gen_ellipse
arma::mat gen_ellipse(const double intensity, double width, double height);
RcppExport SEXP _rayshader_gen_ellipse(SEXP intensitySEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type intensity(intensitySEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_ellipse(intensity, width, height));
    return rcpp_result_gen;
END_RCPP
}
// is_inside
bool is_inside(double sizehex, double positionx, double positiony, double sinval, double cosval);
RcppExport SEXP _rayshader_is_inside(SEXP sizehexSEXP, SEXP positionxSEXP, SEXP positionySEXP, SEXP sinvalSEXP, SEXP cosvalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type sizehex(sizehexSEXP);
    Rcpp::traits::input_parameter< double >::type positionx(positionxSEXP);
    Rcpp::traits::input_parameter< double >::type positiony(positionySEXP);
    Rcpp::traits::input_parameter< double >::type sinval(sinvalSEXP);
    Rcpp::traits::input_parameter< double >::type cosval(cosvalSEXP);
    rcpp_result_gen = Rcpp::wrap(is_inside(sizehex, positionx, positiony, sinval, cosval));
    return rcpp_result_gen;
END_RCPP
}
// gen_hex_psf
arma::mat gen_hex_psf(const double radius, const double rotation);
RcppExport SEXP _rayshader_gen_hex_psf(SEXP radiusSEXP, SEXP rotationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< const double >::type rotation(rotationSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_hex_psf(radius, rotation));
    return rcpp_result_gen;
END_RCPP
}
// psf
arma::mat psf(const arma::mat& image, const IntegerMatrix blurmatrix, const arma::mat& depthmap, double depth, const arma::mat custombokeh, int type, double bokehintensity, double bokehlimit, double rotation, bool progbar, int channel);
RcppExport SEXP _rayshader_psf(SEXP imageSEXP, SEXP blurmatrixSEXP, SEXP depthmapSEXP, SEXP depthSEXP, SEXP custombokehSEXP, SEXP typeSEXP, SEXP bokehintensitySEXP, SEXP bokehlimitSEXP, SEXP rotationSEXP, SEXP progbarSEXP, SEXP channelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type image(imageSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix >::type blurmatrix(blurmatrixSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type depthmap(depthmapSEXP);
    Rcpp::traits::input_parameter< double >::type depth(depthSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type custombokeh(custombokehSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type bokehintensity(bokehintensitySEXP);
    Rcpp::traits::input_parameter< double >::type bokehlimit(bokehlimitSEXP);
    Rcpp::traits::input_parameter< double >::type rotation(rotationSEXP);
    Rcpp::traits::input_parameter< bool >::type progbar(progbarSEXP);
    Rcpp::traits::input_parameter< int >::type channel(channelSEXP);
    rcpp_result_gen = Rcpp::wrap(psf(image, blurmatrix, depthmap, depth, custombokeh, type, bokehintensity, bokehlimit, rotation, progbar, channel));
    return rcpp_result_gen;
END_RCPP
}
// rayshade_cpp
NumericMatrix rayshade_cpp(double sunangle, NumericVector anglebreaks, NumericMatrix& heightmap, double zscale, double maxsearch, const NumericMatrix cache_mask, bool progbar);
RcppExport SEXP _rayshader_rayshade_cpp(SEXP sunangleSEXP, SEXP anglebreaksSEXP, SEXP heightmapSEXP, SEXP zscaleSEXP, SEXP maxsearchSEXP, SEXP cache_maskSEXP, SEXP progbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type sunangle(sunangleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type anglebreaks(anglebreaksSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< double >::type zscale(zscaleSEXP);
    Rcpp::traits::input_parameter< double >::type maxsearch(maxsearchSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type cache_mask(cache_maskSEXP);
    Rcpp::traits::input_parameter< bool >::type progbar(progbarSEXP);
    rcpp_result_gen = Rcpp::wrap(rayshade_cpp(sunangle, anglebreaks, heightmap, zscale, maxsearch, cache_mask, progbar));
    return rcpp_result_gen;
END_RCPP
}
// rayshade_multicore
NumericMatrix rayshade_multicore(double sunangle, NumericVector anglebreaks, NumericMatrix& heightmap, double zscale, NumericVector chunkindices, double maxsearch, NumericVector& cache_mask);
RcppExport SEXP _rayshader_rayshade_multicore(SEXP sunangleSEXP, SEXP anglebreaksSEXP, SEXP heightmapSEXP, SEXP zscaleSEXP, SEXP chunkindicesSEXP, SEXP maxsearchSEXP, SEXP cache_maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type sunangle(sunangleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type anglebreaks(anglebreaksSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type heightmap(heightmapSEXP);
    Rcpp::traits::input_parameter< double >::type zscale(zscaleSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type chunkindices(chunkindicesSEXP);
    Rcpp::traits::input_parameter< double >::type maxsearch(maxsearchSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type cache_mask(cache_maskSEXP);
    rcpp_result_gen = Rcpp::wrap(rayshade_multicore(sunangle, anglebreaks, heightmap, zscale, chunkindices, maxsearch, cache_mask));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rayshader_bilineargrid", (DL_FUNC) &_rayshader_bilineargrid, 1},
    {"_rayshader_get_boolean_distance", (DL_FUNC) &_rayshader_get_boolean_distance, 1},
    {"_rayshader_calculate_normal_cpp", (DL_FUNC) &_rayshader_calculate_normal_cpp, 2},
    {"_rayshader_construct_matrix", (DL_FUNC) &_rayshader_construct_matrix, 5},
    {"_rayshader_fill_find_groups", (DL_FUNC) &_rayshader_fill_find_groups, 1},
    {"_rayshader_find_groups_cpp", (DL_FUNC) &_rayshader_find_groups_cpp, 1},
    {"_rayshader_interpolate_color", (DL_FUNC) &_rayshader_interpolate_color, 4},
    {"_rayshader_lambshade_cpp", (DL_FUNC) &_rayshader_lambshade_cpp, 2},
    {"_rayshader_make_surface_cpp", (DL_FUNC) &_rayshader_make_surface_cpp, 6},
    {"_rayshader_make_base_cpp", (DL_FUNC) &_rayshader_make_base_cpp, 3},
    {"_rayshader_make_water_cpp", (DL_FUNC) &_rayshader_make_water_cpp, 3},
    {"_rayshader_make_waterlines_cpp", (DL_FUNC) &_rayshader_make_waterlines_cpp, 3},
    {"_rayshader_make_baselines_cpp", (DL_FUNC) &_rayshader_make_baselines_cpp, 3},
    {"_rayshader_cubic_interpolate", (DL_FUNC) &_rayshader_cubic_interpolate, 5},
    {"_rayshader_bicubic_interpolate", (DL_FUNC) &_rayshader_bicubic_interpolate, 3},
    {"_rayshader_subsample", (DL_FUNC) &_rayshader_subsample, 2},
    {"_rayshader_subsample_rect", (DL_FUNC) &_rayshader_subsample_rect, 3},
    {"_rayshader_gen_circle_psf", (DL_FUNC) &_rayshader_gen_circle_psf, 1},
    {"_rayshader_gen_ellipse", (DL_FUNC) &_rayshader_gen_ellipse, 3},
    {"_rayshader_is_inside", (DL_FUNC) &_rayshader_is_inside, 5},
    {"_rayshader_gen_hex_psf", (DL_FUNC) &_rayshader_gen_hex_psf, 2},
    {"_rayshader_psf", (DL_FUNC) &_rayshader_psf, 11},
    {"_rayshader_rayshade_cpp", (DL_FUNC) &_rayshader_rayshade_cpp, 7},
    {"_rayshader_rayshade_multicore", (DL_FUNC) &_rayshader_rayshade_multicore, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_rayshader(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
