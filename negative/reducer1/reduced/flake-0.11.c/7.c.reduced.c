struct FlakeEncodeParams
{
  int block_size;
};
typedef struct FlakeEncodeParams FlakeEncodeParams;
struct FlakeContext
{
  FlakeEncodeParams params;
  void *private_ctx;
};
typedef struct FlakeContext FlakeContext;
struct FlacFrame
{
  int blocksize;
};
typedef struct FlacFrame FlacFrame;
struct FlacEncodeContext
{
  FlakeEncodeParams params;
  FlacFrame frame;
};
typedef struct FlacEncodeContext FlacEncodeContext;
FlacEncodeContext *flake_encode_init_ctx;
void *flake_encode_init_tmp;
FlacFrame *flake_encode_init_frame;
int
flake_encode_init ( FlakeContext * s )
{
  flake_encode_init_tmp = calloc ( 1, sizeof ( FlacEncodeContext ) );
  flake_encode_init_ctx = flake_encode_init_tmp;
  s->private_ctx = flake_encode_init_tmp;
  flake_encode_init_frame = &flake_encode_init_ctx->frame;
  flake_encode_init_frame->blocksize =
    flake_encode_init_ctx->params.block_size;
}
int encode_frame_ch;
FlacEncodeContext *encode_frame_ctx;
int encode_frame_ctx_0;
int encode_frame_tmp___0;
int
encode_frame ( FlakeContext * s )
{
  encode_frame_ctx = s->private_ctx;
  encode_frame_ctx->params.block_size = s->params.block_size;
  {
    encode_residual ( s->private_ctx, encode_frame_ch );
  }
while_break:;
}
int flake_encode_frame_fs;
int
flake_encode_frame ( FlakeContext * s )
{
  flake_encode_frame_fs = encode_frame ( s );
}
unsigned int calc_rice_params_fixed ( int n );
FlacFrame *encode_residual_frame;
int encode_residual_n;
unsigned int encode_residual_bits_0;
int
encode_residual ( FlacEncodeContext * ctx, int ch )
{
  encode_residual_frame = &ctx->frame;
  encode_residual_n = encode_residual_frame->blocksize;
  if ( encode_residual_n < 5 )
    return;
  encode_residual_bits_0 = calc_rice_params_fixed ( encode_residual_n );
}
int calc_sums_i;
int calc_sums_cnt;
int calc_sums_pmax;
int calc_sums_n;
void *calc_rice_params_tmp;
static unsigned int
calc_rice_params ( int n )
{
  calc_rice_params_tmp = malloc ( n * sizeof ( unsigned int ) );
  {
    int j;
    unsigned int *res;
    {
      calc_sums_cnt = calc_sums_n >> calc_sums_pmax;
      res = calc_rice_params_tmp + calc_sums_i * calc_sums_cnt;
      j = 0;
      while ( 1 )
	{
	  if ( j < calc_sums_cnt )
	    goto while_break___0;
	  airac_observe ( res, j );
	  j++;
	}
    while_break___0:calc_sums_i++;
    }
  }
}
unsigned int calc_rice_params_fixed_tmp;
unsigned int
calc_rice_params_fixed ( int n )
{
  calc_rice_params_fixed_tmp = calc_rice_params ( n );
}
FlakeContext encode_file_s;
int encode_file_wf;
int encode_file_header_size;
short encode_file_wav;
unsigned int encode_file_nr;
int encode_file_tmp___4;
int encode_file_tmp___5;
int main_err;
void
main ( void )
{
  int __trans_tmp_1;
  while ( 1 )
    {
      {
	{
	  encode_file_header_size = flake_encode_init ( &encode_file_s );
	  {
	    encode_file_s.params.block_size = encode_file_nr;
	    encode_file_tmp___4 = flake_encode_frame ( &encode_file_s );
	    encode_file_tmp___5 =
	      wavfile_read_samples ( );
	    encode_file_nr = encode_file_tmp___5;
	  }
	while_break:;
	}
      }
    }
}
