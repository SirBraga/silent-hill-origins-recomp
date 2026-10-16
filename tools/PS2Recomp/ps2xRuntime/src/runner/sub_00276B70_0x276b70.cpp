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

// Function: sub_00276B70
// Address: 0x276b70 - 0x276ec0
void sub_00276B70_0x276b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276B70_0x276b70");
#endif

    switch (ctx->pc) {
        case 0x276b70u: goto label_276b70;
        case 0x276b74u: goto label_276b74;
        case 0x276b78u: goto label_276b78;
        case 0x276b7cu: goto label_276b7c;
        case 0x276b80u: goto label_276b80;
        case 0x276b84u: goto label_276b84;
        case 0x276b88u: goto label_276b88;
        case 0x276b8cu: goto label_276b8c;
        case 0x276b90u: goto label_276b90;
        case 0x276b94u: goto label_276b94;
        case 0x276b98u: goto label_276b98;
        case 0x276b9cu: goto label_276b9c;
        case 0x276ba0u: goto label_276ba0;
        case 0x276ba4u: goto label_276ba4;
        case 0x276ba8u: goto label_276ba8;
        case 0x276bacu: goto label_276bac;
        case 0x276bb0u: goto label_276bb0;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        case 0x276c20u: goto label_276c20;
        case 0x276c24u: goto label_276c24;
        case 0x276c28u: goto label_276c28;
        case 0x276c2cu: goto label_276c2c;
        case 0x276c30u: goto label_276c30;
        case 0x276c34u: goto label_276c34;
        case 0x276c38u: goto label_276c38;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c40u: goto label_276c40;
        case 0x276c44u: goto label_276c44;
        case 0x276c48u: goto label_276c48;
        case 0x276c4cu: goto label_276c4c;
        case 0x276c50u: goto label_276c50;
        case 0x276c54u: goto label_276c54;
        case 0x276c58u: goto label_276c58;
        case 0x276c5cu: goto label_276c5c;
        case 0x276c60u: goto label_276c60;
        case 0x276c64u: goto label_276c64;
        case 0x276c68u: goto label_276c68;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c70u: goto label_276c70;
        case 0x276c74u: goto label_276c74;
        case 0x276c78u: goto label_276c78;
        case 0x276c7cu: goto label_276c7c;
        case 0x276c80u: goto label_276c80;
        case 0x276c84u: goto label_276c84;
        case 0x276c88u: goto label_276c88;
        case 0x276c8cu: goto label_276c8c;
        case 0x276c90u: goto label_276c90;
        case 0x276c94u: goto label_276c94;
        case 0x276c98u: goto label_276c98;
        case 0x276c9cu: goto label_276c9c;
        case 0x276ca0u: goto label_276ca0;
        case 0x276ca4u: goto label_276ca4;
        case 0x276ca8u: goto label_276ca8;
        case 0x276cacu: goto label_276cac;
        case 0x276cb0u: goto label_276cb0;
        case 0x276cb4u: goto label_276cb4;
        case 0x276cb8u: goto label_276cb8;
        case 0x276cbcu: goto label_276cbc;
        case 0x276cc0u: goto label_276cc0;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cc8u: goto label_276cc8;
        case 0x276cccu: goto label_276ccc;
        case 0x276cd0u: goto label_276cd0;
        case 0x276cd4u: goto label_276cd4;
        case 0x276cd8u: goto label_276cd8;
        case 0x276cdcu: goto label_276cdc;
        case 0x276ce0u: goto label_276ce0;
        case 0x276ce4u: goto label_276ce4;
        case 0x276ce8u: goto label_276ce8;
        case 0x276cecu: goto label_276cec;
        case 0x276cf0u: goto label_276cf0;
        case 0x276cf4u: goto label_276cf4;
        case 0x276cf8u: goto label_276cf8;
        case 0x276cfcu: goto label_276cfc;
        case 0x276d00u: goto label_276d00;
        case 0x276d04u: goto label_276d04;
        case 0x276d08u: goto label_276d08;
        case 0x276d0cu: goto label_276d0c;
        case 0x276d10u: goto label_276d10;
        case 0x276d14u: goto label_276d14;
        case 0x276d18u: goto label_276d18;
        case 0x276d1cu: goto label_276d1c;
        case 0x276d20u: goto label_276d20;
        case 0x276d24u: goto label_276d24;
        case 0x276d28u: goto label_276d28;
        case 0x276d2cu: goto label_276d2c;
        case 0x276d30u: goto label_276d30;
        case 0x276d34u: goto label_276d34;
        case 0x276d38u: goto label_276d38;
        case 0x276d3cu: goto label_276d3c;
        case 0x276d40u: goto label_276d40;
        case 0x276d44u: goto label_276d44;
        case 0x276d48u: goto label_276d48;
        case 0x276d4cu: goto label_276d4c;
        case 0x276d50u: goto label_276d50;
        case 0x276d54u: goto label_276d54;
        case 0x276d58u: goto label_276d58;
        case 0x276d5cu: goto label_276d5c;
        case 0x276d60u: goto label_276d60;
        case 0x276d64u: goto label_276d64;
        case 0x276d68u: goto label_276d68;
        case 0x276d6cu: goto label_276d6c;
        case 0x276d70u: goto label_276d70;
        case 0x276d74u: goto label_276d74;
        case 0x276d78u: goto label_276d78;
        case 0x276d7cu: goto label_276d7c;
        case 0x276d80u: goto label_276d80;
        case 0x276d84u: goto label_276d84;
        case 0x276d88u: goto label_276d88;
        case 0x276d8cu: goto label_276d8c;
        case 0x276d90u: goto label_276d90;
        case 0x276d94u: goto label_276d94;
        case 0x276d98u: goto label_276d98;
        case 0x276d9cu: goto label_276d9c;
        case 0x276da0u: goto label_276da0;
        case 0x276da4u: goto label_276da4;
        case 0x276da8u: goto label_276da8;
        case 0x276dacu: goto label_276dac;
        case 0x276db0u: goto label_276db0;
        case 0x276db4u: goto label_276db4;
        case 0x276db8u: goto label_276db8;
        case 0x276dbcu: goto label_276dbc;
        case 0x276dc0u: goto label_276dc0;
        case 0x276dc4u: goto label_276dc4;
        case 0x276dc8u: goto label_276dc8;
        case 0x276dccu: goto label_276dcc;
        case 0x276dd0u: goto label_276dd0;
        case 0x276dd4u: goto label_276dd4;
        case 0x276dd8u: goto label_276dd8;
        case 0x276ddcu: goto label_276ddc;
        case 0x276de0u: goto label_276de0;
        case 0x276de4u: goto label_276de4;
        case 0x276de8u: goto label_276de8;
        case 0x276decu: goto label_276dec;
        case 0x276df0u: goto label_276df0;
        case 0x276df4u: goto label_276df4;
        case 0x276df8u: goto label_276df8;
        case 0x276dfcu: goto label_276dfc;
        case 0x276e00u: goto label_276e00;
        case 0x276e04u: goto label_276e04;
        case 0x276e08u: goto label_276e08;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e10u: goto label_276e10;
        case 0x276e14u: goto label_276e14;
        case 0x276e18u: goto label_276e18;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e20u: goto label_276e20;
        case 0x276e24u: goto label_276e24;
        case 0x276e28u: goto label_276e28;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e30u: goto label_276e30;
        case 0x276e34u: goto label_276e34;
        case 0x276e38u: goto label_276e38;
        case 0x276e3cu: goto label_276e3c;
        case 0x276e40u: goto label_276e40;
        case 0x276e44u: goto label_276e44;
        case 0x276e48u: goto label_276e48;
        case 0x276e4cu: goto label_276e4c;
        case 0x276e50u: goto label_276e50;
        case 0x276e54u: goto label_276e54;
        case 0x276e58u: goto label_276e58;
        case 0x276e5cu: goto label_276e5c;
        case 0x276e60u: goto label_276e60;
        case 0x276e64u: goto label_276e64;
        case 0x276e68u: goto label_276e68;
        case 0x276e6cu: goto label_276e6c;
        case 0x276e70u: goto label_276e70;
        case 0x276e74u: goto label_276e74;
        case 0x276e78u: goto label_276e78;
        case 0x276e7cu: goto label_276e7c;
        case 0x276e80u: goto label_276e80;
        case 0x276e84u: goto label_276e84;
        case 0x276e88u: goto label_276e88;
        case 0x276e8cu: goto label_276e8c;
        case 0x276e90u: goto label_276e90;
        case 0x276e94u: goto label_276e94;
        case 0x276e98u: goto label_276e98;
        case 0x276e9cu: goto label_276e9c;
        case 0x276ea0u: goto label_276ea0;
        case 0x276ea4u: goto label_276ea4;
        case 0x276ea8u: goto label_276ea8;
        case 0x276eacu: goto label_276eac;
        case 0x276eb0u: goto label_276eb0;
        case 0x276eb4u: goto label_276eb4;
        case 0x276eb8u: goto label_276eb8;
        case 0x276ebcu: goto label_276ebc;
        default: break;
    }

    ctx->pc = 0x276b70u;

label_276b70:
    // 0x276b70: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x276b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
label_276b74:
    // 0x276b74: 0x7fb00380  sq          $s0, 0x380($sp)
    ctx->pc = 0x276b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 16));
label_276b78:
    // 0x276b78: 0x7fb10370  sq          $s1, 0x370($sp)
    ctx->pc = 0x276b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 17));
label_276b7c:
    // 0x276b7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x276b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276b80:
    // 0x276b80: 0x7fb20360  sq          $s2, 0x360($sp)
    ctx->pc = 0x276b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 18));
label_276b84:
    // 0x276b84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x276b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276b88:
    // 0x276b88: 0x7fb30350  sq          $s3, 0x350($sp)
    ctx->pc = 0x276b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 19));
label_276b8c:
    // 0x276b8c: 0xffbf0340  sd          $ra, 0x340($sp)
    ctx->pc = 0x276b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 31));
label_276b90:
    // 0x276b90: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x276b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_276b94:
    // 0x276b94: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x276b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_276b98:
    // 0x276b98: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x276b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_276b9c:
    // 0x276b9c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x276b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276ba0:
    // 0x276ba0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x276ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276ba4:
    // 0x276ba4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x276ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_276ba8:
    // 0x276ba8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x276ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276bac:
    // 0x276bac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x276bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276bb0:
    // 0x276bb0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x276bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276bb4:
    // 0x276bb4: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x276bb4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_276bb8:
    // 0x276bb8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x276bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276bbc:
    // 0x276bbc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x276bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276bc0:
    // 0x276bc0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x276bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276bc4:
    // 0x276bc4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x276bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_276bc8:
    // 0x276bc8: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x276bc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_276bcc:
    // 0x276bcc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x276bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_276bd0:
    // 0x276bd0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x276bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_276bd4:
    // 0x276bd4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x276bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_276bd8:
    // 0x276bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276bdc:
    // 0x276bdc: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x276bdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276be0:
    // 0x276be0: 0x0  nop
    ctx->pc = 0x276be0u;
    // NOP
label_276be4:
    // 0x276be4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_276be8:
    if (ctx->pc == 0x276BE8u) {
        ctx->pc = 0x276BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BE4u;
        // 0x276be8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BECu;
        goto label_276bec;
    }
    ctx->pc = 0x276BE4u;
    {
        const bool branch_taken_0x276be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BE4u;
        // 0x276be8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276be4) {
            ctx->pc = 0x276BF8u;
            goto label_276bf8;
        }
    }
    ctx->pc = 0x276BECu;
label_276bec:
    // 0x276bec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_276bf0:
    // 0x276bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276bf4:
    // 0x276bf4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x276bf4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_276bf8:
    // 0x276bf8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x276bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276bfc:
    // 0x276bfc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x276bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276c00:
    // 0x276c00: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x276c00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276c04:
    // 0x276c04: 0x0  nop
    ctx->pc = 0x276c04u;
    // NOP
label_276c08:
    // 0x276c08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_276c0c:
    if (ctx->pc == 0x276C0Cu) {
        ctx->pc = 0x276C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C08u;
        // 0x276c0c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C10u;
        goto label_276c10;
    }
    ctx->pc = 0x276C08u;
    {
        const bool branch_taken_0x276c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C08u;
        // 0x276c0c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c08) {
            ctx->pc = 0x276C24u;
            goto label_276c24;
        }
    }
    ctx->pc = 0x276C10u;
label_276c10:
    // 0x276c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_276c14:
    // 0x276c14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c18:
    // 0x276c18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x276c18u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_276c1c:
    // 0x276c1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_276c20:
    if (ctx->pc == 0x276C20u) {
        ctx->pc = 0x276C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C1Cu;
        // 0x276c20: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C24u;
        goto label_276c24;
    }
    ctx->pc = 0x276C1Cu;
    {
        const bool branch_taken_0x276c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C1Cu;
        // 0x276c20: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c1c) {
            ctx->pc = 0x276C30u;
            goto label_276c30;
        }
    }
    ctx->pc = 0x276C24u;
label_276c24:
    // 0x276c24: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x276c24u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_276c28:
    // 0x276c28: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x276c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276c2c:
    // 0x276c2c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x276c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_276c30:
    // 0x276c30: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x276c30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276c34:
    // 0x276c34: 0x0  nop
    ctx->pc = 0x276c34u;
    // NOP
label_276c38:
    // 0x276c38: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_276c3c:
    if (ctx->pc == 0x276C3Cu) {
        ctx->pc = 0x276C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C38u;
        // 0x276c3c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C40u;
        goto label_276c40;
    }
    ctx->pc = 0x276C38u;
    {
        const bool branch_taken_0x276c38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C38u;
        // 0x276c3c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c38) {
            ctx->pc = 0x276C54u;
            goto label_276c54;
        }
    }
    ctx->pc = 0x276C40u;
label_276c40:
    // 0x276c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_276c44:
    // 0x276c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276c48:
    // 0x276c48: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x276c48u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_276c4c:
    // 0x276c4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_276c50:
    if (ctx->pc == 0x276C50u) {
        ctx->pc = 0x276C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C4Cu;
        // 0x276c50: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C54u;
        goto label_276c54;
    }
    ctx->pc = 0x276C4Cu;
    {
        const bool branch_taken_0x276c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C4Cu;
        // 0x276c50: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276c4c) {
            ctx->pc = 0x276C5Cu;
            goto label_276c5c;
        }
    }
    ctx->pc = 0x276C54u;
label_276c54:
    // 0x276c54: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x276c54u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_276c58:
    // 0x276c58: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x276c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c5c:
    // 0x276c5c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x276c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276c60:
    // 0x276c60: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x276c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276c64:
    // 0x276c64: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x276c64u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_276c68:
    // 0x276c68: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x276c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276c6c:
    // 0x276c6c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x276c6cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_276c70:
    // 0x276c70: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x276c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_276c74:
    // 0x276c74: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x276c74u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_276c78:
    // 0x276c78: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x276c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276c7c:
    // 0x276c7c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x276c7cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_276c80:
    // 0x276c80: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x276c80u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_276c84:
    // 0x276c84: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x276c84u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_276c88:
    // 0x276c88: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x276c88u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_276c8c:
    // 0x276c8c: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x276c8cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_276c90:
    // 0x276c90: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x276c90u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_276c94:
    // 0x276c94: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x276c94u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_276c98:
    // 0x276c98: 0xc7808010  lwc1        $f0, -0x7FF0($gp)
    ctx->pc = 0x276c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c9c:
    // 0x276c9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_276ca0:
    // 0x276ca0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x276ca0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_276ca4:
    // 0x276ca4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x276ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_276ca8:
    // 0x276ca8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x276ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_276cac:
    // 0x276cac: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x276cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_276cb0:
    // 0x276cb0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x276cb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_276cb4:
    // 0x276cb4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_276cb8:
    // 0x276cb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x276cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_276cbc:
    // 0x276cbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276cc0:
    // 0x276cc0: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_276cc4:
    // 0x276cc4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x276cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_276cc8:
    // 0x276cc8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x276cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_276ccc:
    // 0x276ccc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x276cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_276cd0:
    // 0x276cd0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x276cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_276cd4:
    // 0x276cd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276cd8:
    // 0x276cd8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x276cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_276cdc:
    // 0x276cdc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_276ce0:
    if (ctx->pc == 0x276CE0u) {
        ctx->pc = 0x276CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CDCu;
        // 0x276ce0: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276CE4u;
        goto label_276ce4;
    }
    ctx->pc = 0x276CDCu;
    {
        const bool branch_taken_0x276cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CDCu;
        // 0x276ce0: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cdc) {
            ctx->pc = 0x276EA0u;
            goto label_276ea0;
        }
    }
    ctx->pc = 0x276CE4u;
label_276ce4:
    // 0x276ce4: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x276ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_276ce8:
    // 0x276ce8: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_276cec:
    // 0x276cec: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x276cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_276cf0:
    // 0x276cf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276cf4:
    // 0x276cf4: 0x4800060  bltz        $a0, . + 4 + (0x60 << 2)
label_276cf8:
    if (ctx->pc == 0x276CF8u) {
        ctx->pc = 0x276CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CF4u;
        // 0x276cf8: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276CFCu;
        goto label_276cfc;
    }
    ctx->pc = 0x276CF4u;
    {
        const bool branch_taken_0x276cf4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x276CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CF4u;
        // 0x276cf8: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cf4) {
            ctx->pc = 0x276E78u;
            goto label_276e78;
        }
    }
    ctx->pc = 0x276CFCu;
label_276cfc:
    // 0x276cfc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x276cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_276d00:
    // 0x276d00: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x276d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276d04:
    // 0x276d04: 0x0  nop
    ctx->pc = 0x276d04u;
    // NOP
label_276d08:
    // 0x276d08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x276d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276d0c:
    // 0x276d0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x276d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_276d10:
    // 0x276d10: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x276d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_276d14:
    // 0x276d14: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x276d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276d18:
    // 0x276d18: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x276d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276d1c:
    // 0x276d1c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x276d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_276d20:
    // 0x276d20: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x276d20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_276d24:
    // 0x276d24: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x276d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276d28:
    // 0x276d28: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x276d28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_276d2c:
    // 0x276d2c: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x276d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276d30:
    // 0x276d30: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x276d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276d34:
    // 0x276d34: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x276d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276d38:
    // 0x276d38: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x276d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276d3c:
    // 0x276d3c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x276d3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_276d40:
    // 0x276d40: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x276d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_276d44:
    // 0x276d44: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x276d44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_276d48:
    // 0x276d48: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_276d4c:
    if (ctx->pc == 0x276D4Cu) {
        ctx->pc = 0x276D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D48u;
        // 0x276d4c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D50u;
        goto label_276d50;
    }
    ctx->pc = 0x276D48u;
    {
        const bool branch_taken_0x276d48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D48u;
        // 0x276d4c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d48) {
            ctx->pc = 0x276DCCu;
            goto label_276dcc;
        }
    }
    ctx->pc = 0x276D50u;
label_276d50:
    // 0x276d50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x276d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276d54:
    // 0x276d54: 0x0  nop
    ctx->pc = 0x276d54u;
    // NOP
label_276d58:
    // 0x276d58: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_276d5c:
    if (ctx->pc == 0x276D5Cu) {
        ctx->pc = 0x276D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D58u;
        // 0x276d5c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D60u;
        goto label_276d60;
    }
    ctx->pc = 0x276D58u;
    {
        const bool branch_taken_0x276d58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276d58) {
            ctx->pc = 0x276D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276D58u;
            // 0x276d5c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276DF8u;
            goto label_276df8;
        }
    }
    ctx->pc = 0x276D60u;
label_276d60:
    // 0x276d60: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x276d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276d64:
    // 0x276d64: 0x0  nop
    ctx->pc = 0x276d64u;
    // NOP
label_276d68:
    // 0x276d68: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_276d6c:
    if (ctx->pc == 0x276D6Cu) {
        ctx->pc = 0x276D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D68u;
        // 0x276d6c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D70u;
        goto label_276d70;
    }
    ctx->pc = 0x276D68u;
    {
        const bool branch_taken_0x276d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276d68) {
            ctx->pc = 0x276D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276D68u;
            // 0x276d6c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276DDCu;
            goto label_276ddc;
        }
    }
    ctx->pc = 0x276D70u;
label_276d70:
    // 0x276d70: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_276d74:
    // 0x276d74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x276d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_276d78:
    // 0x276d78: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x276d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276d7c:
    // 0x276d7c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x276d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276d80:
    // 0x276d80: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x276d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_276d84:
    // 0x276d84: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x276d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_276d88:
    // 0x276d88: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x276d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_276d8c:
    // 0x276d8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x276d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_276d90:
    // 0x276d90: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x276d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_276d94:
    // 0x276d94: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_276d98:
    if (ctx->pc == 0x276D98u) {
        ctx->pc = 0x276D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D94u;
        // 0x276d98: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D9Cu;
        goto label_276d9c;
    }
    ctx->pc = 0x276D94u;
    {
        const bool branch_taken_0x276d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D94u;
        // 0x276d98: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d94) {
            ctx->pc = 0x276DB0u;
            goto label_276db0;
        }
    }
    ctx->pc = 0x276D9Cu;
label_276d9c:
    // 0x276d9c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x276d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_276da0:
    // 0x276da0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x276da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_276da4:
    // 0x276da4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x276da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_276da8:
    // 0x276da8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_276dac:
    // 0x276dac: 0x0  nop
    ctx->pc = 0x276dacu;
    // NOP
label_276db0:
    // 0x276db0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x276db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276db4:
    // 0x276db4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x276db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276db8:
    // 0x276db8: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x276db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276dbc:
    // 0x276dbc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_276dc0:
    if (ctx->pc == 0x276DC0u) {
        ctx->pc = 0x276DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DBCu;
        // 0x276dc0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DC4u;
        goto label_276dc4;
    }
    ctx->pc = 0x276DBCu;
    {
        const bool branch_taken_0x276dbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DBCu;
        // 0x276dc0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276dbc) {
            ctx->pc = 0x276E60u;
            goto label_276e60;
        }
    }
    ctx->pc = 0x276DC4u;
label_276dc4:
    // 0x276dc4: 0x10000022  b           . + 4 + (0x22 << 2)
label_276dc8:
    if (ctx->pc == 0x276DC8u) {
        ctx->pc = 0x276DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DC4u;
        // 0x276dc8: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DCCu;
        goto label_276dcc;
    }
    ctx->pc = 0x276DC4u;
    {
        const bool branch_taken_0x276dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DC4u;
        // 0x276dc8: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276dc4) {
            ctx->pc = 0x276E50u;
            goto label_276e50;
        }
    }
    ctx->pc = 0x276DCCu;
label_276dcc:
    // 0x276dcc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x276dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276dd0:
    // 0x276dd0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_276dd4:
    if (ctx->pc == 0x276DD4u) {
        ctx->pc = 0x276DD8u;
        goto label_276dd8;
    }
    ctx->pc = 0x276DD0u;
    {
        const bool branch_taken_0x276dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x276dd0) {
            ctx->pc = 0x276DE4u;
            goto label_276de4;
        }
    }
    ctx->pc = 0x276DD8u;
label_276dd8:
    // 0x276dd8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x276dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276ddc:
    // 0x276ddc: 0x10000020  b           . + 4 + (0x20 << 2)
label_276de0:
    if (ctx->pc == 0x276DE0u) {
        ctx->pc = 0x276DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DDCu;
        // 0x276de0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DE4u;
        goto label_276de4;
    }
    ctx->pc = 0x276DDCu;
    {
        const bool branch_taken_0x276ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DDCu;
        // 0x276de0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ddc) {
            ctx->pc = 0x276E60u;
            goto label_276e60;
        }
    }
    ctx->pc = 0x276DE4u;
label_276de4:
    // 0x276de4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x276de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276de8:
    // 0x276de8: 0x0  nop
    ctx->pc = 0x276de8u;
    // NOP
label_276dec:
    // 0x276dec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_276df0:
    if (ctx->pc == 0x276DF0u) {
        ctx->pc = 0x276DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DECu;
        // 0x276df0: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276DF4u;
        goto label_276df4;
    }
    ctx->pc = 0x276DECu;
    {
        const bool branch_taken_0x276dec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DECu;
        // 0x276df0: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276dec) {
            ctx->pc = 0x276E00u;
            goto label_276e00;
        }
    }
    ctx->pc = 0x276DF4u;
label_276df4:
    // 0x276df4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x276df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_276df8:
    // 0x276df8: 0x10000019  b           . + 4 + (0x19 << 2)
label_276dfc:
    if (ctx->pc == 0x276DFCu) {
        ctx->pc = 0x276DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DF8u;
        // 0x276dfc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E00u;
        goto label_276e00;
    }
    ctx->pc = 0x276DF8u;
    {
        const bool branch_taken_0x276df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276DF8u;
        // 0x276dfc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276df8) {
            ctx->pc = 0x276E60u;
            goto label_276e60;
        }
    }
    ctx->pc = 0x276E00u;
label_276e00:
    // 0x276e00: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_276e04:
    // 0x276e04: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x276e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276e08:
    // 0x276e08: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x276e08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276e0c:
    // 0x276e0c: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x276e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_276e10:
    // 0x276e10: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x276e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_276e14:
    // 0x276e14: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x276e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_276e18:
    // 0x276e18: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x276e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_276e1c:
    // 0x276e1c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x276e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_276e20:
    // 0x276e20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_276e24:
    if (ctx->pc == 0x276E24u) {
        ctx->pc = 0x276E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E20u;
        // 0x276e24: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E28u;
        goto label_276e28;
    }
    ctx->pc = 0x276E20u;
    {
        const bool branch_taken_0x276e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E20u;
        // 0x276e24: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e20) {
            ctx->pc = 0x276E38u;
            goto label_276e38;
        }
    }
    ctx->pc = 0x276E28u;
label_276e28:
    // 0x276e28: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x276e28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_276e2c:
    // 0x276e2c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x276e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_276e30:
    // 0x276e30: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x276e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_276e34:
    // 0x276e34: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x276e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_276e38:
    // 0x276e38: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x276e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_276e3c:
    // 0x276e3c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x276e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276e40:
    // 0x276e40: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x276e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276e44:
    // 0x276e44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_276e48:
    if (ctx->pc == 0x276E48u) {
        ctx->pc = 0x276E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E44u;
        // 0x276e48: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E4Cu;
        goto label_276e4c;
    }
    ctx->pc = 0x276E44u;
    {
        const bool branch_taken_0x276e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x276E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E44u;
        // 0x276e48: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e44) {
            ctx->pc = 0x276E60u;
            goto label_276e60;
        }
    }
    ctx->pc = 0x276E4Cu;
label_276e4c:
    // 0x276e4c: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x276e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_276e50:
    // 0x276e50: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x276e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276e54:
    // 0x276e54: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x276e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_276e58:
    // 0x276e58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276e58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_276e5c:
    // 0x276e5c: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x276e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_276e60:
    // 0x276e60: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x276e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276e64:
    // 0x276e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x276e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276e68:
    // 0x276e68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x276e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_276e6c:
    // 0x276e6c: 0x481ffa6  bgez        $a0, . + 4 + (-0x5A << 2)
label_276e70:
    if (ctx->pc == 0x276E70u) {
        ctx->pc = 0x276E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E6Cu;
        // 0x276e70: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E74u;
        goto label_276e74;
    }
    ctx->pc = 0x276E6Cu;
    {
        const bool branch_taken_0x276e6c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x276E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E6Cu;
        // 0x276e70: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276e6c) {
            ctx->pc = 0x276D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276d08;
        }
    }
    ctx->pc = 0x276E74u;
label_276e74:
    // 0x276e74: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x276e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276e78:
    // 0x276e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276e7c:
    // 0x276e7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x276e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276e80:
    // 0x276e80: 0x220f809  jalr        $s1
label_276e84:
    if (ctx->pc == 0x276E84u) {
        ctx->pc = 0x276E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E80u;
        // 0x276e84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E88u;
        goto label_276e88;
    }
    ctx->pc = 0x276E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x276E88u);
        ctx->pc = 0x276E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E80u;
        // 0x276e84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E80u, 0x276E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276E88u;
label_276e88:
    // 0x276e88: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_276e8c:
    if (ctx->pc == 0x276E8Cu) {
        ctx->pc = 0x276E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E88u;
        // 0x276e8c: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276E90u;
        goto label_276e90;
    }
    ctx->pc = 0x276E88u;
    {
        const bool branch_taken_0x276e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e88) {
            ctx->pc = 0x276E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276E88u;
            // 0x276e8c: 0x7bb00380  lq          $s0, 0x380($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276EA4u;
            goto label_276ea4;
        }
    }
    ctx->pc = 0x276E90u;
label_276e90:
    // 0x276e90: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x276e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_276e94:
    // 0x276e94: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x276e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_276e98:
    // 0x276e98: 0x5440ff93  bnel        $v0, $zero, . + 4 + (-0x6D << 2)
label_276e9c:
    if (ctx->pc == 0x276E9Cu) {
        ctx->pc = 0x276E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E98u;
        // 0x276e9c: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276EA0u;
        goto label_276ea0;
    }
    ctx->pc = 0x276E98u;
    {
        const bool branch_taken_0x276e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276e98) {
            ctx->pc = 0x276E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276E98u;
            // 0x276e9c: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276ce8;
        }
    }
    ctx->pc = 0x276EA0u;
label_276ea0:
    // 0x276ea0: 0x7bb00380  lq          $s0, 0x380($sp)
    ctx->pc = 0x276ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_276ea4:
    // 0x276ea4: 0x7bb10370  lq          $s1, 0x370($sp)
    ctx->pc = 0x276ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_276ea8:
    // 0x276ea8: 0x7bb20360  lq          $s2, 0x360($sp)
    ctx->pc = 0x276ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_276eac:
    // 0x276eac: 0x7bb30350  lq          $s3, 0x350($sp)
    ctx->pc = 0x276eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_276eb0:
    // 0x276eb0: 0xdfbf0340  ld          $ra, 0x340($sp)
    ctx->pc = 0x276eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 832)));
label_276eb4:
    // 0x276eb4: 0x3e00008  jr          $ra
label_276eb8:
    if (ctx->pc == 0x276EB8u) {
        ctx->pc = 0x276EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EB4u;
        // 0x276eb8: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276EBCu;
        goto label_276ebc;
    }
    ctx->pc = 0x276EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276EB4u;
        // 0x276eb8: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276EBCu;
label_276ebc:
    // 0x276ebc: 0x0  nop
    ctx->pc = 0x276ebcu;
    // NOP
    ctx->pc = 0x276ec0u;
}
