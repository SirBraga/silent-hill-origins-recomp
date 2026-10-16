#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279968
// Address: 0x279968 - 0x279df8
void sub_00279968_0x279968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279968_0x279968");
#endif

    switch (ctx->pc) {
        case 0x279968u: goto label_279968;
        case 0x27996cu: goto label_27996c;
        case 0x279970u: goto label_279970;
        case 0x279974u: goto label_279974;
        case 0x279978u: goto label_279978;
        case 0x27997cu: goto label_27997c;
        case 0x279980u: goto label_279980;
        case 0x279984u: goto label_279984;
        case 0x279988u: goto label_279988;
        case 0x27998cu: goto label_27998c;
        case 0x279990u: goto label_279990;
        case 0x279994u: goto label_279994;
        case 0x279998u: goto label_279998;
        case 0x27999cu: goto label_27999c;
        case 0x2799a0u: goto label_2799a0;
        case 0x2799a4u: goto label_2799a4;
        case 0x2799a8u: goto label_2799a8;
        case 0x2799acu: goto label_2799ac;
        case 0x2799b0u: goto label_2799b0;
        case 0x2799b4u: goto label_2799b4;
        case 0x2799b8u: goto label_2799b8;
        case 0x2799bcu: goto label_2799bc;
        case 0x2799c0u: goto label_2799c0;
        case 0x2799c4u: goto label_2799c4;
        case 0x2799c8u: goto label_2799c8;
        case 0x2799ccu: goto label_2799cc;
        case 0x2799d0u: goto label_2799d0;
        case 0x2799d4u: goto label_2799d4;
        case 0x2799d8u: goto label_2799d8;
        case 0x2799dcu: goto label_2799dc;
        case 0x2799e0u: goto label_2799e0;
        case 0x2799e4u: goto label_2799e4;
        case 0x2799e8u: goto label_2799e8;
        case 0x2799ecu: goto label_2799ec;
        case 0x2799f0u: goto label_2799f0;
        case 0x2799f4u: goto label_2799f4;
        case 0x2799f8u: goto label_2799f8;
        case 0x2799fcu: goto label_2799fc;
        case 0x279a00u: goto label_279a00;
        case 0x279a04u: goto label_279a04;
        case 0x279a08u: goto label_279a08;
        case 0x279a0cu: goto label_279a0c;
        case 0x279a10u: goto label_279a10;
        case 0x279a14u: goto label_279a14;
        case 0x279a18u: goto label_279a18;
        case 0x279a1cu: goto label_279a1c;
        case 0x279a20u: goto label_279a20;
        case 0x279a24u: goto label_279a24;
        case 0x279a28u: goto label_279a28;
        case 0x279a2cu: goto label_279a2c;
        case 0x279a30u: goto label_279a30;
        case 0x279a34u: goto label_279a34;
        case 0x279a38u: goto label_279a38;
        case 0x279a3cu: goto label_279a3c;
        case 0x279a40u: goto label_279a40;
        case 0x279a44u: goto label_279a44;
        case 0x279a48u: goto label_279a48;
        case 0x279a4cu: goto label_279a4c;
        case 0x279a50u: goto label_279a50;
        case 0x279a54u: goto label_279a54;
        case 0x279a58u: goto label_279a58;
        case 0x279a5cu: goto label_279a5c;
        case 0x279a60u: goto label_279a60;
        case 0x279a64u: goto label_279a64;
        case 0x279a68u: goto label_279a68;
        case 0x279a6cu: goto label_279a6c;
        case 0x279a70u: goto label_279a70;
        case 0x279a74u: goto label_279a74;
        case 0x279a78u: goto label_279a78;
        case 0x279a7cu: goto label_279a7c;
        case 0x279a80u: goto label_279a80;
        case 0x279a84u: goto label_279a84;
        case 0x279a88u: goto label_279a88;
        case 0x279a8cu: goto label_279a8c;
        case 0x279a90u: goto label_279a90;
        case 0x279a94u: goto label_279a94;
        case 0x279a98u: goto label_279a98;
        case 0x279a9cu: goto label_279a9c;
        case 0x279aa0u: goto label_279aa0;
        case 0x279aa4u: goto label_279aa4;
        case 0x279aa8u: goto label_279aa8;
        case 0x279aacu: goto label_279aac;
        case 0x279ab0u: goto label_279ab0;
        case 0x279ab4u: goto label_279ab4;
        case 0x279ab8u: goto label_279ab8;
        case 0x279abcu: goto label_279abc;
        case 0x279ac0u: goto label_279ac0;
        case 0x279ac4u: goto label_279ac4;
        case 0x279ac8u: goto label_279ac8;
        case 0x279accu: goto label_279acc;
        case 0x279ad0u: goto label_279ad0;
        case 0x279ad4u: goto label_279ad4;
        case 0x279ad8u: goto label_279ad8;
        case 0x279adcu: goto label_279adc;
        case 0x279ae0u: goto label_279ae0;
        case 0x279ae4u: goto label_279ae4;
        case 0x279ae8u: goto label_279ae8;
        case 0x279aecu: goto label_279aec;
        case 0x279af0u: goto label_279af0;
        case 0x279af4u: goto label_279af4;
        case 0x279af8u: goto label_279af8;
        case 0x279afcu: goto label_279afc;
        case 0x279b00u: goto label_279b00;
        case 0x279b04u: goto label_279b04;
        case 0x279b08u: goto label_279b08;
        case 0x279b0cu: goto label_279b0c;
        case 0x279b10u: goto label_279b10;
        case 0x279b14u: goto label_279b14;
        case 0x279b18u: goto label_279b18;
        case 0x279b1cu: goto label_279b1c;
        case 0x279b20u: goto label_279b20;
        case 0x279b24u: goto label_279b24;
        case 0x279b28u: goto label_279b28;
        case 0x279b2cu: goto label_279b2c;
        case 0x279b30u: goto label_279b30;
        case 0x279b34u: goto label_279b34;
        case 0x279b38u: goto label_279b38;
        case 0x279b3cu: goto label_279b3c;
        case 0x279b40u: goto label_279b40;
        case 0x279b44u: goto label_279b44;
        case 0x279b48u: goto label_279b48;
        case 0x279b4cu: goto label_279b4c;
        case 0x279b50u: goto label_279b50;
        case 0x279b54u: goto label_279b54;
        case 0x279b58u: goto label_279b58;
        case 0x279b5cu: goto label_279b5c;
        case 0x279b60u: goto label_279b60;
        case 0x279b64u: goto label_279b64;
        case 0x279b68u: goto label_279b68;
        case 0x279b6cu: goto label_279b6c;
        case 0x279b70u: goto label_279b70;
        case 0x279b74u: goto label_279b74;
        case 0x279b78u: goto label_279b78;
        case 0x279b7cu: goto label_279b7c;
        case 0x279b80u: goto label_279b80;
        case 0x279b84u: goto label_279b84;
        case 0x279b88u: goto label_279b88;
        case 0x279b8cu: goto label_279b8c;
        case 0x279b90u: goto label_279b90;
        case 0x279b94u: goto label_279b94;
        case 0x279b98u: goto label_279b98;
        case 0x279b9cu: goto label_279b9c;
        case 0x279ba0u: goto label_279ba0;
        case 0x279ba4u: goto label_279ba4;
        case 0x279ba8u: goto label_279ba8;
        case 0x279bacu: goto label_279bac;
        case 0x279bb0u: goto label_279bb0;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bb8u: goto label_279bb8;
        case 0x279bbcu: goto label_279bbc;
        case 0x279bc0u: goto label_279bc0;
        case 0x279bc4u: goto label_279bc4;
        case 0x279bc8u: goto label_279bc8;
        case 0x279bccu: goto label_279bcc;
        case 0x279bd0u: goto label_279bd0;
        case 0x279bd4u: goto label_279bd4;
        case 0x279bd8u: goto label_279bd8;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be0u: goto label_279be0;
        case 0x279be4u: goto label_279be4;
        case 0x279be8u: goto label_279be8;
        case 0x279becu: goto label_279bec;
        case 0x279bf0u: goto label_279bf0;
        case 0x279bf4u: goto label_279bf4;
        case 0x279bf8u: goto label_279bf8;
        case 0x279bfcu: goto label_279bfc;
        case 0x279c00u: goto label_279c00;
        case 0x279c04u: goto label_279c04;
        case 0x279c08u: goto label_279c08;
        case 0x279c0cu: goto label_279c0c;
        case 0x279c10u: goto label_279c10;
        case 0x279c14u: goto label_279c14;
        case 0x279c18u: goto label_279c18;
        case 0x279c1cu: goto label_279c1c;
        case 0x279c20u: goto label_279c20;
        case 0x279c24u: goto label_279c24;
        case 0x279c28u: goto label_279c28;
        case 0x279c2cu: goto label_279c2c;
        case 0x279c30u: goto label_279c30;
        case 0x279c34u: goto label_279c34;
        case 0x279c38u: goto label_279c38;
        case 0x279c3cu: goto label_279c3c;
        case 0x279c40u: goto label_279c40;
        case 0x279c44u: goto label_279c44;
        case 0x279c48u: goto label_279c48;
        case 0x279c4cu: goto label_279c4c;
        case 0x279c50u: goto label_279c50;
        case 0x279c54u: goto label_279c54;
        case 0x279c58u: goto label_279c58;
        case 0x279c5cu: goto label_279c5c;
        case 0x279c60u: goto label_279c60;
        case 0x279c64u: goto label_279c64;
        case 0x279c68u: goto label_279c68;
        case 0x279c6cu: goto label_279c6c;
        case 0x279c70u: goto label_279c70;
        case 0x279c74u: goto label_279c74;
        case 0x279c78u: goto label_279c78;
        case 0x279c7cu: goto label_279c7c;
        case 0x279c80u: goto label_279c80;
        case 0x279c84u: goto label_279c84;
        case 0x279c88u: goto label_279c88;
        case 0x279c8cu: goto label_279c8c;
        case 0x279c90u: goto label_279c90;
        case 0x279c94u: goto label_279c94;
        case 0x279c98u: goto label_279c98;
        case 0x279c9cu: goto label_279c9c;
        case 0x279ca0u: goto label_279ca0;
        case 0x279ca4u: goto label_279ca4;
        case 0x279ca8u: goto label_279ca8;
        case 0x279cacu: goto label_279cac;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cb4u: goto label_279cb4;
        case 0x279cb8u: goto label_279cb8;
        case 0x279cbcu: goto label_279cbc;
        case 0x279cc0u: goto label_279cc0;
        case 0x279cc4u: goto label_279cc4;
        case 0x279cc8u: goto label_279cc8;
        case 0x279cccu: goto label_279ccc;
        case 0x279cd0u: goto label_279cd0;
        case 0x279cd4u: goto label_279cd4;
        case 0x279cd8u: goto label_279cd8;
        case 0x279cdcu: goto label_279cdc;
        case 0x279ce0u: goto label_279ce0;
        case 0x279ce4u: goto label_279ce4;
        case 0x279ce8u: goto label_279ce8;
        case 0x279cecu: goto label_279cec;
        case 0x279cf0u: goto label_279cf0;
        case 0x279cf4u: goto label_279cf4;
        case 0x279cf8u: goto label_279cf8;
        case 0x279cfcu: goto label_279cfc;
        case 0x279d00u: goto label_279d00;
        case 0x279d04u: goto label_279d04;
        case 0x279d08u: goto label_279d08;
        case 0x279d0cu: goto label_279d0c;
        case 0x279d10u: goto label_279d10;
        case 0x279d14u: goto label_279d14;
        case 0x279d18u: goto label_279d18;
        case 0x279d1cu: goto label_279d1c;
        case 0x279d20u: goto label_279d20;
        case 0x279d24u: goto label_279d24;
        case 0x279d28u: goto label_279d28;
        case 0x279d2cu: goto label_279d2c;
        case 0x279d30u: goto label_279d30;
        case 0x279d34u: goto label_279d34;
        case 0x279d38u: goto label_279d38;
        case 0x279d3cu: goto label_279d3c;
        case 0x279d40u: goto label_279d40;
        case 0x279d44u: goto label_279d44;
        case 0x279d48u: goto label_279d48;
        case 0x279d4cu: goto label_279d4c;
        case 0x279d50u: goto label_279d50;
        case 0x279d54u: goto label_279d54;
        case 0x279d58u: goto label_279d58;
        case 0x279d5cu: goto label_279d5c;
        case 0x279d60u: goto label_279d60;
        case 0x279d64u: goto label_279d64;
        case 0x279d68u: goto label_279d68;
        case 0x279d6cu: goto label_279d6c;
        case 0x279d70u: goto label_279d70;
        case 0x279d74u: goto label_279d74;
        case 0x279d78u: goto label_279d78;
        case 0x279d7cu: goto label_279d7c;
        case 0x279d80u: goto label_279d80;
        case 0x279d84u: goto label_279d84;
        case 0x279d88u: goto label_279d88;
        case 0x279d8cu: goto label_279d8c;
        case 0x279d90u: goto label_279d90;
        case 0x279d94u: goto label_279d94;
        case 0x279d98u: goto label_279d98;
        case 0x279d9cu: goto label_279d9c;
        case 0x279da0u: goto label_279da0;
        case 0x279da4u: goto label_279da4;
        case 0x279da8u: goto label_279da8;
        case 0x279dacu: goto label_279dac;
        case 0x279db0u: goto label_279db0;
        case 0x279db4u: goto label_279db4;
        case 0x279db8u: goto label_279db8;
        case 0x279dbcu: goto label_279dbc;
        case 0x279dc0u: goto label_279dc0;
        case 0x279dc4u: goto label_279dc4;
        case 0x279dc8u: goto label_279dc8;
        case 0x279dccu: goto label_279dcc;
        case 0x279dd0u: goto label_279dd0;
        case 0x279dd4u: goto label_279dd4;
        case 0x279dd8u: goto label_279dd8;
        case 0x279ddcu: goto label_279ddc;
        case 0x279de0u: goto label_279de0;
        case 0x279de4u: goto label_279de4;
        case 0x279de8u: goto label_279de8;
        case 0x279decu: goto label_279dec;
        case 0x279df0u: goto label_279df0;
        case 0x279df4u: goto label_279df4;
        default: break;
    }

    ctx->pc = 0x279968u;

label_279968:
    // 0x279968: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x279968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_27996c:
    // 0x27996c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x27996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_279970:
    // 0x279970: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x279970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_279974:
    // 0x279974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x279974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_279978:
    // 0x279978: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x279978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_27997c:
    // 0x27997c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27997cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279980:
    // 0x279980: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x279980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_279984:
    // 0x279984: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x279984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_279988:
    // 0x279988: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x279988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_27998c:
    // 0x27998c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27998cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_279990:
    // 0x279990: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x279990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_279994:
    // 0x279994: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x279994u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_279998:
    // 0x279998: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x279998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_27999c:
    // 0x27999c: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x27999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_2799a0:
    // 0x2799a0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2799a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_2799a4:
    // 0x2799a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2799a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2799a8:
    // 0x2799a8: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x2799a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2799ac:
    // 0x2799ac: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x2799acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2799b0:
    // 0x2799b0: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2799b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2799b4:
    // 0x2799b4: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2799b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2799b8:
    // 0x2799b8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2799b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2799bc:
    // 0x2799bc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2799bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2799c0:
    // 0x2799c0: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2799c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2799c4:
    // 0x2799c4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2799c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2799c8:
    // 0x2799c8: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2799c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2799cc:
    // 0x2799cc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2799ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2799d0:
    // 0x2799d0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2799d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2799d4:
    // 0x2799d4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x2799d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_2799d8:
    // 0x2799d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2799d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2799dc:
    // 0x2799dc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2799dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_2799e0:
    // 0x2799e0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2799e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2799e4:
    // 0x2799e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2799e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2799e8:
    // 0x2799e8: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x2799e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_2799ec:
    // 0x2799ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2799ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2799f0:
    // 0x2799f0: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x2799f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2799f4:
    // 0x2799f4: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x2799f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2799f8:
    // 0x2799f8: 0x186000ee  blez        $v1, . + 4 + (0xEE << 2)
label_2799fc:
    if (ctx->pc == 0x2799FCu) {
        ctx->pc = 0x2799FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799F8u;
        // 0x2799fc: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279A00u;
        goto label_279a00;
    }
    ctx->pc = 0x2799F8u;
    {
        const bool branch_taken_0x2799f8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2799FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2799F8u;
        // 0x2799fc: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2799f8) {
            ctx->pc = 0x279DB4u;
            goto label_279db4;
        }
    }
    ctx->pc = 0x279A00u;
label_279a00:
    // 0x279a00: 0xc7978028  lwc1        $f23, -0x7FD8($gp)
    ctx->pc = 0x279a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_279a04:
    // 0x279a04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279a08:
    // 0x279a08: 0xc796802c  lwc1        $f22, -0x7FD4($gp)
    ctx->pc = 0x279a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_279a0c:
    // 0x279a0c: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x279a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_279a10:
    // 0x279a10: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x279a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_279a14:
    // 0x279a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x279a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_279a18:
    // 0x279a18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_279a1c:
    // 0x279a1c: 0x0  nop
    ctx->pc = 0x279a1cu;
    // NOP
label_279a20:
    // 0x279a20: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x279a20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_279a24:
    // 0x279a24: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x279a24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_279a28:
    // 0x279a28: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x279a28u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_279a2c:
    // 0x279a2c: 0x552818  mult        $a1, $v0, $s5
    ctx->pc = 0x279a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_279a30:
    // 0x279a30: 0x753018  mult        $a2, $v1, $s5
    ctx->pc = 0x279a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_279a34:
    // 0x279a34: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x279a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_279a38:
    // 0x279a38: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x279a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_279a3c:
    // 0x279a3c: 0xd32821  addu        $a1, $a2, $s3
    ctx->pc = 0x279a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_279a40:
    // 0x279a40: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x279a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_279a44:
    // 0x279a44: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x279a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_279a48:
    // 0x279a48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a4c:
    // 0x279a4c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x279a4cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_279a50:
    // 0x279a50: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x279a50u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_279a54:
    // 0x279a54: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a58:
    // 0x279a58: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x279a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_279a5c:
    // 0x279a5c: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x279a5cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_279a60:
    // 0x279a60: 0xe7aa0044  swc1        $f10, 0x44($sp)
    ctx->pc = 0x279a60u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_279a64:
    // 0x279a64: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x279a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_279a68:
    // 0x279a68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a6c:
    // 0x279a6c: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x279a6cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_279a70:
    // 0x279a70: 0xe7a90048  swc1        $f9, 0x48($sp)
    ctx->pc = 0x279a70u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_279a74:
    // 0x279a74: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x279a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279a78:
    // 0x279a78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a7c:
    // 0x279a7c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x279a7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_279a80:
    // 0x279a80: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x279a80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_279a84:
    // 0x279a84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a88:
    // 0x279a88: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x279a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_279a8c:
    // 0x279a8c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x279a8cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_279a90:
    // 0x279a90: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x279a90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_279a94:
    // 0x279a94: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x279a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279a98:
    // 0x279a98: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279a9c:
    // 0x279a9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279a9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279aa0:
    // 0x279aa0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x279aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_279aa4:
    // 0x279aa4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x279aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_279aa8:
    // 0x279aa8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x279aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279aac:
    // 0x279aac: 0x460429c2  mul.s       $f7, $f5, $f4
    ctx->pc = 0x279aacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_279ab0:
    // 0x279ab0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ab4:
    // 0x279ab4: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x279ab4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_279ab8:
    // 0x279ab8: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x279ab8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_279abc:
    // 0x279abc: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x279abcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_279ac0:
    // 0x279ac0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x279ac0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_279ac4:
    // 0x279ac4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x279ac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_279ac8:
    // 0x279ac8: 0x46071981  sub.s       $f6, $f3, $f7
    ctx->pc = 0x279ac8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_279acc:
    // 0x279acc: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x279accu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_279ad0:
    // 0x279ad0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x279ad0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_279ad4:
    // 0x279ad4: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x279ad4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_279ad8:
    // 0x279ad8: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x279ad8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_279adc:
    // 0x279adc: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x279adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_279ae0:
    // 0x279ae0: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x279ae0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_279ae4:
    // 0x279ae4: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x279ae4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_279ae8:
    // 0x279ae8: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x279ae8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_279aec:
    // 0x279aec: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x279aecu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
label_279af0:
    // 0x279af0: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x279af0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_279af4:
    // 0x279af4: 0x4608b834  c.lt.s      $f23, $f8
    ctx->pc = 0x279af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279af8:
    // 0x279af8: 0x0  nop
    ctx->pc = 0x279af8u;
    // NOP
label_279afc:
    // 0x279afc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_279b00:
    if (ctx->pc == 0x279B00u) {
        ctx->pc = 0x279B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AFCu;
        // 0x279b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B04u;
        goto label_279b04;
    }
    ctx->pc = 0x279AFCu;
    {
        const bool branch_taken_0x279afc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279AFCu;
        // 0x279b00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279afc) {
            ctx->pc = 0x279B08u;
            goto label_279b08;
        }
    }
    ctx->pc = 0x279B04u;
label_279b04:
    // 0x279b04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x279b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279b08:
    // 0x279b08: 0x506000a6  beql        $v1, $zero, . + 4 + (0xA6 << 2)
label_279b0c:
    if (ctx->pc == 0x279B0Cu) {
        ctx->pc = 0x279B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B08u;
        // 0x279b0c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B10u;
        goto label_279b10;
    }
    ctx->pc = 0x279B08u;
    {
        const bool branch_taken_0x279b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279b08) {
            ctx->pc = 0x279B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279B08u;
            // 0x279b0c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279DA4u;
            goto label_279da4;
        }
    }
    ctx->pc = 0x279B10u;
label_279b10:
    // 0x279b10: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x279b10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
label_279b14:
    // 0x279b14: 0x46160282  mul.s       $f10, $f0, $f22
    ctx->pc = 0x279b14u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_279b18:
    // 0x279b18: 0x460a42c1  sub.s       $f11, $f8, $f10
    ctx->pc = 0x279b18u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
label_279b1c:
    // 0x279b1c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x279b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279b20:
    // 0x279b20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279b24:
    // 0x279b24: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x279b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_279b28:
    // 0x279b28: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x279b28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_279b2c:
    // 0x279b2c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x279b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279b30:
    // 0x279b30: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x279b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_279b34:
    // 0x279b34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279b38:
    // 0x279b38: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x279b38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_279b3c:
    // 0x279b3c: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x279b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_279b40:
    // 0x279b40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279b44:
    // 0x279b44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279b44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279b48:
    // 0x279b48: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x279b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_279b4c:
    // 0x279b4c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x279b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_279b50:
    // 0x279b50: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x279b50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_279b54:
    // 0x279b54: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x279b54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_279b58:
    // 0x279b58: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x279b58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_279b5c:
    // 0x279b5c: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x279b5cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_279b60:
    // 0x279b60: 0x46095036  c.le.s      $f10, $f9
    ctx->pc = 0x279b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279b64:
    // 0x279b64: 0x0  nop
    ctx->pc = 0x279b64u;
    // NOP
label_279b68:
    // 0x279b68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_279b6c:
    if (ctx->pc == 0x279B6Cu) {
        ctx->pc = 0x279B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B68u;
        // 0x279b6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B70u;
        goto label_279b70;
    }
    ctx->pc = 0x279B68u;
    {
        const bool branch_taken_0x279b68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B68u;
        // 0x279b6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b68) {
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B70u;
label_279b70:
    // 0x279b70: 0x460b4836  c.le.s      $f9, $f11
    ctx->pc = 0x279b70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279b74:
    // 0x279b74: 0x0  nop
    ctx->pc = 0x279b74u;
    // NOP
label_279b78:
    // 0x279b78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279b7c:
    if (ctx->pc == 0x279B7Cu) {
        ctx->pc = 0x279B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B78u;
        // 0x279b7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B80u;
        goto label_279b80;
    }
    ctx->pc = 0x279B78u;
    {
        const bool branch_taken_0x279b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279b78) {
            ctx->pc = 0x279B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279B78u;
            // 0x279b7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279B80u;
            goto label_279b80;
        }
    }
    ctx->pc = 0x279B80u;
label_279b80:
    // 0x279b80: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_279b84:
    if (ctx->pc == 0x279B84u) {
        ctx->pc = 0x279B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B80u;
        // 0x279b84: 0xc7a30068  lwc1        $f3, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279B88u;
        goto label_279b88;
    }
    ctx->pc = 0x279B80u;
    {
        const bool branch_taken_0x279b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B80u;
        // 0x279b84: 0xc7a30068  lwc1        $f3, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b80) {
            ctx->pc = 0x279DA0u;
            goto label_279da0;
        }
    }
    ctx->pc = 0x279B88u;
label_279b88:
    // 0x279b88: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x279b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279b8c:
    // 0x279b8c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x279b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279b90:
    // 0x279b90: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x279b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_279b94:
    // 0x279b94: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x279b94u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_279b98:
    // 0x279b98: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x279b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279b9c:
    // 0x279b9c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x279b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279ba0:
    // 0x279ba0: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x279ba0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_279ba4:
    // 0x279ba4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x279ba4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_279ba8:
    // 0x279ba8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x279ba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_279bac:
    // 0x279bac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x279bacu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_279bb0:
    // 0x279bb0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x279bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_279bb4:
    // 0x279bb4: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x279bb4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_279bb8:
    // 0x279bb8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x279bb8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_279bbc:
    // 0x279bbc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x279bbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_279bc0:
    // 0x279bc0: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x279bc0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_279bc4:
    // 0x279bc4: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x279bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_279bc8:
    // 0x279bc8: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x279bc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_279bcc:
    // 0x279bcc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x279bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279bd0:
    // 0x279bd0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x279bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279bd4:
    // 0x279bd4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x279bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_279bd8:
    // 0x279bd8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x279bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279bdc:
    // 0x279bdc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x279bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_279be0:
    // 0x279be0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x279be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_279be4:
    // 0x279be4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x279be4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_279be8:
    // 0x279be8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x279be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_279bec:
    // 0x279bec: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x279becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279bf0:
    // 0x279bf0: 0x0  nop
    ctx->pc = 0x279bf0u;
    // NOP
label_279bf4:
    // 0x279bf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_279bf8:
    if (ctx->pc == 0x279BF8u) {
        ctx->pc = 0x279BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BF4u;
        // 0x279bf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279BFCu;
        goto label_279bfc;
    }
    ctx->pc = 0x279BF4u;
    {
        const bool branch_taken_0x279bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BF4u;
        // 0x279bf8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bf4) {
            ctx->pc = 0x279C10u;
            goto label_279c10;
        }
    }
    ctx->pc = 0x279BFCu;
label_279bfc:
    // 0x279bfc: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x279bfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_279c00:
    // 0x279c00: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x279c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279c04:
    // 0x279c04: 0x0  nop
    ctx->pc = 0x279c04u;
    // NOP
label_279c08:
    // 0x279c08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279c0c:
    if (ctx->pc == 0x279C0Cu) {
        ctx->pc = 0x279C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C08u;
        // 0x279c0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C10u;
        goto label_279c10;
    }
    ctx->pc = 0x279C08u;
    {
        const bool branch_taken_0x279c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279c08) {
            ctx->pc = 0x279C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C08u;
            // 0x279c0c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C10u;
            goto label_279c10;
        }
    }
    ctx->pc = 0x279C10u;
label_279c10:
    // 0x279c10: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_279c14:
    if (ctx->pc == 0x279C14u) {
        ctx->pc = 0x279C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C10u;
        // 0x279c14: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C18u;
        goto label_279c18;
    }
    ctx->pc = 0x279C10u;
    {
        const bool branch_taken_0x279c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C10u;
        // 0x279c14: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c10) {
            ctx->pc = 0x279DA0u;
            goto label_279da0;
        }
    }
    ctx->pc = 0x279C18u;
label_279c18:
    // 0x279c18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x279c18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279c1c:
    // 0x279c1c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x279c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279c20:
    // 0x279c20: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x279c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_279c24:
    // 0x279c24: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x279c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279c28:
    // 0x279c28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x279c28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_279c2c:
    // 0x279c2c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x279c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279c30:
    // 0x279c30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x279c30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_279c34:
    // 0x279c34: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x279c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279c38:
    // 0x279c38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x279c38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_279c3c:
    // 0x279c3c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x279c3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_279c40:
    // 0x279c40: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x279c40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_279c44:
    // 0x279c44: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x279c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279c48:
    // 0x279c48: 0x0  nop
    ctx->pc = 0x279c48u;
    // NOP
label_279c4c:
    // 0x279c4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_279c50:
    if (ctx->pc == 0x279C50u) {
        ctx->pc = 0x279C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C4Cu;
        // 0x279c50: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C54u;
        goto label_279c54;
    }
    ctx->pc = 0x279C4Cu;
    {
        const bool branch_taken_0x279c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C4Cu;
        // 0x279c50: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c4c) {
            ctx->pc = 0x279C64u;
            goto label_279c64;
        }
    }
    ctx->pc = 0x279C54u;
label_279c54:
    // 0x279c54: 0x460b1036  c.le.s      $f2, $f11
    ctx->pc = 0x279c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279c58:
    // 0x279c58: 0x0  nop
    ctx->pc = 0x279c58u;
    // NOP
label_279c5c:
    // 0x279c5c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_279c60:
    if (ctx->pc == 0x279C60u) {
        ctx->pc = 0x279C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C5Cu;
        // 0x279c60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C64u;
        goto label_279c64;
    }
    ctx->pc = 0x279C5Cu;
    {
        const bool branch_taken_0x279c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279c5c) {
            ctx->pc = 0x279C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C5Cu;
            // 0x279c60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C64u;
            goto label_279c64;
        }
    }
    ctx->pc = 0x279C64u;
label_279c64:
    // 0x279c64: 0x5060004f  beql        $v1, $zero, . + 4 + (0x4F << 2)
label_279c68:
    if (ctx->pc == 0x279C68u) {
        ctx->pc = 0x279C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C64u;
        // 0x279c68: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279C6Cu;
        goto label_279c6c;
    }
    ctx->pc = 0x279C64u;
    {
        const bool branch_taken_0x279c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c64) {
            ctx->pc = 0x279C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279C64u;
            // 0x279c68: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279DA4u;
            goto label_279da4;
        }
    }
    ctx->pc = 0x279C6Cu;
label_279c6c:
    // 0x279c6c: 0x46086303  div.s       $f12, $f12, $f8
    ctx->pc = 0x279c6cu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[8]);
label_279c70:
    // 0x279c70: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x279c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_279c74:
    // 0x279c74: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x279c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_279c78:
    // 0x279c78: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_279c7c:
    // 0x279c7c: 0xb3a60023  sdl         $a2, 0x23($sp)
    ctx->pc = 0x279c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_279c80:
    // 0x279c80: 0xb7a6001c  sdr         $a2, 0x1C($sp)
    ctx->pc = 0x279c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_279c84:
    // 0x279c84: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x279c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_279c88:
    // 0x279c88: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x279c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
label_279c8c:
    // 0x279c8c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x279c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_279c90:
    // 0x279c90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x279c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_279c94:
    // 0x279c94: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x279c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_279c98:
    // 0x279c98: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x279c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_279c9c:
    // 0x279c9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279ca0:
    // 0x279ca0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x279ca0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_279ca4:
    // 0x279ca4: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x279ca4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_279ca8:
    // 0x279ca8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279cac:
    // 0x279cac: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x279cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_279cb0:
    // 0x279cb0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x279cb0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_279cb4:
    // 0x279cb4: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x279cb4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_279cb8:
    // 0x279cb8: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x279cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_279cbc:
    // 0x279cbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279cc0:
    // 0x279cc0: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x279cc0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_279cc4:
    // 0x279cc4: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x279cc4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_279cc8:
    // 0x279cc8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x279cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279ccc:
    // 0x279ccc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x279cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279cd0:
    // 0x279cd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x279cd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_279cd4:
    // 0x279cd4: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x279cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_279cd8:
    // 0x279cd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x279cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279cdc:
    // 0x279cdc: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x279cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_279ce0:
    // 0x279ce0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x279ce0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_279ce4:
    // 0x279ce4: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x279ce4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_279ce8:
    // 0x279ce8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x279ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279cec:
    // 0x279cec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x279cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279cf0:
    // 0x279cf0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279cf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_279cf4:
    // 0x279cf4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x279cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_279cf8:
    // 0x279cf8: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x279cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_279cfc:
    // 0x279cfc: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x279cfcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_279d00:
    // 0x279d00: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x279d00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_279d04:
    // 0x279d04: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x279d04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_279d08:
    // 0x279d08: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x279d08u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_279d0c:
    // 0x279d0c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x279d0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_279d10:
    // 0x279d10: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x279d10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_279d14:
    // 0x279d14: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x279d14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_279d18:
    // 0x279d18: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x279d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_279d1c:
    // 0x279d1c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x279d1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_279d20:
    // 0x279d20: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x279d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_279d24:
    // 0x279d24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x279d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_279d28:
    // 0x279d28: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x279d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_279d2c:
    // 0x279d2c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x279d2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_279d30:
    // 0x279d30: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x279d30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_279d34:
    // 0x279d34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x279d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_279d38:
    // 0x279d38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x279d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_279d3c:
    // 0x279d3c: 0x46000004  c1          0x4
    ctx->pc = 0x279d3cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_279d40:
    // 0x279d40: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x279d40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279d44:
    // 0x279d44: 0x0  nop
    ctx->pc = 0x279d44u;
    // NOP
label_279d48:
    // 0x279d48: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_279d4c:
    if (ctx->pc == 0x279D4Cu) {
        ctx->pc = 0x279D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D48u;
        // 0x279d4c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D50u;
        goto label_279d50;
    }
    ctx->pc = 0x279D48u;
    {
        const bool branch_taken_0x279d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x279D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D48u;
        // 0x279d4c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d48) {
            ctx->pc = 0x279D60u;
            goto label_279d60;
        }
    }
    ctx->pc = 0x279D50u;
label_279d50:
    // 0x279d50: 0x4600a103  div.s       $f4, $f20, $f0
    ctx->pc = 0x279d50u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_279d54:
    // 0x279d54: 0x10000004  b           . + 4 + (0x4 << 2)
label_279d58:
    if (ctx->pc == 0x279D58u) {
        ctx->pc = 0x279D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D54u;
        // 0x279d58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D5Cu;
        goto label_279d5c;
    }
    ctx->pc = 0x279D54u;
    {
        const bool branch_taken_0x279d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D54u;
        // 0x279d58: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d54) {
            ctx->pc = 0x279D68u;
            goto label_279d68;
        }
    }
    ctx->pc = 0x279D5Cu;
label_279d5c:
    // 0x279d5c: 0x0  nop
    ctx->pc = 0x279d5cu;
    // NOP
label_279d60:
    // 0x279d60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x279d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_279d64:
    // 0x279d64: 0x0  nop
    ctx->pc = 0x279d64u;
    // NOP
label_279d68:
    // 0x279d68: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x279d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279d6c:
    // 0x279d6c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x279d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_279d70:
    // 0x279d70: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x279d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_279d74:
    // 0x279d74: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x279d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_279d78:
    // 0x279d78: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x279d78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_279d7c:
    // 0x279d7c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x279d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_279d80:
    // 0x279d80: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x279d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_279d84:
    // 0x279d84: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x279d84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_279d88:
    // 0x279d88: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x279d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_279d8c:
    // 0x279d8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x279d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_279d90:
    // 0x279d90: 0x2c0f809  jalr        $s6
label_279d94:
    if (ctx->pc == 0x279D94u) {
        ctx->pc = 0x279D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D90u;
        // 0x279d94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279D98u;
        goto label_279d98;
    }
    ctx->pc = 0x279D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x279D98u);
        ctx->pc = 0x279D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D90u;
        // 0x279d94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D90u, 0x279D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279D98u;
label_279d98:
    // 0x279d98: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_279d9c:
    if (ctx->pc == 0x279D9Cu) {
        ctx->pc = 0x279D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D98u;
        // 0x279d9c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DA0u;
        goto label_279da0;
    }
    ctx->pc = 0x279D98u;
    {
        const bool branch_taken_0x279d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279d98) {
            ctx->pc = 0x279D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D98u;
            // 0x279d9c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279DB8u;
            goto label_279db8;
        }
    }
    ctx->pc = 0x279DA0u;
label_279da0:
    // 0x279da0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x279da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_279da4:
    // 0x279da4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x279da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_279da8:
    // 0x279da8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x279da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_279dac:
    // 0x279dac: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
label_279db0:
    if (ctx->pc == 0x279DB0u) {
        ctx->pc = 0x279DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DACu;
        // 0x279db0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DB4u;
        goto label_279db4;
    }
    ctx->pc = 0x279DACu;
    {
        const bool branch_taken_0x279dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DACu;
        // 0x279db0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dac) {
            ctx->pc = 0x279A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279a20;
        }
    }
    ctx->pc = 0x279DB4u;
label_279db4:
    // 0x279db4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x279db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_279db8:
    // 0x279db8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x279db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_279dbc:
    // 0x279dbc: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x279dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_279dc0:
    // 0x279dc0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x279dc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_279dc4:
    // 0x279dc4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x279dc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_279dc8:
    // 0x279dc8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x279dc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_279dcc:
    // 0x279dcc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x279dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_279dd0:
    // 0x279dd0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x279dd0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_279dd4:
    // 0x279dd4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x279dd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_279dd8:
    // 0x279dd8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x279dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_279ddc:
    // 0x279ddc: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x279ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_279de0:
    // 0x279de0: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x279de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_279de4:
    // 0x279de4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x279de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_279de8:
    // 0x279de8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x279de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_279dec:
    // 0x279dec: 0x3e00008  jr          $ra
label_279df0:
    if (ctx->pc == 0x279DF0u) {
        ctx->pc = 0x279DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DECu;
        // 0x279df0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279DF4u;
        goto label_279df4;
    }
    ctx->pc = 0x279DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DECu;
        // 0x279df0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279DF4u;
label_279df4:
    // 0x279df4: 0x0  nop
    ctx->pc = 0x279df4u;
    // NOP
    ctx->pc = 0x279df8u;
}
