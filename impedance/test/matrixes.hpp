#include <Eigen/Core>
#include <fstream>

Eigen::VectorXd tinvar_wvlt() {
    Eigen::VectorXd v( 326 ); v <<
    564.692497253418e-003,
    1.43304998224432e+000,
    2.31024724786932e+000,
    1.26446403156627e+000,
    788.358688354492e-003,
    503.264427185059e-003,
    1.43056470697576e+000,
    1.90473209727894e+000,
    804.657849398526e-003,
    2.39524477178400e+000,
    3.02066109397195e+000,
    4.90716344659979e+000,
    1.60761642456055e+000,
    4.57600610906428e+000,
    3.47969401966442e+000,
    3.58667477694425e+000,
    11.3661388050426e+000,
    16.0164059725675e+000,
    14.6195345791903e+000,
    4.76518457586115e+000,
    12.7219834761186e+000,
    19.1451221812855e+000,
    13.8545989990234e+000,
    6.98974678733132e+000,
    10.0180691805753e+000,
    18.4683241410689e+000,
    17.7390719327060e+000,
    15.0058177601207e+000,
    6.99552709406072e+000,
    16.1963029341264e+000,
    26.8708357377486e+000,
    32.3288047096946e+000,
    25.8373468572443e+000,
    9.31914173473011e+000,
    17.4154607599432e+000,
    25.5239729447798e+000,
    26.5158635919744e+000,
    17.4590176669034e+000,
    17.1584098122337e+000,
    20.7710293856534e+000,
    18.7883744673295e+000,
    15.2434817227450e+000,
    10.7686386108398e+000,
    11.1130558360707e+000,
    15.9874947287820e+000,
    19.6236031272195e+000,
    13.5629383433949e+000,
    5.70816768299450e+000,
    9.01198647238991e+000,
    15.7849981134588e+000,
    14.0875993208452e+000,
    9.35719992897727e+000,
    9.58784484863281e+000,
    12.7545221502131e+000,
    16.2904482754794e+000,
    14.9818462025036e+000,
    16.9012021151456e+000,
    18.4555095325817e+000,
    20.0867267955433e+000,
    15.6347212357955e+000,
    14.7952506325462e+000,
    13.6418554132635e+000,
    20.8255004882812e+000,
    22.3855715664950e+000,
    19.9207652698864e+000,
    15.3039009787820e+000,
    13.0555849942294e+000,
    15.9987473921342e+000,
    15.6922149658203e+000,
    14.2821058793501e+000,
    16.6332203258168e+000,
    15.1051177978516e+000,
    12.6985986882990e+000,
    8.03912839022550e+000,
    8.32304382324219e+000,
    9.88207452947443e+000,
    9.90646709095348e+000,
    7.57184878262607e+000,
    7.31206026944247e+000,
    6.78484413840554e+000,
    5.59448901089755e+000,
    6.19239113547585e+000,
    8.68830178000710e+000,
    9.70180650190874e+000,
    7.69260059703480e+000,
    4.66898345947266e+000,
    6.18989424272017e+000,
    9.35853091153231e+000,
    9.74336034601385e+000,
    8.09312230890447e+000,
    6.00215287642045e+000,
    7.03396537087180e+000,
    7.93133128773082e+000,
    6.30101290616122e+000,
    6.21252094615589e+000,
    7.52950772372159e+000,
    8.48095286976207e+000,
    7.78494470769709e+000,
    5.71040448275479e+000,
    3.53365256569602e+000,
    3.81235781582919e+000,
    4.53319514881481e+000,
    4.53940755670721e+000,
    3.55533981323242e+000,
    2.49584856900302e+000,
    1.97368691184304e+000,
    1.84594518488104e+000,
    1.78782515092330e+000,
    1.70280595259233e+000,
    1.48860029740767e+000,
    1.21195212277499e+000,
    1.14906076951460e+000,
    1.12568161704324e+000,
    1.00001465190541e+000,
    854.258970780806e-003,
    714.658737182617e-003,
    510.757316242565e-003,
    211.511286822232e-003,
    448.434352874756e-003,
    479.771744121205e-003,
    351.791143417358e-003,
    339.582985097712e-003,
    341.318520632657e-003,
    339.288104664196e-003,
    219.846725463867e-003,
    236.593658273870e-003,
    172.440463846380e-003,
    244.111841375178e-003,
    211.573340676048e-003,
    182.675556703047e-003,
    230.589649894021e-003,
    118.358958851207e-003,
    100.070563229648e-003,
    142.130873420022e-003,
    149.157773364674e-003,
    99.6104262091897e-003,
    142.088445750150e-003,
    157.897277311845e-003,
    128.969203342091e-003,
    180.806896903298e-003,
    93.8969308679754e-003,
    112.894405018200e-003,
    183.253418315541e-003,
    144.014889543707e-003,
    115.524302829396e-003,
    79.7588012435220e-003,
    125.411044467579e-003,
    74.5409943840720e-003,
    155.426892367276e-003,
    127.038327130404e-003,
    118.300914764404e-003,
    211.722135543823e-003,
    176.079403270375e-003,
    160.651380365545e-003,
    189.250815998424e-003,
    124.484387311068e-003,
    133.399670774286e-003,
    158.525022593412e-003,
    25.5038927901875e-003,
    29.7624658454548e-003,
    158.385341817682e-003,
    89.6840529008345e-003,
    95.4575213519010e-003,
    144.883925264532e-003,
    95.4575213519010e-003,
    89.6840529008345e-003,
    158.385341817682e-003,
    29.7624658454548e-003,
    25.5038927901875e-003,
    158.525022593412e-003,
    133.399670774286e-003,
    124.484387311068e-003,
    189.250815998424e-003,
    160.651380365545e-003,
    176.079403270375e-003,
    211.722135543823e-003,
    118.300914764404e-003,
    127.038327130404e-003,
    155.426892367276e-003,
    74.5409943840720e-003,
    125.411044467579e-003,
    79.7588012435220e-003,
    115.524302829396e-003,
    144.014889543707e-003,
    183.253418315541e-003,
    112.894405018200e-003,
    93.8969308679754e-003,
    180.806896903298e-003,
    128.969203342091e-003,
    157.897277311845e-003,
    142.088445750150e-003,
    99.6104262091897e-003,
    149.157773364674e-003,
    142.130873420022e-003,
    100.070563229648e-003,
    118.358958851207e-003,
    230.589649894021e-003,
    182.675556703047e-003,
    211.573340676048e-003,
    244.111841375178e-003,
    172.440463846380e-003,
    236.593658273870e-003,
    219.846725463867e-003,
    339.288104664196e-003,
    341.318520632657e-003,
    339.582985097712e-003,
    351.791143417358e-003,
    479.771744121205e-003,
    448.434352874756e-003,
    211.511286822232e-003,
    510.757316242565e-003,
    714.658737182617e-003,
    854.258970780806e-003,
    1.00001465190541e+000,
    1.12568161704324e+000,
    1.14906076951460e+000,
    1.21195212277499e+000,
    1.48860029740767e+000,
    1.70280595259233e+000,
    1.78782515092330e+000,
    1.84594518488104e+000,
    1.97368691184304e+000,
    2.49584856900302e+000,
    3.55533981323242e+000,
    4.53940755670721e+000,
    4.53319514881481e+000,
    3.81235781582919e+000,
    3.53365256569602e+000,
    5.71040448275479e+000,
    7.78494470769709e+000,
    8.48095286976207e+000,
    7.52950772372159e+000,
    6.21252094615589e+000,
    6.30101290616122e+000,
    7.93133128773082e+000,
    7.03396537087180e+000,
    6.00215287642045e+000,
    8.09312230890447e+000,
    9.74336034601385e+000,
    9.35853091153231e+000,
    6.18989424272017e+000,
    4.66898345947266e+000,
    7.69260059703480e+000,
    9.70180650190874e+000,
    8.68830178000710e+000,
    6.19239113547585e+000,
    5.59448901089755e+000,
    6.78484413840554e+000,
    7.31206026944247e+000,
    7.57184878262607e+000,
    9.90646709095348e+000,
    9.88207452947443e+000,
    8.32304382324219e+000,
    8.03912839022550e+000,
    12.6985986882990e+000,
    15.1051177978516e+000,
    16.6332203258168e+000,
    14.2821058793501e+000,
    15.6922149658203e+000,
    15.9987473921342e+000,
    13.0555849942294e+000,
    15.3039009787820e+000,
    19.9207652698864e+000,
    22.3855715664950e+000,
    20.8255004882812e+000,
    13.6418554132635e+000,
    14.7952506325462e+000,
    15.6347212357955e+000,
    20.0867267955433e+000,
    18.4555095325817e+000,
    16.9012021151456e+000,
    14.9818462025036e+000,
    16.2904482754794e+000,
    12.7545221502131e+000,
    9.58784484863281e+000,
    9.35719992897727e+000,
    14.0875993208452e+000,
    15.7849981134588e+000,
    9.01198647238991e+000,
    5.70816768299450e+000,
    13.5629383433949e+000,
    19.6236031272195e+000,
    15.9874947287820e+000,
    11.1130558360707e+000,
    10.7686386108398e+000,
    15.2434817227450e+000,
    18.7883744673295e+000,
    20.7710293856534e+000,
    17.1584098122337e+000,
    17.4590176669034e+000,
    26.5158635919744e+000,
    25.5239729447798e+000,
    17.4154607599432e+000,
    9.31914173473011e+000,
    25.8373468572443e+000,
    32.3288047096946e+000,
    26.8708357377486e+000,
    16.1963029341264e+000,
    6.99552709406072e+000,
    15.0058177601207e+000,
    17.7390719327060e+000,
    18.4683241410689e+000,
    10.0180691805753e+000,
    6.98974678733132e+000,
    13.8545989990234e+000,
    19.1451221812855e+000,
    12.7219834761186e+000,
    4.76518457586115e+000,
    14.6195345791903e+000,
    16.0164059725675e+000,
    11.3661388050426e+000,
    3.58667477694425e+000,
    3.47969401966442e+000,
    4.57600610906428e+000,
    1.60761642456055e+000,
    4.90716344659979e+000,
    3.02066109397195e+000,
    2.39524477178400e+000,
    804.657849398526e-003,
    1.90473209727894e+000,
    1.43056470697576e+000,
    503.264427185059e-003,
    788.358688354492e-003,
    1.26446403156627e+000,
    2.31024724786932e+000,
    1.43304998224432e+000
    ;
    return v;
}

void read_csv( Eigen::MatrixXd& m, std::string path ) {
    std::ifstream f( path );
    std::string line;
    auto it = m.data();

    while( std::getline(f, line) ) {
        std::stringstream lineStream(line);
        std::string cell;

        while( std::getline(lineStream, cell, ',') ){
            *it = std::stod( cell );
            it++;
        }
    }
    m.transposeInPlace();
}

Eigen::MatrixXd tvar_wvlt() {
    Eigen::MatrixXd m( 326, 326 );
    read_csv( m, "test-data/timevaryingwavelet.csv" );

    return m;
}

std::vector< Eigen::MatrixXd > frwd_op_tvw() {

    std::vector< Eigen::MatrixXd > A{ Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 )};

    std::vector< std::string > fs{ "test-data/forward_operator_tvw1.csv",
                                   "test-data/forward_operator_tvw2.csv",
                                   "test-data/forward_operator_tvw3.csv"};

    for( int i = 0; i < A.size(); ++i ) {
        read_csv( A[i], fs[i] );
    }

    return A;
}

std::vector< Eigen::MatrixXd > frwd_op_tinw() {

    std::vector< Eigen::MatrixXd > A{ Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 )};

    std::vector< std::string > fs{ "test-data/forward_operator_tinw1.csv",
                                   "test-data/forward_operator_tinw2.csv",
                                   "test-data/forward_operator_tinw3.csv"};

    for( int i = 0; i < A.size(); ++i ) {
        read_csv( A[i], fs[i] );
    }

    return A;
}

std::vector< Eigen::MatrixXd > inv_op_tvw() {

    std::vector< Eigen::MatrixXd > L{ Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 )};

    std::vector< std::string > fs{ "test-data/inverse_operator_tvw1.csv",
                                   "test-data/inverse_operator_tvw2.csv",
                                   "test-data/inverse_operator_tvw3.csv"};

    for( int i = 0; i < L.size(); ++i ) {
        read_csv( L[i], fs[i] );
    }

    return L;
}

std::vector< Eigen::MatrixXd > inv_op_tinw() {

    std::vector< Eigen::MatrixXd > L{ Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 ),
                                      Eigen::MatrixXd( 326, 326 )};

    std::vector< std::string > fs{ "test-data/inverse_operator_tinw1.csv",
                                   "test-data/inverse_operator_tinw2.csv",
                                   "test-data/inverse_operator_tinw3.csv"};

    for( int i = 0; i < L.size(); ++i ) {
        read_csv( L[i], fs[i] );
    }

    return L;
}

Eigen::MatrixXd sol_1D_tvw() {
    Eigen::MatrixXd v( 1, 322740 );
    read_csv( v, "test-data/solution_1D_tvw.csv" );

    return v;
}

Eigen::MatrixXd sol_1D_tinw() {
    Eigen::MatrixXd v( 1, 322740 );
    read_csv( v, "test-data/solution_1D_tinw.csv" );

    return v;
}

Eigen::MatrixXd sol_seg_1D_tvw() {
    Eigen::MatrixXd v( 1, 146700 );
    read_csv( v, "test-data/solution_1D_tvw_segmented.csv" );

    return v;
}

Eigen::MatrixXd sol_tvw() {
    Eigen::MatrixXd v( 1, 322740 );
    read_csv( v, "test-data/solution_tvw.csv" );

    return v;
}

Eigen::MatrixXd sol_seg_tvw() {
    Eigen::MatrixXd v( 1, 146700 );
    read_csv( v, "test-data/solution_tvw_segmented.csv" );

    return v;
}
