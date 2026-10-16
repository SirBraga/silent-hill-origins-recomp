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

// Function: sub_001CC198
// Address: 0x1cc198 - 0x1cc360
void sub_001CC198_0x1cc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC198_0x1cc198");
#endif

    ctx->pc = 0x1cc198u;

    // 0x1cc198: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cc19c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1a0: 0x1824018  mult        $t0, $t4, $v0
    ctx->pc = 0x1cc1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1cc1a4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1cc1a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc1ac: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cc1b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1b4: 0xac4002c4  sw          $zero, 0x2C4($v0)
    ctx->pc = 0x1cc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 708), GPR_U32(ctx, 0));
    // 0x1cc1b8: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CC1B8u;
    {
        const bool branch_taken_0x1cc1b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1B8u;
        // 0x1cc1bc: 0xac6402dc  sw          $a0, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1b8) {
            ctx->pc = 0x1CC208u;
            goto label_1cc208;
        }
    }
    ctx->pc = 0x1CC1C0u;
    // 0x1cc1c0: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1cc1c4: 0x25250274  addiu       $a1, $t1, 0x274
    ctx->pc = 0x1cc1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 628));
    // 0x1cc1c8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cc1cc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc1d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc1d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc1dc: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1cc1e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cc1e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc1e8: 0x252202cc  addiu       $v0, $t1, 0x2CC
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 716));
    // 0x1cc1ec: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1cc1ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1f0: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x1cc1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cc1f4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1cc1f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cc1f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1cc1fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cc1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cc200: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC200u;
    {
        const bool branch_taken_0x1cc200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC200u;
        // 0x1cc204: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc200) {
            ctx->pc = 0x1CC248u;
            goto label_1cc248;
        }
    }
    ctx->pc = 0x1CC208u;
label_1cc208:
    // 0x1cc208: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1cc208u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc20c: 0x0  nop
    ctx->pc = 0x1cc20cu;
    // NOP
    // 0x1cc210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc214: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc21c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1cc21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1cc220: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cc224: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc228: 0x252202cc  addiu       $v0, $t1, 0x2CC
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 716));
    // 0x1cc22c: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cc230: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1cc230u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc234: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cc234u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1cc238: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x1cc238u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1cc23c: 0x25250274  addiu       $a1, $t1, 0x274
    ctx->pc = 0x1cc23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 628));
    // 0x1cc240: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cc240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cc244: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1cc248:
    // 0x1cc248: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cc24c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc250: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc254: 0x1824018  mult        $t0, $t4, $v0
    ctx->pc = 0x1cc254u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1cc258: 0x1681821  addu        $v1, $t3, $t0
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x1cc25c: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cc260: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc264: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cc264u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x1cc268: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CC268u;
    {
        const bool branch_taken_0x1cc268 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC268u;
        // 0x1cc26c: 0xe44102c8  swc1        $f1, 0x2C8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 712), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc268) {
            ctx->pc = 0x1CC2B0u;
            goto label_1cc2b0;
        }
    }
    ctx->pc = 0x1CC270u;
    // 0x1cc270: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x1cc270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1cc274: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cc274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc278: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cc27c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc280: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc284: 0x3c014388  lui         $at, 0x4388
    ctx->pc = 0x1cc284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17288 << 16));
    // 0x1cc288: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc28c: 0x3c014308  lui         $at, 0x4308
    ctx->pc = 0x1cc28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17160 << 16));
    // 0x1cc290: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc294: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x1cc294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cc298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cc298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc29c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1cc29cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1cc2a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc2a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cc2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cc2a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CC2A8u;
    {
        const bool branch_taken_0x1cc2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2A8u;
        // 0x1cc2ac: 0xe44002d0  swc1        $f0, 0x2D0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 720), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2a8) {
            ctx->pc = 0x1CC2F8u;
            goto label_1cc2f8;
        }
    }
    ctx->pc = 0x1CC2B0u;
label_1cc2b0:
    // 0x1cc2b0: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1cc2b4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cc2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc2b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cc2bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc2c0: 0x1282021  addu        $a0, $t1, $t0
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1cc2c4: 0x3c014388  lui         $at, 0x4388
    ctx->pc = 0x1cc2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17288 << 16));
    // 0x1cc2c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc2cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cc2ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2d0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cc2d4: 0x3c014308  lui         $at, 0x4308
    ctx->pc = 0x1cc2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17160 << 16));
    // 0x1cc2d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc2dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc2e0: 0x0  nop
    ctx->pc = 0x1cc2e0u;
    // NOP
    // 0x1cc2e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc2e8: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1cc2e8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1cc2ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cc2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cc2f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cc2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cc2f4: 0xe48002d0  swc1        $f0, 0x2D0($a0)
    ctx->pc = 0x1cc2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
label_1cc2f8:
    // 0x1cc2f8: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC2F8u;
    {
        const bool branch_taken_0x1cc2f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2F8u;
        // 0x1cc2fc: 0xe46002d8  swc1        $f0, 0x2D8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2f8) {
            ctx->pc = 0x1CC31Cu;
            goto label_1cc31c;
        }
    }
    ctx->pc = 0x1CC300u;
    // 0x1cc300: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cc304: 0x3c01c308  lui         $at, 0xC308
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49928 << 16));
    // 0x1cc308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc30c: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x1cc30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc310: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cc314: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC314u;
        // 0x1cc318: 0xe44002d4  swc1        $f0, 0x2D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC31Cu;
label_1cc31c:
    // 0x1cc31c: 0xaa1021  addu        $v0, $a1, $t2
    ctx->pc = 0x1cc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1cc320: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1cc324: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1cc324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cc328: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc32c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc32cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cc330: 0x3c014388  lui         $at, 0x4388
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17288 << 16));
    // 0x1cc334: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cc334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc338: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cc33c: 0x3c014308  lui         $at, 0x4308
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17160 << 16));
    // 0x1cc340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc344: 0x1821818  mult        $v1, $t4, $v0
    ctx->pc = 0x1cc344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1cc348: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1cc348u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1cc34c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1cc350: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cc350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cc354: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cc354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cc358: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC358u;
        // 0x1cc35c: 0xe44002d4  swc1        $f0, 0x2D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 724), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC360u;
}
