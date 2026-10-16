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

// Function: sub_001A1C18
// Address: 0x1a1c18 - 0x1a1df8
void sub_001A1C18_0x1a1c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1C18_0x1a1c18");
#endif

    switch (ctx->pc) {
        case 0x1a1c90u: goto label_1a1c90;
        case 0x1a1ce8u: goto label_1a1ce8;
        default: break;
    }

    ctx->pc = 0x1a1c18u;

    // 0x1a1c18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a1c1c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1a1c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1a1c20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a1c24: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1a1c24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a1c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1c2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a1c30: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1a1c30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1a1c34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1c38: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1a1c38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1a1c3c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1a1c3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1a1c40: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x1a1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x1a1c44: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1A1C44u;
    {
        const bool branch_taken_0x1a1c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C44u;
        // 0x1a1c48: 0x8cb10c7c  lw          $s1, 0xC7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c44) {
            ctx->pc = 0x1A1D3Cu;
            goto label_1a1d3c;
        }
    }
    ctx->pc = 0x1A1C4Cu;
    // 0x1a1c4c: 0x5620003c  bnel        $s1, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A1C4Cu;
    {
        const bool branch_taken_0x1a1c4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1c4c) {
            ctx->pc = 0x1A1C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1C4Cu;
            // 0x1a1c50: 0xc600134c  lwc1        $f0, 0x134C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D40u;
            goto label_1a1d40;
        }
    }
    ctx->pc = 0x1A1C54u;
    // 0x1a1c54: 0xc6031328  lwc1        $f3, 0x1328($s0)
    ctx->pc = 0x1a1c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1c58: 0xc4a10be0  lwc1        $f1, 0xBE0($a1)
    ctx->pc = 0x1a1c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1c5c: 0xc602132c  lwc1        $f2, 0x132C($s0)
    ctx->pc = 0x1a1c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1c60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a1c60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a1c64: 0xc6041320  lwc1        $f4, 0x1320($s0)
    ctx->pc = 0x1a1c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1c68: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1a1c68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1a1c6c: 0xc6001324  lwc1        $f0, 0x1324($s0)
    ctx->pc = 0x1a1c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1c70: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1a1c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1a1c74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a1c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a1c78: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1a1c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1a1c7c: 0x0  nop
    ctx->pc = 0x1a1c7cu;
    // NOP
    // 0x1a1c80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1a1c80u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
    // 0x1a1c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1c88: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A1C88u;
    SET_GPR_U32(ctx, 31, 0x1A1C90u);
    ctx->pc = 0x1A1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C88u;
    // 0x1a1c8c: 0x46002540  add.s       $f21, $f4, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A1C88u, 0x1A1C90u)) {
        return;
    }
    ctx->pc = 0x1A1C90u;
label_1a1c90:
    // 0x1a1c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1c94: 0x0  nop
    ctx->pc = 0x1a1c94u;
    // NOP
    // 0x1a1c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1c9c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a1c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1a1ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1ca4: 0xc6021320  lwc1        $f2, 0x1320($s0)
    ctx->pc = 0x1a1ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1ca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1cac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a1cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1a1cb0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1a1cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1a1cb4: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1a1cb4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a1cb8: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x1a1cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1cbc: 0x0  nop
    ctx->pc = 0x1a1cbcu;
    // NOP
    // 0x1a1cc0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CC0u;
    {
        const bool branch_taken_0x1a1cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CC0u;
        // 0x1a1cc4: 0xc6031324  lwc1        $f3, 0x1324($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cc0) {
            ctx->pc = 0x1A1CD0u;
            goto label_1a1cd0;
        }
    }
    ctx->pc = 0x1A1CC8u;
    // 0x1a1cc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1CC8u;
    {
        const bool branch_taken_0x1a1cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CC8u;
        // 0x1a1ccc: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cc8) {
            ctx->pc = 0x1A1CE0u;
            goto label_1a1ce0;
        }
    }
    ctx->pc = 0x1A1CD0u;
label_1a1cd0:
    // 0x1a1cd0: 0x46151834  c.lt.s      $f3, $f21
    ctx->pc = 0x1a1cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1cd4: 0x0  nop
    ctx->pc = 0x1a1cd4u;
    // NOP
    // 0x1a1cd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1CD8u;
    {
        const bool branch_taken_0x1a1cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1cd8) {
            ctx->pc = 0x1A1CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1CD8u;
            // 0x1a1cdc: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1CE0u;
            goto label_1a1ce0;
        }
    }
    ctx->pc = 0x1A1CE0u;
label_1a1ce0:
    // 0x1a1ce0: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A1CE0u;
    SET_GPR_U32(ctx, 31, 0x1A1CE8u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A1CE0u, 0x1A1CE8u)) {
        return;
    }
    ctx->pc = 0x1A1CE8u;
label_1a1ce8:
    // 0x1a1ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1cec: 0x0  nop
    ctx->pc = 0x1a1cecu;
    // NOP
    // 0x1a1cf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a1cf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a1cf4: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a1cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1a1cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a1cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a1cfc: 0x4615a881  sub.s       $f2, $f21, $f21
    ctx->pc = 0x1a1cfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[21]);
    // 0x1a1d00: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1a1d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a1d04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1d08: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a1d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a1d0c: 0x4600a880  add.s       $f2, $f21, $f0
    ctx->pc = 0x1a1d0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a1d10: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1a1d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1d14: 0x0  nop
    ctx->pc = 0x1a1d14u;
    // NOP
    // 0x1a1d18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A1D18u;
    {
        const bool branch_taken_0x1a1d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a1d18) {
            ctx->pc = 0x1A1D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D18u;
            // 0x1a1d1c: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1D20u;
            goto label_1a1d20;
        }
    }
    ctx->pc = 0x1A1D20u;
label_1a1d20:
    // 0x1a1d20: 0xc601134c  lwc1        $f1, 0x134C($s0)
    ctx->pc = 0x1a1d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1d24: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1a1d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1d28: 0x0  nop
    ctx->pc = 0x1a1d28u;
    // NOP
    // 0x1a1d2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1D2Cu;
    {
        const bool branch_taken_0x1a1d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D2Cu;
        // 0x1a1d30: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d2c) {
            ctx->pc = 0x1A1D38u;
            goto label_1a1d38;
        }
    }
    ctx->pc = 0x1A1D34u;
    // 0x1a1d34: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1a1d34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1a1d38:
    // 0x1a1d38: 0xe600134c  swc1        $f0, 0x134C($s0)
    ctx->pc = 0x1a1d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4940), bits); }
label_1a1d3c:
    // 0x1a1d3c: 0xc600134c  lwc1        $f0, 0x134C($s0)
    ctx->pc = 0x1a1d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1d40:
    // 0x1a1d40: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a1d44: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a1d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1d48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d4c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a1d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a1d50: 0xae111338  sw          $s1, 0x1338($s0)
    ctx->pc = 0x1a1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 17));
    // 0x1a1d54: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1a1d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a1d58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a1d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1d5c: 0x0  nop
    ctx->pc = 0x1a1d5cu;
    // NOP
    // 0x1a1d60: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1D60u;
    {
        const bool branch_taken_0x1a1d60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D60u;
        // 0x1a1d64: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d60) {
            ctx->pc = 0x1A1D6Cu;
            goto label_1a1d6c;
        }
    }
    ctx->pc = 0x1A1D68u;
    // 0x1a1d68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d6c:
    // 0x1a1d6c: 0xc6001348  lwc1        $f0, 0x1348($s0)
    ctx->pc = 0x1a1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1d70: 0x27a3000c  addiu       $v1, $sp, 0xC
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a1d74: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a1d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1d78: 0x37a20008  ori         $v0, $sp, 0x8
    ctx->pc = 0x1a1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x1a1d7c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a1d7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a1d80: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1a1d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a1d84: 0xe601134c  swc1        $f1, 0x134C($s0)
    ctx->pc = 0x1a1d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4940), bits); }
    // 0x1a1d88: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a1d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1d8c: 0x0  nop
    ctx->pc = 0x1a1d8cu;
    // NOP
    // 0x1a1d90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1D90u;
    {
        const bool branch_taken_0x1a1d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D90u;
        // 0x1a1d94: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d90) {
            ctx->pc = 0x1A1D9Cu;
            goto label_1a1d9c;
        }
    }
    ctx->pc = 0x1A1D98u;
    // 0x1a1d98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d9c:
    // 0x1a1d9c: 0xc60013a0  lwc1        $f0, 0x13A0($s0)
    ctx->pc = 0x1a1d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1da0: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1a1da4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a1da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1da8: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1a1da8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a1dac: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1a1dacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a1db0: 0xe6011348  swc1        $f1, 0x1348($s0)
    ctx->pc = 0x1a1db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4936), bits); }
    // 0x1a1db4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a1db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1db8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a1db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1dbc: 0x0  nop
    ctx->pc = 0x1a1dbcu;
    // NOP
    // 0x1a1dc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1DC0u;
    {
        const bool branch_taken_0x1a1dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC0u;
        // 0x1a1dc4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dc0) {
            ctx->pc = 0x1A1DCCu;
            goto label_1a1dcc;
        }
    }
    ctx->pc = 0x1A1DC8u;
    // 0x1a1dc8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a1dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dcc:
    // 0x1a1dcc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a1dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1dd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a1dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1dd4: 0xe60013a0  swc1        $f0, 0x13A0($s0)
    ctx->pc = 0x1a1dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5024), bits); }
    // 0x1a1dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a1dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1de0: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1a1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a1de4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1a1de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a1de8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DECu;
        // 0x1a1df0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1DF4u;
    // 0x1a1df4: 0x0  nop
    ctx->pc = 0x1a1df4u;
    // NOP
    ctx->pc = 0x1a1df8u;
}
