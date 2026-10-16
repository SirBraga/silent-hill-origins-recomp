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

// Function: sub_002B39B8
// Address: 0x2b39b8 - 0x2b4030
void sub_002B39B8_0x2b39b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B39B8_0x2b39b8");
#endif

    switch (ctx->pc) {
        case 0x2b3a08u: goto label_2b3a08;
        case 0x2b3a58u: goto label_2b3a58;
        case 0x2b3a78u: goto label_2b3a78;
        case 0x2b3b08u: goto label_2b3b08;
        case 0x2b3b40u: goto label_2b3b40;
        case 0x2b3b78u: goto label_2b3b78;
        case 0x2b3b98u: goto label_2b3b98;
        case 0x2b3c50u: goto label_2b3c50;
        case 0x2b3c60u: goto label_2b3c60;
        case 0x2b3ce0u: goto label_2b3ce0;
        case 0x2b3de8u: goto label_2b3de8;
        case 0x2b3e80u: goto label_2b3e80;
        case 0x2b3e90u: goto label_2b3e90;
        case 0x2b3f10u: goto label_2b3f10;
        default: break;
    }

    ctx->pc = 0x2b39b8u;

    // 0x2b39b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b39b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b39bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b39bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b39c0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b39c4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b39c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b39c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b39cc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b39d0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2b39d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2b39d4: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B39D4u;
    {
        const bool branch_taken_0x2b39d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39D4u;
        // 0x2b39d8: 0x7fb60000  sq          $s6, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39d4) {
            ctx->pc = 0x2B3A34u;
            goto label_2b3a34;
        }
    }
    ctx->pc = 0x2B39DCu;
    // 0x2b39dc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2b39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b39e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b39e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b39e4: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x2b39e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b39e8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2b39e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b39ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b39ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b39f0: 0x0  nop
    ctx->pc = 0x2b39f0u;
    // NOP
    // 0x2b39f4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2B39F4u;
    {
        const bool branch_taken_0x2b39f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39F4u;
        // 0x2b39f8: 0x40682d  daddu       $t5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39f4) {
            ctx->pc = 0x2B3A2Cu;
            goto label_2b3a2c;
        }
    }
    ctx->pc = 0x2B39FCu;
    // 0x2b39fc: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x2b39fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a00: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a04: 0x0  nop
    ctx->pc = 0x2b3a04u;
    // NOP
label_2b3a08:
    // 0x2b3a08: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3a0c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2b3a10: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3A10u;
    {
        const bool branch_taken_0x2b3a10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A10u;
        // 0x2b3a14: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a10) {
            ctx->pc = 0x2B3A34u;
            goto label_2b3a34;
        }
    }
    ctx->pc = 0x2B3A18u;
    // 0x2b3a18: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3a1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b3a1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3a20: 0x0  nop
    ctx->pc = 0x2b3a20u;
    // NOP
    // 0x2b3a24: 0x4501fff8  bc1t        . + 4 + (-0x8 << 2)
    ctx->pc = 0x2B3A24u;
    {
        const bool branch_taken_0x2b3a24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A24u;
        // 0x2b3a28: 0x60682d  daddu       $t5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a24) {
            ctx->pc = 0x2B3A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a08;
        }
    }
    ctx->pc = 0x2B3A2Cu;
label_2b3a2c:
    // 0x2b3a2c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3A2Cu;
    {
        const bool branch_taken_0x2b3a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A2Cu;
        // 0x2b3a30: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a2c) {
            ctx->pc = 0x2B3A3Cu;
            goto label_2b3a3c;
        }
    }
    ctx->pc = 0x2B3A34u;
label_2b3a34:
    // 0x2b3a34: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x2B3A34u;
    {
        const bool branch_taken_0x2b3a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A34u;
        // 0x2b3a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a34) {
            ctx->pc = 0x2B4000u;
            goto label_2b4000;
        }
    }
    ctx->pc = 0x2B3A3Cu;
label_2b3a3c:
    // 0x2b3a3c: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B3A3Cu;
    {
        const bool branch_taken_0x2b3a3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2B3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A3Cu;
        // 0x2b3a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a3c) {
            ctx->pc = 0x2B3AB4u;
            goto label_2b3ab4;
        }
    }
    ctx->pc = 0x2B3A44u;
    // 0x2b3a44: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2b3a44u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a48: 0x25ac0004  addiu       $t4, $t5, 0x4
    ctx->pc = 0x2b3a48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x2b3a4c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2b3a4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a50: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2b3a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a54: 0x0  nop
    ctx->pc = 0x2b3a54u;
    // NOP
label_2b3a58:
    // 0x2b3a58: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x2b3a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b3a5c: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2b3a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2b3a60: 0xa34823  subu        $t1, $a1, $v1
    ctx->pc = 0x2b3a60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3a64: 0x520000f  bltz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B3A64u;
    {
        const bool branch_taken_0x2b3a64 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x2B3A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A64u;
        // 0x2b3a68: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a64) {
            ctx->pc = 0x2B3AA4u;
            goto label_2b3aa4;
        }
    }
    ctx->pc = 0x2B3A6Cu;
    // 0x2b3a6c: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2b3a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b3a70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b3a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3a74: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2b3a74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a78:
    // 0x2b3a78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2b3a78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3a7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b3a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b3a80: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2b3a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3a84: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2b3a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b3a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b3a8c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x2b3a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b3a90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b3a94: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b3a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b3a98: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3a98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b3a9c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B3A9Cu;
    {
        const bool branch_taken_0x2b3a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A9Cu;
        // 0x2b3aa0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a9c) {
            ctx->pc = 0x2B3A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a78;
        }
    }
    ctx->pc = 0x2B3AA4u;
label_2b3aa4:
    // 0x2b3aa4: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x2b3aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3aa8: 0x1c3102a  slt         $v0, $t6, $v1
    ctx->pc = 0x2b3aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b3aac: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B3AACu;
    {
        const bool branch_taken_0x2b3aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AACu;
        // 0x2b3ab0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3aac) {
            ctx->pc = 0x2B3A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3a58;
        }
    }
    ctx->pc = 0x2B3AB4u;
label_2b3ab4:
    // 0x2b3ab4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b3ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b3ab8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b3ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3abc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b3abcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b3ac0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b3ac0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x2b3ac4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2b3ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3ac8: 0x0  nop
    ctx->pc = 0x2b3ac8u;
    // NOP
    // 0x2b3acc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3ACCu;
    {
        const bool branch_taken_0x2b3acc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ACCu;
        // 0x2b3ad0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3acc) {
            ctx->pc = 0x2B3AECu;
            goto label_2b3aec;
        }
    }
    ctx->pc = 0x2B3AD4u;
    // 0x2b3ad4: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2b3ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3ad8: 0x0  nop
    ctx->pc = 0x2b3ad8u;
    // NOP
    // 0x2b3adc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3ADCu;
    {
        const bool branch_taken_0x2b3adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ADCu;
        // 0x2b3ae0: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3adc) {
            ctx->pc = 0x2B3AF0u;
            goto label_2b3af0;
        }
    }
    ctx->pc = 0x2B3AE4u;
    // 0x2b3ae4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b3ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b3ae8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3aec:
    // 0x2b3aec: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2b3aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b3af0:
    // 0x2b3af0: 0x14400142  bnez        $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x2B3AF0u;
    {
        const bool branch_taken_0x2b3af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AF0u;
        // 0x2b3af4: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3af0) {
            ctx->pc = 0x2B3FFCu;
            goto label_2b3ffc;
        }
    }
    ctx->pc = 0x2B3AF8u;
    // 0x2b3af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3afc: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2b3afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2b3b00: 0x25b60004  addiu       $s6, $t5, 0x4
    ctx->pc = 0x2b3b00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x2b3b04: 0x0  nop
    ctx->pc = 0x2b3b04u;
    // NOP
label_2b3b08:
    // 0x2b3b08: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2b3b0c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2b3b0cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b10: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x2b3b10u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b14: 0x1963023  subu        $a2, $t4, $s6
    ctx->pc = 0x2b3b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 22)));
    // 0x2b3b18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b3b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b3b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b20: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b3b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b3b24: 0x460060c6  mov.s       $f3, $f12
    ctx->pc = 0x2b3b24u;
    ctx->f[3] = FPU_MOV_S(ctx->f[12]);
    // 0x2b3b28: 0x2569ffff  addiu       $t1, $t3, -0x1
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2b3b2c: 0x1160000b  beqz        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3B2Cu;
    {
        const bool branch_taken_0x2b3b2c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B2Cu;
        // 0x2b3b30: 0x25750001  addiu       $s5, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b2c) {
            ctx->pc = 0x2B3B5Cu;
            goto label_2b3b5c;
        }
    }
    ctx->pc = 0x2B3B34u;
    // 0x2b3b34: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2b3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3b38: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2b3b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b3c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2b3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b3b40:
    // 0x2b3b40: 0x460c1002  mul.s       $f0, $f2, $f12
    ctx->pc = 0x2b3b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x2b3b44: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3b48: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b4c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3b50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3B54u;
    {
        const bool branch_taken_0x2b3b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B54u;
        // 0x2b3b58: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b54) {
            ctx->pc = 0x2B3B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b40;
        }
    }
    ctx->pc = 0x2B3B5Cu;
label_2b3b5c:
    // 0x2b3b5c: 0x1a20009c  blez        $s1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2B3B5Cu;
    {
        const bool branch_taken_0x2b3b5c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x2B3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B5Cu;
        // 0x2b3b60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b5c) {
            ctx->pc = 0x2B3DD0u;
            goto label_2b3dd0;
        }
    }
    ctx->pc = 0x2B3B64u;
    // 0x2b3b64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3b68: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2b3b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2b3b6c: 0x326a021  addu        $s4, $t9, $a2
    ctx->pc = 0x2b3b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2b3b70: 0x99880  sll         $s3, $t1, 2
    ctx->pc = 0x2b3b70u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3b74: 0x320902d  daddu       $s2, $t9, $zero
    ctx->pc = 0x2b3b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_2b3b78:
    // 0x2b3b78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3b7c: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2b3b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b3b80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b3b84: 0xc6870000  lwc1        $f7, 0x0($s4)
    ctx->pc = 0x2b3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2b3b88: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3B88u;
    {
        const bool branch_taken_0x2b3b88 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B88u;
        // 0x2b3b8c: 0xc4480000  lwc1        $f8, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b88) {
            ctx->pc = 0x2B3BB4u;
            goto label_2b3bb4;
        }
    }
    ctx->pc = 0x2B3B90u;
    // 0x2b3b90: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2b3b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b94: 0x2661821  addu        $v1, $s3, $a2
    ctx->pc = 0x2b3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
label_2b3b98:
    // 0x2b3b98: 0x46083802  mul.s       $f0, $f7, $f8
    ctx->pc = 0x2b3b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x2b3b9c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3ba0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ba4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3ba8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3bac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3BACu;
    {
        const bool branch_taken_0x2b3bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BACu;
        // 0x2b3bb0: 0x460101c0  add.s       $f7, $f0, $f1 (Delay Slot)
        ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bac) {
            ctx->pc = 0x2B3B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b98;
        }
    }
    ctx->pc = 0x2B3BB4u;
label_2b3bb4:
    // 0x2b3bb4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2b3bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b3bb8: 0x46043832  c.eq.s      $f7, $f4
    ctx->pc = 0x2b3bb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[7], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3bbc: 0x0  nop
    ctx->pc = 0x2b3bbcu;
    // NOP
    // 0x2b3bc0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3BC0u;
    {
        const bool branch_taken_0x2b3bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BC0u;
        // 0x2b3bc4: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bc0) {
            ctx->pc = 0x2B3BD8u;
            goto label_2b3bd8;
        }
    }
    ctx->pc = 0x2B3BC8u;
    // 0x2b3bc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b3bcc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b3bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b3bd0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2B3BD0u;
    {
        const bool branch_taken_0x2b3bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BD0u;
        // 0x2b3bd4: 0xe4480000  swc1        $f8, 0x0($v0) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3bd0) {
            ctx->pc = 0x2B3DBCu;
            goto label_2b3dbc;
        }
    }
    ctx->pc = 0x2B3BD8u;
label_2b3bd8:
    // 0x2b3bd8: 0x46071042  mul.s       $f1, $f2, $f7
    ctx->pc = 0x2b3bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2b3bdc: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x2b3bdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3be0: 0x0  nop
    ctx->pc = 0x2b3be0u;
    // NOP
    // 0x2b3be4: 0x45000076  bc1f        . + 4 + (0x76 << 2)
    ctx->pc = 0x2B3BE4u;
    {
        const bool branch_taken_0x2b3be4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3BE4u;
        // 0x2b3be8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3be4) {
            ctx->pc = 0x2B3DC0u;
            goto label_2b3dc0;
        }
    }
    ctx->pc = 0x2B3BECu;
    // 0x2b3bec: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x2b3becu;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3bf0: 0x460012c6  mov.s       $f11, $f2
    ctx->pc = 0x2b3bf0u;
    ctx->f[11] = FPU_MOV_S(ctx->f[2]);
    // 0x2b3bf4: 0x46083000  add.s       $f0, $f6, $f8
    ctx->pc = 0x2b3bf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2b3bf8: 0x46004246  mov.s       $f9, $f8
    ctx->pc = 0x2b3bf8u;
    ctx->f[9] = FPU_MOV_S(ctx->f[8]);
    // 0x2b3bfc: 0x46064034  c.lt.s      $f8, $f6
    ctx->pc = 0x2b3bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3c00: 0x46003a86  mov.s       $f10, $f7
    ctx->pc = 0x2b3c00u;
    ctx->f[10] = FPU_MOV_S(ctx->f[7]);
    // 0x2b3c04: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x2b3c04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b3c08: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3C08u;
    {
        const bool branch_taken_0x2b3c08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C08u;
        // 0x2b3c0c: 0x461100c2  mul.s       $f3, $f0, $f17 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c08) {
            ctx->pc = 0x2B3C20u;
            goto label_2b3c20;
        }
    }
    ctx->pc = 0x2B3C10u;
    // 0x2b3c10: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2b3c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3c14: 0x0  nop
    ctx->pc = 0x2b3c14u;
    // NOP
    // 0x2b3c18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3C18u;
    {
        const bool branch_taken_0x2b3c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C18u;
        // 0x2b3c1c: 0x250a0001  addiu       $t2, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c18) {
            ctx->pc = 0x2B3C2Cu;
            goto label_2b3c2c;
        }
    }
    ctx->pc = 0x2B3C20u;
label_2b3c20:
    // 0x2b3c20: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x2b3c20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b3c24: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2B3C24u;
    {
        const bool branch_taken_0x2b3c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C24u;
        // 0x2b3c28: 0x84080  sll         $t0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c24) {
            ctx->pc = 0x2B3DB0u;
            goto label_2b3db0;
        }
    }
    ctx->pc = 0x2B3C2Cu;
label_2b3c2c:
    // 0x2b3c2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3c30: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2b3c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2b3c34: 0xc78f8128  lwc1        $f15, -0x7ED8($gp)
    ctx->pc = 0x2b3c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b3c38: 0x46002386  mov.s       $f14, $f4
    ctx->pc = 0x2b3c38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[4]);
    // 0x2b3c3c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2b3c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b3c40: 0x246c021  addu        $t8, $s2, $a2
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2b3c44: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2b3c44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3c48: 0x97880  sll         $t7, $t1, 2
    ctx->pc = 0x2b3c48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3c4c: 0x0  nop
    ctx->pc = 0x2b3c4cu;
    // NOP
label_2b3c50:
    // 0x2b3c50: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3C50u;
    {
        const bool branch_taken_0x2b3c50 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C50u;
        // 0x2b3c54: 0xc7020000  lwc1        $f2, 0x0($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c50) {
            ctx->pc = 0x2B3C7Cu;
            goto label_2b3c7c;
        }
    }
    ctx->pc = 0x2B3C58u;
    // 0x2b3c58: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2b3c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c5c: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x2b3c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_2b3c60:
    // 0x2b3c60: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x2b3c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b3c64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3c68: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c6c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3c70: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3c74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3C74u;
    {
        const bool branch_taken_0x2b3c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C74u;
        // 0x2b3c78: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c74) {
            ctx->pc = 0x2B3C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3c60;
        }
    }
    ctx->pc = 0x2B3C7Cu;
label_2b3c7c:
    // 0x2b3c7c: 0x460b1002  mul.s       $f0, $f2, $f11
    ctx->pc = 0x2b3c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2b3c80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3c88: 0x0  nop
    ctx->pc = 0x2b3c88u;
    // NOP
    // 0x2b3c8c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3C8Cu;
    {
        const bool branch_taken_0x2b3c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3c8c) {
            ctx->pc = 0x2B3C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3C8Cu;
            // 0x2b3c90: 0x460a1002  mul.s       $f0, $f2, $f10 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3CA0u;
            goto label_2b3ca0;
        }
    }
    ctx->pc = 0x2B3C94u;
    // 0x2b3c94: 0x46001a46  mov.s       $f9, $f3
    ctx->pc = 0x2b3c94u;
    ctx->f[9] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3c98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3C98u;
    {
        const bool branch_taken_0x2b3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C98u;
        // 0x2b3c9c: 0x46001286  mov.s       $f10, $f2 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c98) {
            ctx->pc = 0x2B3CB8u;
            goto label_2b3cb8;
        }
    }
    ctx->pc = 0x2B3CA0u;
label_2b3ca0:
    // 0x2b3ca0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3ca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3ca4: 0x0  nop
    ctx->pc = 0x2b3ca4u;
    // NOP
    // 0x2b3ca8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x2B3CA8u;
    {
        const bool branch_taken_0x2b3ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CA8u;
        // 0x2b3cac: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ca8) {
            ctx->pc = 0x2B3DB4u;
            goto label_2b3db4;
        }
    }
    ctx->pc = 0x2B3CB0u;
    // 0x2b3cb0: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x2b3cb0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3cb4: 0x460012c6  mov.s       $f11, $f2
    ctx->pc = 0x2b3cb4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[2]);
label_2b3cb8:
    // 0x2b3cb8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3cbc: 0x2563fffe  addiu       $v1, $t3, -0x2
    ctx->pc = 0x2b3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x2b3cc0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2b3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b3cc4: 0x46061941  sub.s       $f5, $f3, $f6
    ctx->pc = 0x2b3cc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2b3cc8: 0x1120000c  beqz        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3CC8u;
    {
        const bool branch_taken_0x2b3cc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CC8u;
        // 0x2b3ccc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cc8) {
            ctx->pc = 0x2B3CFCu;
            goto label_2b3cfc;
        }
    }
    ctx->pc = 0x2B3CD0u;
    // 0x2b3cd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3cd4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b3cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cd8: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b3cdc: 0x0  nop
    ctx->pc = 0x2b3cdcu;
    // NOP
label_2b3ce0:
    // 0x2b3ce0: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x2b3ce0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b3ce4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ce8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3cec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3cf0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3cf4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3CF4u;
    {
        const bool branch_taken_0x2b3cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CF4u;
        // 0x2b3cf8: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cf4) {
            ctx->pc = 0x2B3CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3ce0;
        }
    }
    ctx->pc = 0x2B3CFCu;
label_2b3cfc:
    // 0x2b3cfc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2b3cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b3d00: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2b3d00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3d04: 0x0  nop
    ctx->pc = 0x2b3d04u;
    // NOP
    // 0x2b3d08: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3D08u;
    {
        const bool branch_taken_0x2b3d08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D08u;
        // 0x2b3d0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d08) {
            ctx->pc = 0x2B3D14u;
            goto label_2b3d14;
        }
    }
    ctx->pc = 0x2B3D10u;
    // 0x2b3d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3d14:
    // 0x2b3d14: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x2b3d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b3d18: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b3d18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b3d1c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2b3d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3d20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D20u;
    {
        const bool branch_taken_0x2b3d20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3d20) {
            ctx->pc = 0x2B3D38u;
            goto label_2b3d38;
        }
    }
    ctx->pc = 0x2B3D28u;
    // 0x2b3d28: 0x504e0006  beql        $v0, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3D28u;
    {
        const bool branch_taken_0x2b3d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3d28) {
            ctx->pc = 0x2B3D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D28u;
            // 0x2b3d2c: 0x46034801  sub.s       $f0, $f9, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D44u;
            goto label_2b3d44;
        }
    }
    ctx->pc = 0x2B3D30u;
    // 0x2b3d30: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3D30u;
    {
        const bool branch_taken_0x2b3d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D30u;
        // 0x2b3d34: 0x46093000  add.s       $f0, $f6, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d30) {
            ctx->pc = 0x2B3D7Cu;
            goto label_2b3d7c;
        }
    }
    ctx->pc = 0x2B3D38u;
label_2b3d38:
    // 0x2b3d38: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3D38u;
    {
        const bool branch_taken_0x2b3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d38) {
            ctx->pc = 0x2B3D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D38u;
            // 0x2b3d3c: 0x46093000  add.s       $f0, $f6, $f9 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D7Cu;
            goto label_2b3d7c;
        }
    }
    ctx->pc = 0x2B3D40u;
    // 0x2b3d40: 0x46034801  sub.s       $f0, $f9, $f3
    ctx->pc = 0x2b3d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_2b3d44:
    // 0x2b3d44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b3d48: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b3d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b3d4c: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x2b3d4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3d50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D50u;
    {
        const bool branch_taken_0x2b3d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3d50) {
            ctx->pc = 0x2B3D68u;
            goto label_2b3d68;
        }
    }
    ctx->pc = 0x2B3D58u;
    // 0x2b3d58: 0x104e0005  beq         $v0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D58u;
    {
        const bool branch_taken_0x2b3d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3d58) {
            ctx->pc = 0x2B3D70u;
            goto label_2b3d70;
        }
    }
    ctx->pc = 0x2B3D60u;
    // 0x2b3d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3D60u;
    {
        const bool branch_taken_0x2b3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D60u;
        // 0x2b3d64: 0x46093000  add.s       $f0, $f6, $f9 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d60) {
            ctx->pc = 0x2B3D7Cu;
            goto label_2b3d7c;
        }
    }
    ctx->pc = 0x2B3D68u;
label_2b3d68:
    // 0x2b3d68: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3D68u;
    {
        const bool branch_taken_0x2b3d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3d68) {
            ctx->pc = 0x2B3D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D68u;
            // 0x2b3d6c: 0x46093000  add.s       $f0, $f6, $f9 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D7Cu;
            goto label_2b3d7c;
        }
    }
    ctx->pc = 0x2B3D70u;
label_2b3d70:
    // 0x2b3d70: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x2b3d70u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2b3d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3D74u;
    {
        const bool branch_taken_0x2b3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D74u;
        // 0x2b3d78: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d74) {
            ctx->pc = 0x2B3D80u;
            goto label_2b3d80;
        }
    }
    ctx->pc = 0x2B3D7Cu;
label_2b3d7c:
    // 0x2b3d7c: 0x46100002  mul.s       $f0, $f0, $f16
    ctx->pc = 0x2b3d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
label_2b3d80:
    // 0x2b3d80: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x2b3d80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b3d84: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2b3d84u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3d88: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2b3d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b3d8c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b3d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b3d90: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x2b3d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2b3d94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b3d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3d98: 0x0  nop
    ctx->pc = 0x2b3d98u;
    // NOP
    // 0x2b3d9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3D9Cu;
    {
        const bool branch_taken_0x2b3d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D9Cu;
        // 0x2b3da0: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d9c) {
            ctx->pc = 0x2B3DB4u;
            goto label_2b3db4;
        }
    }
    ctx->pc = 0x2B3DA4u;
    // 0x2b3da4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x2b3da4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2b3da8: 0x15a0ffa9  bnez        $t5, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2B3DA8u;
    {
        const bool branch_taken_0x2b3da8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3da8) {
            ctx->pc = 0x2B3C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3c50;
        }
    }
    ctx->pc = 0x2B3DB0u;
label_2b3db0:
    // 0x2b3db0: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x2b3db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2b3db4:
    // 0x2b3db4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2b3db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b3db8: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2b3db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b3dbc:
    // 0x2b3dbc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2b3dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3dc0:
    // 0x2b3dc0: 0x460040c6  mov.s       $f3, $f8
    ctx->pc = 0x2b3dc0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[8]);
    // 0x2b3dc4: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x2b3dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2b3dc8: 0x1440ff6b  bnez        $v0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x2B3DC8u;
    {
        const bool branch_taken_0x2b3dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DC8u;
        // 0x2b3dcc: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dc8) {
            ctx->pc = 0x2B3B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b78;
        }
    }
    ctx->pc = 0x2B3DD0u;
label_2b3dd0:
    // 0x2b3dd0: 0x3261021  addu        $v0, $t9, $a2
    ctx->pc = 0x2b3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2b3dd4: 0x1160000b  beqz        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3DD4u;
    {
        const bool branch_taken_0x2b3dd4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DD4u;
        // 0x2b3dd8: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dd4) {
            ctx->pc = 0x2B3E04u;
            goto label_2b3e04;
        }
    }
    ctx->pc = 0x2B3DDCu;
    // 0x2b3ddc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2b3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3de0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2b3de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3de4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2b3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2b3de8:
    // 0x2b3de8: 0x460d0802  mul.s       $f0, $f1, $f13
    ctx->pc = 0x2b3de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x2b3dec: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3df0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3df4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3df8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3dfc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3DFCu;
    {
        const bool branch_taken_0x2b3dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3DFCu;
        // 0x2b3e00: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3dfc) {
            ctx->pc = 0x2B3DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3de8;
        }
    }
    ctx->pc = 0x2B3E04u;
label_2b3e04:
    // 0x2b3e04: 0x46011102  mul.s       $f4, $f2, $f1
    ctx->pc = 0x2b3e04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b3e08: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2b3e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2b3e0c: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x2b3e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3e10: 0x0  nop
    ctx->pc = 0x2b3e10u;
    // NOP
    // 0x2b3e14: 0x45020076  bc1fl       . + 4 + (0x76 << 2)
    ctx->pc = 0x2B3E14u;
    {
        const bool branch_taken_0x2b3e14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3e14) {
            ctx->pc = 0x2B3E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3E14u;
            // 0x2b3e18: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3FF0u;
            goto label_2b3ff0;
        }
    }
    ctx->pc = 0x2B3E1Cu;
    // 0x2b3e1c: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x2b3e1cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3e20: 0x460069c6  mov.s       $f7, $f13
    ctx->pc = 0x2b3e20u;
    ctx->f[7] = FPU_MOV_S(ctx->f[13]);
    // 0x2b3e24: 0x460d3000  add.s       $f0, $f6, $f13
    ctx->pc = 0x2b3e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2b3e28: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x2b3e28u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x2b3e2c: 0x46063834  c.lt.s      $f7, $f6
    ctx->pc = 0x2b3e2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3e30: 0x46000a46  mov.s       $f9, $f1
    ctx->pc = 0x2b3e30u;
    ctx->f[9] = FPU_MOV_S(ctx->f[1]);
    // 0x2b3e34: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x2b3e34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b3e38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3E38u;
    {
        const bool branch_taken_0x2b3e38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E38u;
        // 0x2b3e3c: 0x461200c2  mul.s       $f3, $f0, $f18 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e38) {
            ctx->pc = 0x2B3E50u;
            goto label_2b3e50;
        }
    }
    ctx->pc = 0x2B3E40u;
    // 0x2b3e40: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x2b3e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3e44: 0x0  nop
    ctx->pc = 0x2b3e44u;
    // NOP
    // 0x2b3e48: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3E48u;
    {
        const bool branch_taken_0x2b3e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E48u;
        // 0x2b3e4c: 0x250a0001  addiu       $t2, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e48) {
            ctx->pc = 0x2B3E5Cu;
            goto label_2b3e5c;
        }
    }
    ctx->pc = 0x2B3E50u;
label_2b3e50:
    // 0x2b3e50: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x2b3e50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b3e54: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2B3E54u;
    {
        const bool branch_taken_0x2b3e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E54u;
        // 0x2b3e58: 0x84080  sll         $t0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e54) {
            ctx->pc = 0x2B3FE0u;
            goto label_2b3fe0;
        }
    }
    ctx->pc = 0x2B3E5Cu;
label_2b3e5c:
    // 0x2b3e5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2b3e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2b3e60: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b3e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b3e64: 0xc78b812c  lwc1        $f11, -0x7ED4($gp)
    ctx->pc = 0x2b3e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2b3e68: 0x326c021  addu        $t8, $t9, $a2
    ctx->pc = 0x2b3e68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 6)));
    // 0x2b3e6c: 0x46002a86  mov.s       $f10, $f5
    ctx->pc = 0x2b3e6cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[5]);
    // 0x2b3e70: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x2b3e70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2b3e74: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2b3e74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3e78: 0x97880  sll         $t7, $t1, 2
    ctx->pc = 0x2b3e78u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3e7c: 0x0  nop
    ctx->pc = 0x2b3e7cu;
    // NOP
label_2b3e80:
    // 0x2b3e80: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x2B3E80u;
    {
        const bool branch_taken_0x2b3e80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3E80u;
        // 0x2b3e84: 0xc7020000  lwc1        $f2, 0x0($t8) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3e80) {
            ctx->pc = 0x2B3EACu;
            goto label_2b3eac;
        }
    }
    ctx->pc = 0x2B3E88u;
    // 0x2b3e88: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2b3e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e8c: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x2b3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_2b3e90:
    // 0x2b3e90: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x2b3e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2b3e94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3e98: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3e9c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3ea0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3ea4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3EA4u;
    {
        const bool branch_taken_0x2b3ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EA4u;
        // 0x2b3ea8: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ea4) {
            ctx->pc = 0x2B3E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3e90;
        }
    }
    ctx->pc = 0x2B3EACu;
label_2b3eac:
    // 0x2b3eac: 0x46081002  mul.s       $f0, $f2, $f8
    ctx->pc = 0x2b3eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x2b3eb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b3eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b3eb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3eb8: 0x0  nop
    ctx->pc = 0x2b3eb8u;
    // NOP
    // 0x2b3ebc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3EBCu;
    {
        const bool branch_taken_0x2b3ebc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3ebc) {
            ctx->pc = 0x2B3EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3EBCu;
            // 0x2b3ec0: 0x46091002  mul.s       $f0, $f2, $f9 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3ED0u;
            goto label_2b3ed0;
        }
    }
    ctx->pc = 0x2B3EC4u;
    // 0x2b3ec4: 0x460019c6  mov.s       $f7, $f3
    ctx->pc = 0x2b3ec4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3ec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3EC8u;
    {
        const bool branch_taken_0x2b3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EC8u;
        // 0x2b3ecc: 0x46001246  mov.s       $f9, $f2 (Delay Slot)
        ctx->f[9] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ec8) {
            ctx->pc = 0x2B3EE8u;
            goto label_2b3ee8;
        }
    }
    ctx->pc = 0x2B3ED0u;
label_2b3ed0:
    // 0x2b3ed0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b3ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3ed4: 0x0  nop
    ctx->pc = 0x2b3ed4u;
    // NOP
    // 0x2b3ed8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
    ctx->pc = 0x2B3ED8u;
    {
        const bool branch_taken_0x2b3ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ED8u;
        // 0x2b3edc: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed8) {
            ctx->pc = 0x2B3FE4u;
            goto label_2b3fe4;
        }
    }
    ctx->pc = 0x2B3EE0u;
    // 0x2b3ee0: 0x46001986  mov.s       $f6, $f3
    ctx->pc = 0x2b3ee0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[3]);
    // 0x2b3ee4: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x2b3ee4u;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
label_2b3ee8:
    // 0x2b3ee8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2b3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2b3eec: 0x2563fffe  addiu       $v1, $t3, -0x2
    ctx->pc = 0x2b3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x2b3ef0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2b3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b3ef4: 0x46061941  sub.s       $f5, $f3, $f6
    ctx->pc = 0x2b3ef4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x2b3ef8: 0x1120000c  beqz        $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3EF8u;
    {
        const bool branch_taken_0x2b3ef8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3EF8u;
        // 0x2b3efc: 0xc4410000  lwc1        $f1, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ef8) {
            ctx->pc = 0x2B3F2Cu;
            goto label_2b3f2c;
        }
    }
    ctx->pc = 0x2B3F00u;
    // 0x2b3f00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b3f04: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b3f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f08: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x2b3f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2b3f0c: 0x0  nop
    ctx->pc = 0x2b3f0cu;
    // NOP
label_2b3f10:
    // 0x2b3f10: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x2b3f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b3f14: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2b3f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f18: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b3f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b3f1c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2b3f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2b3f20: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2b3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x2b3f24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3F24u;
    {
        const bool branch_taken_0x2b3f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F24u;
        // 0x2b3f28: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f24) {
            ctx->pc = 0x2B3F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3f10;
        }
    }
    ctx->pc = 0x2B3F2Cu;
label_2b3f2c:
    // 0x2b3f2c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2b3f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b3f30: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2b3f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3f34: 0x0  nop
    ctx->pc = 0x2b3f34u;
    // NOP
    // 0x2b3f38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3F38u;
    {
        const bool branch_taken_0x2b3f38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F38u;
        // 0x2b3f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f38) {
            ctx->pc = 0x2B3F44u;
            goto label_2b3f44;
        }
    }
    ctx->pc = 0x2B3F40u;
    // 0x2b3f40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3f44:
    // 0x2b3f44: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x2b3f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b3f48: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2b3f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2b3f4c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2b3f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3f50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F50u;
    {
        const bool branch_taken_0x2b3f50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3f50) {
            ctx->pc = 0x2B3F68u;
            goto label_2b3f68;
        }
    }
    ctx->pc = 0x2B3F58u;
    // 0x2b3f58: 0x504e0006  beql        $v0, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3F58u;
    {
        const bool branch_taken_0x2b3f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3f58) {
            ctx->pc = 0x2B3F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F58u;
            // 0x2b3f5c: 0x46033801  sub.s       $f0, $f7, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3F74u;
            goto label_2b3f74;
        }
    }
    ctx->pc = 0x2B3F60u;
    // 0x2b3f60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3F60u;
    {
        const bool branch_taken_0x2b3f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F60u;
        // 0x2b3f64: 0x46073000  add.s       $f0, $f6, $f7 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f60) {
            ctx->pc = 0x2B3FACu;
            goto label_2b3fac;
        }
    }
    ctx->pc = 0x2B3F68u;
label_2b3f68:
    // 0x2b3f68: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3F68u;
    {
        const bool branch_taken_0x2b3f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f68) {
            ctx->pc = 0x2B3F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F68u;
            // 0x2b3f6c: 0x46073000  add.s       $f0, $f6, $f7 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3FACu;
            goto label_2b3fac;
        }
    }
    ctx->pc = 0x2B3F70u;
    // 0x2b3f70: 0x46033801  sub.s       $f0, $f7, $f3
    ctx->pc = 0x2b3f70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
label_2b3f74:
    // 0x2b3f74: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b3f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b3f78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b3f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b3f7c: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x2b3f7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3f80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F80u;
    {
        const bool branch_taken_0x2b3f80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b3f80) {
            ctx->pc = 0x2B3F98u;
            goto label_2b3f98;
        }
    }
    ctx->pc = 0x2B3F88u;
    // 0x2b3f88: 0x104e0005  beq         $v0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F88u;
    {
        const bool branch_taken_0x2b3f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b3f88) {
            ctx->pc = 0x2B3FA0u;
            goto label_2b3fa0;
        }
    }
    ctx->pc = 0x2B3F90u;
    // 0x2b3f90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3F90u;
    {
        const bool branch_taken_0x2b3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3F90u;
        // 0x2b3f94: 0x46073000  add.s       $f0, $f6, $f7 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f90) {
            ctx->pc = 0x2B3FACu;
            goto label_2b3fac;
        }
    }
    ctx->pc = 0x2B3F98u;
label_2b3f98:
    // 0x2b3f98: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3F98u;
    {
        const bool branch_taken_0x2b3f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f98) {
            ctx->pc = 0x2B3F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3F98u;
            // 0x2b3f9c: 0x46073000  add.s       $f0, $f6, $f7 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3FACu;
            goto label_2b3fac;
        }
    }
    ctx->pc = 0x2B3FA0u;
label_2b3fa0:
    // 0x2b3fa0: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x2b3fa0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x2b3fa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3FA4u;
    {
        const bool branch_taken_0x2b3fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FA4u;
        // 0x2b3fa8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fa4) {
            ctx->pc = 0x2B3FB0u;
            goto label_2b3fb0;
        }
    }
    ctx->pc = 0x2B3FACu;
label_2b3fac:
    // 0x2b3fac: 0x460e0002  mul.s       $f0, $f0, $f14
    ctx->pc = 0x2b3facu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_2b3fb0:
    // 0x2b3fb0: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x2b3fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2b3fb4: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2b3fb4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2b3fb8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2b3fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2b3fbc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b3fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b3fc0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2b3fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2b3fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b3fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b3fc8: 0x0  nop
    ctx->pc = 0x2b3fc8u;
    // NOP
    // 0x2b3fcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3FCCu;
    {
        const bool branch_taken_0x2b3fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FCCu;
        // 0x2b3fd0: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fcc) {
            ctx->pc = 0x2B3FE4u;
            goto label_2b3fe4;
        }
    }
    ctx->pc = 0x2B3FD4u;
    // 0x2b3fd4: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2b3fd8: 0x15a0ffa9  bnez        $t5, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2B3FD8u;
    {
        const bool branch_taken_0x2b3fd8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fd8) {
            ctx->pc = 0x2B3E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3e80;
        }
    }
    ctx->pc = 0x2B3FE0u;
label_2b3fe0:
    // 0x2b3fe0: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_2b3fe4:
    // 0x2b3fe4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2b3fe4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b3fe8: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x2b3fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fec: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2b3fecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b3ff0:
    // 0x2b3ff0: 0xab102a  slt         $v0, $a1, $t3
    ctx->pc = 0x2b3ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2b3ff4: 0x1040fec4  beqz        $v0, . + 4 + (-0x13C << 2)
    ctx->pc = 0x2B3FF4u;
    {
        const bool branch_taken_0x2b3ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FF4u;
        // 0x2b3ff8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ff4) {
            ctx->pc = 0x2B3B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3b08;
        }
    }
    ctx->pc = 0x2B3FFCu;
label_2b3ffc:
    // 0x2b3ffc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4000:
    // 0x2b4000: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b4000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b4004: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b4004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4008: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b4008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b400c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b400cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4010: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b4010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4014: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2b4014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4018: 0x7bb60000  lq          $s6, 0x0($sp)
    ctx->pc = 0x2b4018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b401c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B401Cu;
        // 0x2b4020: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4024u;
    // 0x2b4024: 0x0  nop
    ctx->pc = 0x2b4024u;
    // NOP
    // 0x2b4028: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b402c: 0x0  nop
    ctx->pc = 0x2b402cu;
    // NOP
    ctx->pc = 0x2b4030u;
}
