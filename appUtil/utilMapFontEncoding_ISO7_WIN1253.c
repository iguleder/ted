/************************************************************************/
/*									*/
/*  Map Font Encodings Greek: WIN1253 <-> ISO 8859-7			*/
/*									*/
/************************************************************************/

#   include	"appUtilConfig.h"

#   include	"psFont.h"
#   include	<charnames.h>

const unsigned char docISO7_to_WIN1253[256]=
    {
    ASCII__nul,			/*	ISO7__nul		0	*/
    ASCII__soh,			/*	ISO7__soh		1	*/
    ASCII__stx,			/*	ISO7__stx		2	*/
    ASCII__etx,			/*	ISO7__etx		3	*/
    ASCII__eot,			/*	ISO7__eot		4	*/
    ASCII__enq,			/*	ISO7__enq		5	*/
    ASCII__ack,			/*	ISO7__ack		6	*/
    ASCII__bel,			/*	ISO7__bel		7	*/
    ASCII__bs,			/*	ISO7__bs		8	*/
    ASCII__ht,			/*	ISO7__ht		9	*/
    ASCII__nl,			/*	ISO7__nl		10	*/
    ASCII__vt,			/*	ISO7__vt		11	*/
    ASCII__np,			/*	ISO7__np		12	*/
    ASCII__cr,			/*	ISO7__cr		13	*/
    ASCII__so,			/*	ISO7__so		14	*/
    ASCII__si,			/*	ISO7__si		15	*/
    ASCII__dle,			/*	ISO7__dle		16	*/
    ASCII__dc1,			/*	ISO7__dc1		17	*/
    ASCII__dc2,			/*	ISO7__dc2		18	*/
    ASCII__dc3,			/*	ISO7__dc3		19	*/
    ASCII__dc4,			/*	ISO7__dc4		20	*/
    ASCII__nak,			/*	ISO7__nak		21	*/
    ASCII__syn,			/*	ISO7__syn		22	*/
    ASCII__etb,			/*	ISO7__etb		23	*/
    ASCII__can,			/*	ISO7__can		24	*/
    ASCII__em,			/*	ISO7__em		25	*/
    ASCII__sub,			/*	ISO7__sub		26	*/
    ASCII__esc,			/*	ISO7__esc		27	*/
    ASCII__fs,			/*	ISO7__fs		28	*/
    ASCII__gs,			/*	ISO7__gs		29	*/
    ASCII__rs,			/*	ISO7__rs		30	*/
    ASCII__us,			/*	ISO7__us		31	*/
    WIN1253_space,		/*  ISO7_space			 32	*/
    WIN1253_exclam,		/*  ISO7_exclam			 33	*/
    WIN1253_quotedbl,		/*  ISO7_quotedbl		 34	*/
    WIN1253_numbersign,		/*  ISO7_numbersign		 35	*/
    WIN1253_dollar,		/*  ISO7_dollar			 36	*/
    WIN1253_percent,		/*  ISO7_percent		 37	*/
    WIN1253_ampersand,		/*  ISO7_ampersand		 38	*/
    WIN1253_quotesingle,	/*  ISO7_quotesingle		 39	*/
    WIN1253_parenleft,		/*  ISO7_parenleft		 40	*/
    WIN1253_parenright,		/*  ISO7_parenright		 41	*/
    WIN1253_asterisk,		/*  ISO7_asterisk		 42	*/
    WIN1253_plus,		/*  ISO7_plus			 43	*/
    WIN1253_comma,		/*  ISO7_comma			 44	*/
    WIN1253_minus,		/*  ISO7_minus			 45	*/
    WIN1253_period,		/*  ISO7_period			 46	*/
    WIN1253_slash,		/*  ISO7_slash			 47	*/
    WIN1253_zero,		/*  ISO7_zero			 48	*/
    WIN1253_one,		/*  ISO7_one			 49	*/
    WIN1253_two,		/*  ISO7_two			 50	*/
    WIN1253_three,		/*  ISO7_three			 51	*/
    WIN1253_four,		/*  ISO7_four			 52	*/
    WIN1253_five,		/*  ISO7_five			 53	*/
    WIN1253_six,		/*  ISO7_six			 54	*/
    WIN1253_seven,		/*  ISO7_seven			 55	*/
    WIN1253_eight,		/*  ISO7_eight			 56	*/
    WIN1253_nine,		/*  ISO7_nine			 57	*/
    WIN1253_colon,		/*  ISO7_colon			 58	*/
    WIN1253_semicolon,		/*  ISO7_semicolon		 59	*/
    WIN1253_less,		/*  ISO7_less			 60	*/
    WIN1253_equal,		/*  ISO7_equal			 61	*/
    WIN1253_greater,		/*  ISO7_greater		 62	*/
    WIN1253_question,		/*  ISO7_question		 63	*/
    WIN1253_at,			/*  ISO7_at			 64	*/
    WIN1253_A,			/*  ISO7_A			 65	*/
    WIN1253_B,			/*  ISO7_B			 66	*/
    WIN1253_C,			/*  ISO7_C			 67	*/
    WIN1253_D,			/*  ISO7_D			 68	*/
    WIN1253_E,			/*  ISO7_E			 69	*/
    WIN1253_F,			/*  ISO7_F			 70	*/
    WIN1253_G,			/*  ISO7_G			 71	*/
    WIN1253_H,			/*  ISO7_H			 72	*/
    WIN1253_I,			/*  ISO7_I			 73	*/
    WIN1253_J,			/*  ISO7_J			 74	*/
    WIN1253_K,			/*  ISO7_K			 75	*/
    WIN1253_L,			/*  ISO7_L			 76	*/
    WIN1253_M,			/*  ISO7_M			 77	*/
    WIN1253_N,			/*  ISO7_N			 78	*/
    WIN1253_O,			/*  ISO7_O			 79	*/
    WIN1253_P,			/*  ISO7_P			 80	*/
    WIN1253_Q,			/*  ISO7_Q			 81	*/
    WIN1253_R,			/*  ISO7_R			 82	*/
    WIN1253_S,			/*  ISO7_S			 83	*/
    WIN1253_T,			/*  ISO7_T			 84	*/
    WIN1253_U,			/*  ISO7_U			 85	*/
    WIN1253_V,			/*  ISO7_V			 86	*/
    WIN1253_W,			/*  ISO7_W			 87	*/
    WIN1253_X,			/*  ISO7_X			 88	*/
    WIN1253_Y,			/*  ISO7_Y			 89	*/
    WIN1253_Z,			/*  ISO7_Z			 90	*/
    WIN1253_bracketleft,	/*  ISO7_bracketleft		 91	*/
    WIN1253_backslash,		/*  ISO7_backslash		 92	*/
    WIN1253_bracketright,	/*  ISO7_bracketright		 93	*/
    WIN1253_asciicircum,	/*  ISO7_asciicircum		 94	*/
    WIN1253_underscore,		/*  ISO7_underscore		 95	*/
    WIN1253_quoteleft,		/*  ISO7_quoteleft		 96	*/
    WIN1253_a,			/*  ISO7_a			 97	*/
    WIN1253_b,			/*  ISO7_b			 98	*/
    WIN1253_c,			/*  ISO7_c			 99	*/
    WIN1253_d,			/*  ISO7_d			100	*/
    WIN1253_e,			/*  ISO7_e			101	*/
    WIN1253_f,			/*  ISO7_f			102	*/
    WIN1253_g,			/*  ISO7_g			103	*/
    WIN1253_h,			/*  ISO7_h			104	*/
    WIN1253_i,			/*  ISO7_i			105	*/
    WIN1253_j,			/*  ISO7_j			106	*/
    WIN1253_k,			/*  ISO7_k			107	*/
    WIN1253_l,			/*  ISO7_l			108	*/
    WIN1253_m,			/*  ISO7_m			109	*/
    WIN1253_n,			/*  ISO7_n			110	*/
    WIN1253_o,			/*  ISO7_o			111	*/
    WIN1253_p,			/*  ISO7_p			112	*/
    WIN1253_q,			/*  ISO7_q			113	*/
    WIN1253_r,			/*  ISO7_r			114	*/
    WIN1253_s,			/*  ISO7_s			115	*/
    WIN1253_t,			/*  ISO7_t			116	*/
    WIN1253_u,			/*  ISO7_u			117	*/
    WIN1253_v,			/*  ISO7_v			118	*/
    WIN1253_w,			/*  ISO7_w			119	*/
    WIN1253_x,			/*  ISO7_x			120	*/
    WIN1253_y,			/*  ISO7_y			121	*/
    WIN1253_z,			/*  ISO7_z			122	*/
    WIN1253_braceleft,		/*  ISO7_braceleft		123	*/
    WIN1253_bar,		/*  ISO7_bar			124	*/
    WIN1253_braceright,		/*  ISO7_braceright		125	*/
    WIN1253_asciitilde,		/*  ISO7_asciitilde		126	*/
    WIN1251_currency,		/*  .NOTDEF_127			127	*//**/
    WIN1251_currency,		/*  .NOTDEF_128			128	*//**/
    WIN1251_currency,		/*  .NOTDEF_129			129	*//**/
    WIN1251_currency,		/*  .NOTDEF_130			130	*//**/
    WIN1251_currency,		/*  .NOTDEF_131			131	*//**/
    WIN1251_currency,		/*  .NOTDEF_132			132	*//**/
    WIN1251_currency,		/*  .NOTDEF_133			133	*//**/
    WIN1251_currency,		/*  .NOTDEF_134			134	*//**/
    WIN1251_currency,		/*  .NOTDEF_135			135	*//**/
    WIN1251_currency,		/*  .NOTDEF_136			136	*//**/
    WIN1251_currency,		/*  .NOTDEF_137			137	*//**/
    WIN1251_currency,		/*  .NOTDEF_138			138	*//**/
    WIN1251_currency,		/*  .NOTDEF_139			139	*//**/
    WIN1251_currency,		/*  .NOTDEF_140			140	*//**/
    WIN1251_currency,		/*  .NOTDEF_141			141	*//**/
    WIN1251_currency,		/*  .NOTDEF_142			142	*//**/
    WIN1251_currency,		/*  .NOTDEF_143			143	*//**/
    WIN1251_currency,		/*  .NOTDEF_144			144	*//**/
    WIN1251_currency,		/*  .NOTDEF_145			145	*//**/
    WIN1251_currency,		/*  .NOTDEF_146			146	*//**/
    WIN1251_currency,		/*  .NOTDEF_147			147	*//**/
    WIN1251_currency,		/*  .NOTDEF_148			148	*//**/
    WIN1251_currency,		/*  .NOTDEF_149			149	*//**/
    WIN1251_currency,		/*  .NOTDEF_150			150	*//**/
    WIN1251_currency,		/*  .NOTDEF_151			151	*//**/
    WIN1251_currency,		/*  .NOTDEF_152			152	*//**/
    WIN1251_currency,		/*  .NOTDEF_153			153	*//**/
    WIN1251_currency,		/*  .NOTDEF_154			154	*//**/
    WIN1251_currency,		/*  .NOTDEF_155			155	*//**/
    WIN1251_currency,		/*  .NOTDEF_156			156	*//**/
    WIN1251_currency,		/*  .NOTDEF_157			157	*//**/
    WIN1251_currency,		/*  .NOTDEF_158			158	*//**/
    WIN1251_currency,		/*  .NOTDEF_159			159	*//**/
    WIN1253_nobreakspace,	/*  ISO7_space			160	*/
    WIN1253_quoteleft,		/*  ISO7_afii64937		161	*//**/
    WIN1253_quotesingle,	/*  ISO7_afii57929		162	*//**/
    WIN1253_sterling,		/*  ISO7_sterling		163	*/
    WIN1251_currency,		/*  .NOTDEF_164			164	*//**/
    WIN1251_currency,		/*  .NOTDEF_165			165	*//**/
    WIN1253_brokenbar,		/*  ISO7_brokenbar		166	*/
    WIN1253_section,		/*  ISO7_section		167	*/
    WIN1253_dieresis,		/*  ISO7_dieresis		168	*/
    WIN1253_copyright,		/*  ISO7_copyright		169	*/
    WIN1251_currency,		/*  .NOTDEF_170			170	*//**/
    WIN1253_guillemotleft,	/*  ISO7_guillemotleft		171	*/
    WIN1253_logicalnot,		/*  ISO7_logicalnot		172	*/
    WIN1253_hyphen,		/*  ISO7_hyphen			173	*/
    WIN1251_currency,		/*  .NOTDEF_174			174	*//**/
    WIN1253_afii00208,		/*  ISO7_afii00208		175	*/
    WIN1253_degree,		/*  ISO7_degree			176	*/
    WIN1253_plusminus,		/*  ISO7_plusminus		177	*/
    WIN1253_twosuperior,	/*  ISO7_twosuperior		178	*/
    WIN1253_threesuperior,	/*  ISO7_threesuperior		179	*/
    WIN1253_tonos,		/*  ISO7_tonos			180	*/
    WIN1253_dieresistonos,	/*  ISO7_dieresistonos		181	*/
    WIN1253_Alphatonos,		/*  ISO7_Alphatonos		182	*/
    WIN1253_periodcentered,	/*  ISO7_periodcentered		183	*/
    WIN1253_Epsilontonos,	/*  ISO7_Epsilontonos		184	*/
    WIN1253_Etatonos,		/*  ISO7_Etatonos		185	*/
    WIN1253_Iotatonos,		/*  ISO7_Iotatonos		186	*/
    WIN1253_guillemotright,	/*  ISO7_guillemotright		187	*/
    WIN1253_Omicrontonos,	/*  ISO7_Omicrontonos		188	*/
    WIN1253_onehalf,		/*  ISO7_onehalf		189	*/
    WIN1253_Upsilontonos,	/*  ISO7_Upsilontonos		190	*/
    WIN1253_Omegatonos,		/*  ISO7_Omegatonos		191	*/
    WIN1253_iotadieresistonos,	/*  ISO7_iotadieresistonos	192	*/
    WIN1253_Alpha,		/*  ISO7_Alpha			193	*/
    WIN1253_Beta,		/*  ISO7_Beta			194	*/
    WIN1253_Gamma,		/*  ISO7_Gamma			195	*/
    WIN1253_Delta,		/*  ISO7_Delta			196	*/
    WIN1253_Epsilon,		/*  ISO7_Epsilon		197	*/
    WIN1253_Zeta,		/*  ISO7_Zeta			198	*/
    WIN1253_Eta,		/*  ISO7_Eta			199	*/
    WIN1253_Theta,		/*  ISO7_Theta			200	*/
    WIN1253_Iota,		/*  ISO7_Iota			201	*/
    WIN1253_Kappa,		/*  ISO7_Kappa			202	*/
    WIN1253_Lambda,		/*  ISO7_Lambda			203	*/
    WIN1253_Mu,			/*  ISO7_Mu			204	*/
    WIN1253_Nu,			/*  ISO7_Nu			205	*/
    WIN1253_Xi,			/*  ISO7_Xi			206	*/
    WIN1253_Omicron,		/*  ISO7_Omicron		207	*/
    WIN1253_Pi,			/*  ISO7_Pi			208	*/
    WIN1253_Rho,		/*  ISO7_Rho			209	*/
    WIN1251_currency,		/*  .NOTDEF_210			210	*//**/
    WIN1253_Sigma,		/*  ISO7_Sigma			211	*/
    WIN1253_Tau,		/*  ISO7_Tau			212	*/
    WIN1253_Upsilon,		/*  ISO7_Upsilon		213	*/
    WIN1253_Phi,		/*  ISO7_Phi			214	*/
    WIN1253_Chi,		/*  ISO7_Chi			215	*/
    WIN1253_Psi,		/*  ISO7_Psi			216	*/
    WIN1253_Omega,		/*  ISO7_Omega			217	*/
    WIN1253_Iotadieresis,	/*  ISO7_Iotadieresis		218	*/
    WIN1253_Upsilondieresis,	/*  ISO7_Upsilondieresis	219	*/
    WIN1253_alphatonos,		/*  ISO7_alphatonos		220	*/
    WIN1253_epsilontonos,	/*  ISO7_epsilontonos		221	*/
    WIN1253_etatonos,		/*  ISO7_etatonos		222	*/
    WIN1253_iotatonos,		/*  ISO7_iotatonos		223	*/
    WIN1253_upsilondieresistonos, /*  ISO7_upsilondieresistonos 224	*/
    WIN1253_alpha,		/*  ISO7_alpha			225	*/
    WIN1253_beta,		/*  ISO7_beta			226	*/
    WIN1253_gamma,		/*  ISO7_gamma			227	*/
    WIN1253_delta,		/*  ISO7_delta			228	*/
    WIN1253_epsilon,		/*  ISO7_epsilon		229	*/
    WIN1253_zeta,		/*  ISO7_zeta			230	*/
    WIN1253_eta,		/*  ISO7_eta			231	*/
    WIN1253_theta,		/*  ISO7_theta			232	*/
    WIN1253_iota,		/*  ISO7_iota			233	*/
    WIN1253_kappa,		/*  ISO7_kappa			234	*/
    WIN1253_lambda,		/*  ISO7_lambda			235	*/
    WIN1253_mu,			/*  ISO7_mu			236	*/
    WIN1253_nu,			/*  ISO7_nu			237	*/
    WIN1253_xi,			/*  ISO7_xi			238	*/
    WIN1253_omicron,		/*  ISO7_omicron		239	*/
    WIN1253_pi,			/*  ISO7_pi			240	*/
    WIN1253_rho,		/*  ISO7_rho			241	*/
    WIN1253_sigma1,		/*  ISO7_sigma1			242	*/
    WIN1253_sigma,		/*  ISO7_sigma			243	*/
    WIN1253_tau,		/*  ISO7_tau			244	*/
    WIN1253_upsilon,		/*  ISO7_upsilon		245	*/
    WIN1253_phi,		/*  ISO7_phi			246	*/
    WIN1253_chi,		/*  ISO7_chi			247	*/
    WIN1253_psi,		/*  ISO7_psi			248	*/
    WIN1253_omega,		/*  ISO7_omega			249	*/
    WIN1253_iotadieresis,	/*  ISO7_iotadieresis		250	*/
    WIN1253_upsilondieresis,	/*  ISO7_upsilondieresis	251	*/
    WIN1253_omicrontonos,	/*  ISO7_omicrontonos		252	*/
    WIN1253_upsilontonos,	/*  ISO7_upsilontonos		253	*/
    WIN1253_omegatonos,		/*  ISO7_omegatonos		254	*/
    0xff,
    };

const unsigned char docWIN1253_to_ISO7[256]=
    {
    0x00,			/*  				  0	*/
    0x01,			/*  				  1	*/
    0x02,			/*  				  2	*/
    0x03,			/*  				  3	*/
    0x04,			/*  				  4	*/
    0x05,			/*  				  5	*/
    0x06,			/*  				  6	*/
    0x07,			/*  				  7	*/
    0x08,			/*  				  8	*/
    0x09,			/*  				  9	*/
    0x0A,			/*  				 10	*/
    0x0B,			/*  				 11	*/
    0x0C,			/*  				 12	*/
    0x0D,			/*  				 13	*/
    0x0E,			/*  				 14	*/
    0x0F,			/*  				 15	*/
    0x10,			/*  				 16	*/
    0x11,			/*  				 17	*/
    0x12,			/*  				 18	*/
    0x13,			/*  				 19	*/
    0x14,			/*  				 20	*/
    0x15,			/*  				 21	*/
    0x16,			/*  				 22	*/
    0x17,			/*  				 23	*/
    0x18,			/*  				 24	*/
    0x19,			/*  				 25	*/
    0x1A,			/*  				 26	*/
    0x1B,			/*  				 27	*/
    0x1C,			/*  				 28	*/
    0x1D,			/*  				 29	*/
    0x1E,			/*  				 30	*/
    0x1F,			/*  				 31	*/
    ISO7_space,			/*  WIN1253_space		 32	*/
    ISO7_exclam,		/*  WIN1253_exclam		 33	*/
    ISO7_quotedbl,		/*  WIN1253_quotedbl		 34	*/
    ISO7_numbersign,		/*  WIN1253_numbersign		 35	*/
    ISO7_dollar,		/*  WIN1253_dollar		 36	*/
    ISO7_percent,		/*  WIN1253_percent		 37	*/
    ISO7_ampersand,		/*  WIN1253_ampersand		 38	*/
    ISO7_quotesingle,		/*  WIN1253_quotesingle		 39	*/
    ISO7_parenleft,		/*  WIN1253_parenleft		 40	*/
    ISO7_parenright,		/*  WIN1253_parenright		 41	*/
    ISO7_asterisk,		/*  WIN1253_asterisk		 42	*/
    ISO7_plus,			/*  WIN1253_plus		 43	*/
    ISO7_comma,			/*  WIN1253_comma		 44	*/
    ISO7_minus,			/*  WIN1253_minus		 45	*/
    ISO7_period,		/*  WIN1253_period		 46	*/
    ISO7_slash,			/*  WIN1253_slash		 47	*/
    ISO7_zero,			/*  WIN1253_zero		 48	*/
    ISO7_one,			/*  WIN1253_one			 49	*/
    ISO7_two,			/*  WIN1253_two			 50	*/
    ISO7_three,			/*  WIN1253_three		 51	*/
    ISO7_four,			/*  WIN1253_four		 52	*/
    ISO7_five,			/*  WIN1253_five		 53	*/
    ISO7_six,			/*  WIN1253_six			 54	*/
    ISO7_seven,			/*  WIN1253_seven		 55	*/
    ISO7_eight,			/*  WIN1253_eight		 56	*/
    ISO7_nine,			/*  WIN1253_nine		 57	*/
    ISO7_colon,			/*  WIN1253_colon		 58	*/
    ISO7_semicolon,		/*  WIN1253_semicolon		 59	*/
    ISO7_less,			/*  WIN1253_less		 60	*/
    ISO7_equal,			/*  WIN1253_equal		 61	*/
    ISO7_greater,		/*  WIN1253_greater		 62	*/
    ISO7_question,		/*  WIN1253_question		 63	*/
    ISO7_at,			/*  WIN1253_at			 64	*/
    ISO7_A,			/*  WIN1253_A			 65	*/
    ISO7_B,			/*  WIN1253_B			 66	*/
    ISO7_C,			/*  WIN1253_C			 67	*/
    ISO7_D,			/*  WIN1253_D			 68	*/
    ISO7_E,			/*  WIN1253_E			 69	*/
    ISO7_F,			/*  WIN1253_F			 70	*/
    ISO7_G,			/*  WIN1253_G			 71	*/
    ISO7_H,			/*  WIN1253_H			 72	*/
    ISO7_I,			/*  WIN1253_I			 73	*/
    ISO7_J,			/*  WIN1253_J			 74	*/
    ISO7_K,			/*  WIN1253_K			 75	*/
    ISO7_L,			/*  WIN1253_L			 76	*/
    ISO7_M,			/*  WIN1253_M			 77	*/
    ISO7_N,			/*  WIN1253_N			 78	*/
    ISO7_O,			/*  WIN1253_O			 79	*/
    ISO7_P,			/*  WIN1253_P			 80	*/
    ISO7_Q,			/*  WIN1253_Q			 81	*/
    ISO7_R,			/*  WIN1253_R			 82	*/
    ISO7_S,			/*  WIN1253_S			 83	*/
    ISO7_T,			/*  WIN1253_T			 84	*/
    ISO7_U,			/*  WIN1253_U			 85	*/
    ISO7_V,			/*  WIN1253_V			 86	*/
    ISO7_W,			/*  WIN1253_W			 87	*/
    ISO7_X,			/*  WIN1253_X			 88	*/
    ISO7_Y,			/*  WIN1253_Y			 89	*/
    ISO7_Z,			/*  WIN1253_Z			 90	*/
    ISO7_bracketleft,		/*  WIN1253_bracketleft		 91	*/
    ISO7_backslash,		/*  WIN1253_backslash		 92	*/
    ISO7_bracketright,		/*  WIN1253_bracketright	 93	*/
    ISO7_asciicircum,		/*  WIN1253_asciicircum		 94	*/
    ISO7_underscore,		/*  WIN1253_underscore		 95	*/
    ISO7_grave,			/*  WIN1253_grave		 96	*/
    ISO7_a,			/*  WIN1253_a			 97	*/
    ISO7_b,			/*  WIN1253_b			 98	*/
    ISO7_c,			/*  WIN1253_c			 99	*/
    ISO7_d,			/*  WIN1253_d			100	*/
    ISO7_e,			/*  WIN1253_e			101	*/
    ISO7_f,			/*  WIN1253_f			102	*/
    ISO7_g,			/*  WIN1253_g			103	*/
    ISO7_h,			/*  WIN1253_h			104	*/
    ISO7_i,			/*  WIN1253_i			105	*/
    ISO7_j,			/*  WIN1253_j			106	*/
    ISO7_k,			/*  WIN1253_k			107	*/
    ISO7_l,			/*  WIN1253_l			108	*/
    ISO7_m,			/*  WIN1253_m			109	*/
    ISO7_n,			/*  WIN1253_n			110	*/
    ISO7_o,			/*  WIN1253_o			111	*/
    ISO7_p,			/*  WIN1253_p			112	*/
    ISO7_q,			/*  WIN1253_q			113	*/
    ISO7_r,			/*  WIN1253_r			114	*/
    ISO7_s,			/*  WIN1253_s			115	*/
    ISO7_t,			/*  WIN1253_t			116	*/
    ISO7_u,			/*  WIN1253_u			117	*/
    ISO7_v,			/*  WIN1253_v			118	*/
    ISO7_w,			/*  WIN1253_w			119	*/
    ISO7_x,			/*  WIN1253_x			120	*/
    ISO7_y,			/*  WIN1253_y			121	*/
    ISO7_z,			/*  WIN1253_z			122	*/
    ISO7_braceleft,		/*  WIN1253_braceleft		123	*/
    ISO7_bar,			/*  WIN1253_bar			124	*/
    ISO7_braceright,		/*  WIN1253_braceright		125	*/
    ISO7_asciitilde,		/*  WIN1253_asciitilde		126	*/
    ISO7_copyright,		/*  WIN1253__0x7F		127	*//**/
    ISO7_copyright,		/*  WIN1253__0x80		128	*//**/
    ISO7_copyright,		/*  WIN1253__0x81		129	*//**/
    ISO7_quotesingle,		/*  WIN1253_quotesinglbase	130	*//**/
    ISO7_f,			/*  WIN1253_florin		131	*//**/
    ISO7_quotedbl,		/*  WIN1253_quotedblbase	132	*//**/
    ISO7_copyright,		/*  WIN1253_ellipsis		133	*//**/
    ISO7_copyright,		/*  WIN1253_dagger		134	*//**/
    ISO7_copyright,		/*  WIN1253_daggerdbl		135	*//**/
    ISO7_copyright,		/*  WIN1253__0x88		136	*//**/
    ISO7_copyright,		/*  WIN1253_perthousand		137	*//**/
    ISO7_copyright,		/*  WIN1253__0x8A		138	*//**/
    ISO7_guillemotleft,		/*  WIN1253_guilsinglleft	139	*//**/
    ISO7_copyright,		/*  WIN1253__0x8C		140	*//**/
    ISO7_copyright,		/*  WIN1253__0x8D		141	*//**/
    ISO7_copyright,		/*  WIN1253__0x8E		142	*//**/
    ISO7_copyright,		/*  WIN1253__0x8F		143	*//**/
    ISO7_copyright,		/*  WIN1253__0x90		144	*//**/
    ISO7_quotesingle,		/*  WIN1253_quotesingle		145	*//**/
    ISO7_quotesingle,		/*  WIN1253_quoteright		146	*//**/
    ISO7_quotedbl,		/*  WIN1253_quotedblleft	147	*//**/
    ISO7_quotedbl,		/*  WIN1253_quotedblright	148	*//**/
    ISO7_copyright,		/*  WIN1253_bullet		149	*//**/
    ISO7_minus,			/*  WIN1253_endash		150	*//**/
    ISO7_minus,			/*  WIN1253_emdash		151	*//**/
    ISO7_copyright,		/*  WIN1253__0x98		152	*//**/
    ISO7_copyright,		/*  WIN1253_trademark		153	*//**/
    ISO7_copyright,		/*  WIN1253__0x9A		154	*//**/
    ISO7_guillemotright,	/*  WIN1253_guilsinglright	155	*//**/
    ISO7_copyright,		/*  WIN1253__0x9C		156	*//**/
    ISO7_copyright,		/*  WIN1253__0x9D		157	*//**/
    ISO7_copyright,		/*  WIN1253__0x9E		158	*//**/
    ISO7_copyright,		/*  WIN1253__0x9F		159	*//**/
    ISO7_nobreakspace,		/*  WIN1253_nobreakspace	160	*/
    ISO7_dieresistonos,		/*  WIN1253_dieresistonos	161	*/
    ISO7_Alphatonos,		/*  WIN1253_Alphatonos		162	*/
    ISO7_sterling,		/*  WIN1253_sterling		163	*/
    ISO7_copyright,		/*  WIN1253_currency		164	*//**/
    ISO7_copyright,		/*  WIN1253_yen			165	*//**/
    ISO7_brokenbar,		/*  WIN1253_brokenbar		166	*/
    ISO7_section,		/*  WIN1253_section		167	*/
    ISO7_dieresis,		/*  WIN1253_dieresis		168	*/
    ISO7_copyright,		/*  WIN1253_copyright		169	*/
    ISO7_copyright,		/*  WIN1253__0xAA		170	*//**/
    ISO7_guillemotleft,		/*  WIN1253_guillemotleft	171	*/
    ISO7_logicalnot,		/*  WIN1253_logicalnot		172	*/
    ISO7_hyphen,		/*  WIN1253_hyphen		173	*/
    ISO7_copyright,		/*  WIN1253_registered		174	*//**/
    ISO7_afii00208,		/*  WIN1253_afii00208		175	*/
    ISO7_degree,		/*  WIN1253_degree		176	*/
    ISO7_plusminus,		/*  WIN1253_plusminus		177	*/
    ISO7_twosuperior,		/*  WIN1253_twosuperior		178	*/
    ISO7_threesuperior,		/*  WIN1253_threesuperior	179	*/
    ISO7_tonos,			/*  WIN1253_tonos		180	*/
    ISO7_mu,			/*  WIN1253_mu			181	*/
    ISO7_copyright,		/*  WIN1253_paragraph		182	*//**/
    ISO7_periodcentered,	/*  WIN1253_periodcentered	183	*/
    ISO7_Epsilontonos,		/*  WIN1253_Epsilontonos	184	*/
    ISO7_Etatonos,		/*  WIN1253_Etatonos		185	*/
    ISO7_Iotatonos,		/*  WIN1253_Iotatonos		186	*/
    ISO7_guillemotright,	/*  WIN1253_guillemotright	187	*/
    ISO7_Omicrontonos,		/*  WIN1253_Omicrontonos	188	*/
    ISO7_onehalf,		/*  WIN1253_onehalf		189	*/
    ISO7_Upsilontonos,		/*  WIN1253_Upsilontonos	190	*/
    ISO7_Omegatonos,		/*  WIN1253_Omegatonos		191	*/
    ISO7_iotadieresistonos,	/*  WIN1253_iotadieresistonos	192	*/
    ISO7_Alpha,			/*  WIN1253_Alpha		193	*/
    ISO7_Beta,			/*  WIN1253_Beta		194	*/
    ISO7_Gamma,			/*  WIN1253_Gamma		195	*/
    ISO7_Delta,			/*  WIN1253_Delta		196	*/
    ISO7_Epsilon,		/*  WIN1253_Epsilon		197	*/
    ISO7_Zeta,			/*  WIN1253_Zeta		198	*/
    ISO7_Eta,			/*  WIN1253_Eta			199	*/
    ISO7_Theta,			/*  WIN1253_Theta		200	*/
    ISO7_Iota,			/*  WIN1253_Iota		201	*/
    ISO7_Kappa,			/*  WIN1253_Kappa		202	*/
    ISO7_Lambda,		/*  WIN1253_Lambda		203	*/
    ISO7_Mu,			/*  WIN1253_Mu			204	*/
    ISO7_Nu,			/*  WIN1253_Nu			205	*/
    ISO7_Xi,			/*  WIN1253_Xi			206	*/
    ISO7_Omicron,		/*  WIN1253_Omicron		207	*/
    ISO7_Pi,			/*  WIN1253_Pi			208	*/
    ISO7_Rho,			/*  WIN1253_Rho			209	*/
    ISO7_copyright,		/*  WIN1253__0xD2		210	*//**/
    ISO7_Sigma,			/*  WIN1253_Sigma		211	*/
    ISO7_Tau,			/*  WIN1253_Tau			212	*/
    ISO7_Upsilon,		/*  WIN1253_Upsilon		213	*/
    ISO7_Phi,			/*  WIN1253_Phi			214	*/
    ISO7_Chi,			/*  WIN1253_Chi			215	*/
    ISO7_Psi,			/*  WIN1253_Psi			216	*/
    ISO7_Omega,			/*  WIN1253_Omega		217	*/
    ISO7_Iotadieresis,		/*  WIN1253_Iotadieresis	218	*/
    ISO7_Upsilondieresis,	/*  WIN1253_Upsilondieresis	219	*/
    ISO7_alphatonos,		/*  WIN1253_alphatonos		220	*/
    ISO7_epsilontonos,		/*  WIN1253_epsilontonos	221	*/
    ISO7_etatonos,		/*  WIN1253_etatonos		222	*/
    ISO7_iotatonos,		/*  WIN1253_iotatonos		223	*/
    ISO7_upsilondieresistonos,	/*  WIN1253_upsilondieresistonos 224	*/
    ISO7_alpha,			/*  WIN1253_alpha		225	*/
    ISO7_beta,			/*  WIN1253_beta		226	*/
    ISO7_gamma,			/*  WIN1253_gamma		227	*/
    ISO7_delta,			/*  WIN1253_delta		228	*/
    ISO7_epsilon,		/*  WIN1253_epsilon		229	*/
    ISO7_zeta,			/*  WIN1253_zeta		230	*/
    ISO7_eta,			/*  WIN1253_eta			231	*/
    ISO7_theta,			/*  WIN1253_theta		232	*/
    ISO7_iota,			/*  WIN1253_iota		233	*/
    ISO7_kappa,			/*  WIN1253_kappa		234	*/
    ISO7_lambda,		/*  WIN1253_lambda		235	*/
    ISO7_mu,			/*  WIN1253_mu			236	*/
    ISO7_nu,			/*  WIN1253_nu			237	*/
    ISO7_xi,			/*  WIN1253_xi			238	*/
    ISO7_omicron,		/*  WIN1253_omicron		239	*/
    ISO7_pi,			/*  WIN1253_pi			240	*/
    ISO7_rho,			/*  WIN1253_rho			241	*/
    ISO7_sigma1,		/*  WIN1253_sigma1		242	*/
    ISO7_sigma,			/*  WIN1253_sigma		243	*/
    ISO7_tau,			/*  WIN1253_tau			244	*/
    ISO7_upsilon,		/*  WIN1253_upsilon		245	*/
    ISO7_phi,			/*  WIN1253_phi			246	*/
    ISO7_chi,			/*  WIN1253_chi			247	*/
    ISO7_psi,			/*  WIN1253_psi			248	*/
    ISO7_omega,			/*  WIN1253_omega		249	*/
    ISO7_iotadieresis,		/*  WIN1253_iotadieresis	250	*/
    ISO7_upsilondieresis,	/*  WIN1253_upsilondieresis	251	*/
    ISO7_omicrontonos,		/*  WIN1253_omicrontonos	252	*/
    ISO7_upsilontonos,		/*  WIN1253_upsilontonos	253	*/
    ISO7_omegatonos,		/*  WIN1253_omegatonos		254	*/
    ISO7_copyright,		/*  WIN1253__0xFF		255	*/
    };

