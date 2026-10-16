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

// Function: sub_0021AB68
// Address: 0x21ab68 - 0x21aca0
void sub_0021AB68_0x21ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AB68_0x21ab68");
#endif

    switch (ctx->pc) {
        case 0x21ab68u: goto label_21ab68;
        case 0x21ab6cu: goto label_21ab6c;
        case 0x21ab70u: goto label_21ab70;
        case 0x21ab74u: goto label_21ab74;
        case 0x21ab78u: goto label_21ab78;
        case 0x21ab7cu: goto label_21ab7c;
        case 0x21ab80u: goto label_21ab80;
        case 0x21ab84u: goto label_21ab84;
        case 0x21ab88u: goto label_21ab88;
        case 0x21ab8cu: goto label_21ab8c;
        case 0x21ab90u: goto label_21ab90;
        case 0x21ab94u: goto label_21ab94;
        case 0x21ab98u: goto label_21ab98;
        case 0x21ab9cu: goto label_21ab9c;
        case 0x21aba0u: goto label_21aba0;
        case 0x21aba4u: goto label_21aba4;
        case 0x21aba8u: goto label_21aba8;
        case 0x21abacu: goto label_21abac;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abb4u: goto label_21abb4;
        case 0x21abb8u: goto label_21abb8;
        case 0x21abbcu: goto label_21abbc;
        case 0x21abc0u: goto label_21abc0;
        case 0x21abc4u: goto label_21abc4;
        case 0x21abc8u: goto label_21abc8;
        case 0x21abccu: goto label_21abcc;
        case 0x21abd0u: goto label_21abd0;
        case 0x21abd4u: goto label_21abd4;
        case 0x21abd8u: goto label_21abd8;
        case 0x21abdcu: goto label_21abdc;
        case 0x21abe0u: goto label_21abe0;
        case 0x21abe4u: goto label_21abe4;
        case 0x21abe8u: goto label_21abe8;
        case 0x21abecu: goto label_21abec;
        case 0x21abf0u: goto label_21abf0;
        case 0x21abf4u: goto label_21abf4;
        case 0x21abf8u: goto label_21abf8;
        case 0x21abfcu: goto label_21abfc;
        case 0x21ac00u: goto label_21ac00;
        case 0x21ac04u: goto label_21ac04;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac0cu: goto label_21ac0c;
        case 0x21ac10u: goto label_21ac10;
        case 0x21ac14u: goto label_21ac14;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac1cu: goto label_21ac1c;
        case 0x21ac20u: goto label_21ac20;
        case 0x21ac24u: goto label_21ac24;
        case 0x21ac28u: goto label_21ac28;
        case 0x21ac2cu: goto label_21ac2c;
        case 0x21ac30u: goto label_21ac30;
        case 0x21ac34u: goto label_21ac34;
        case 0x21ac38u: goto label_21ac38;
        case 0x21ac3cu: goto label_21ac3c;
        case 0x21ac40u: goto label_21ac40;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac48u: goto label_21ac48;
        case 0x21ac4cu: goto label_21ac4c;
        case 0x21ac50u: goto label_21ac50;
        case 0x21ac54u: goto label_21ac54;
        case 0x21ac58u: goto label_21ac58;
        case 0x21ac5cu: goto label_21ac5c;
        case 0x21ac60u: goto label_21ac60;
        case 0x21ac64u: goto label_21ac64;
        case 0x21ac68u: goto label_21ac68;
        case 0x21ac6cu: goto label_21ac6c;
        case 0x21ac70u: goto label_21ac70;
        case 0x21ac74u: goto label_21ac74;
        case 0x21ac78u: goto label_21ac78;
        case 0x21ac7cu: goto label_21ac7c;
        case 0x21ac80u: goto label_21ac80;
        case 0x21ac84u: goto label_21ac84;
        case 0x21ac88u: goto label_21ac88;
        case 0x21ac8cu: goto label_21ac8c;
        case 0x21ac90u: goto label_21ac90;
        case 0x21ac94u: goto label_21ac94;
        case 0x21ac98u: goto label_21ac98;
        case 0x21ac9cu: goto label_21ac9c;
        default: break;
    }

    ctx->pc = 0x21ab68u;

label_21ab68:
    // 0x21ab68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_21ab6c:
    // 0x21ab6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_21ab70:
    // 0x21ab70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21ab70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_21ab74:
    // 0x21ab74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ab78:
    // 0x21ab78: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x21ab78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_21ab7c:
    // 0x21ab7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ab7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ab80:
    // 0x21ab80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21ab84:
    // 0x21ab84: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x21ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ab88:
    // 0x21ab88: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
label_21ab8c:
    if (ctx->pc == 0x21AB8Cu) {
        ctx->pc = 0x21AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB88u;
        // 0x21ab8c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB90u;
        goto label_21ab90;
    }
    ctx->pc = 0x21AB88u;
    {
        const bool branch_taken_0x21ab88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB88u;
        // 0x21ab8c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab88) {
            ctx->pc = 0x21AC28u;
            goto label_21ac28;
        }
    }
    ctx->pc = 0x21AB90u;
label_21ab90:
    // 0x21ab90: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
label_21ab94:
    // 0x21ab94: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x21ab94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_21ab98:
    // 0x21ab98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x21ab98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_21ab9c:
    // 0x21ab9c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
label_21aba0:
    // 0x21aba0: 0x342137be  ori         $at, $at, 0x37BE
    ctx->pc = 0x21aba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14270);
label_21aba4:
    // 0x21aba4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x21aba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_21aba8:
    // 0x21aba8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x21aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21abac:
    // 0x21abac: 0x0  nop
    ctx->pc = 0x21abacu;
    // NOP
label_21abb0:
    // 0x21abb0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x21abb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_21abb4:
    // 0x21abb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x21abb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_21abb8:
    // 0x21abb8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x21abb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21abbc:
    // 0x21abbc: 0x0  nop
    ctx->pc = 0x21abbcu;
    // NOP
label_21abc0:
    // 0x21abc0: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
label_21abc4:
    if (ctx->pc == 0x21ABC4u) {
        ctx->pc = 0x21ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABC0u;
        // 0x21abc4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABC8u;
        goto label_21abc8;
    }
    ctx->pc = 0x21ABC0u;
    {
        const bool branch_taken_0x21abc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21abc0) {
            ctx->pc = 0x21ABC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21ABC0u;
            // 0x21abc4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21AC20u;
            goto label_21ac20;
        }
    }
    ctx->pc = 0x21ABC8u;
label_21abc8:
    // 0x21abc8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x21abc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21abcc:
    // 0x21abcc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x21abccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21abd0:
    // 0x21abd0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x21abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21abd4:
    // 0x21abd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x21abd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21abd8:
    // 0x21abd8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x21abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21abdc:
    // 0x21abdc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x21abdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_21abe0:
    // 0x21abe0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x21abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21abe4:
    // 0x21abe4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x21abe4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_21abe8:
    // 0x21abe8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x21abe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_21abec:
    // 0x21abec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21abecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21abf0:
    // 0x21abf0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21abf0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_21abf4:
    // 0x21abf4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x21abf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_21abf8:
    // 0x21abf8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x21abf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_21abfc:
    // 0x21abfc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x21abfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_21ac00:
    // 0x21ac00: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x21ac00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_21ac04:
    // 0x21ac04: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x21ac04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_21ac08:
    // 0x21ac08: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21ac08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_21ac0c:
    // 0x21ac0c: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x21ac0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21ac10:
    // 0x21ac10: 0x0  nop
    ctx->pc = 0x21ac10u;
    // NOP
label_21ac14:
    // 0x21ac14: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_21ac18:
    if (ctx->pc == 0x21AC18u) {
        ctx->pc = 0x21AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC14u;
        // 0x21ac18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC1Cu;
        goto label_21ac1c;
    }
    ctx->pc = 0x21AC14u;
    {
        const bool branch_taken_0x21ac14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC14u;
        // 0x21ac18: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac14) {
            ctx->pc = 0x21AC84u;
            goto label_21ac84;
        }
    }
    ctx->pc = 0x21AC1Cu;
label_21ac1c:
    // 0x21ac1c: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x21ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_21ac20:
    // 0x21ac20: 0x54a0ffe3  bnel        $a1, $zero, . + 4 + (-0x1D << 2)
label_21ac24:
    if (ctx->pc == 0x21AC24u) {
        ctx->pc = 0x21AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC20u;
        // 0x21ac24: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC28u;
        goto label_21ac28;
    }
    ctx->pc = 0x21AC20u;
    {
        const bool branch_taken_0x21ac20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac20) {
            ctx->pc = 0x21AC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21AC20u;
            // 0x21ac24: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21abb0;
        }
    }
    ctx->pc = 0x21AC28u;
label_21ac28:
    // 0x21ac28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21ac2c:
    // 0x21ac2c: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21ac30:
    // 0x21ac30: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_21ac34:
    // 0x21ac34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_21ac38:
    // 0x21ac38: 0x40f809  jalr        $v0
label_21ac3c:
    if (ctx->pc == 0x21AC3Cu) {
        ctx->pc = 0x21AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC38u;
        // 0x21ac3c: 0x8cc402c4  lw          $a0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC40u;
        goto label_21ac40;
    }
    ctx->pc = 0x21AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21AC40u);
        ctx->pc = 0x21AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC38u;
        // 0x21ac3c: 0x8cc402c4  lw          $a0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC38u, 0x21AC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21AC40u;
label_21ac40:
    // 0x21ac40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ac40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ac44:
    // 0x21ac44: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x21ac44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21ac48:
    // 0x21ac48: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x21ac48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_21ac4c:
    // 0x21ac4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_21ac50:
    // 0x21ac50: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x21ac50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ac54:
    // 0x21ac54: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x21ac54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_21ac58:
    // 0x21ac58: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x21ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_21ac5c:
    // 0x21ac5c: 0xe4b4000c  swc1        $f20, 0xC($a1)
    ctx->pc = 0x21ac5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_21ac60:
    // 0x21ac60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x21ac60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ac64:
    // 0x21ac64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ac68:
    // 0x21ac68: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x21ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_21ac6c:
    // 0x21ac6c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x21ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21ac70:
    // 0x21ac70: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x21ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_21ac74:
    // 0x21ac74: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x21ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_21ac78:
    // 0x21ac78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21ac7c:
    // 0x21ac7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21ac80:
    // 0x21ac80: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x21ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_21ac84:
    // 0x21ac84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21ac84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ac88:
    // 0x21ac88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21ac88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ac8c:
    // 0x21ac8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21ac90:
    // 0x21ac90: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x21ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21ac94:
    // 0x21ac94: 0x3e00008  jr          $ra
label_21ac98:
    if (ctx->pc == 0x21AC98u) {
        ctx->pc = 0x21AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC94u;
        // 0x21ac98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC9Cu;
        goto label_21ac9c;
    }
    ctx->pc = 0x21AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC94u;
        // 0x21ac98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC9Cu;
label_21ac9c:
    // 0x21ac9c: 0x0  nop
    ctx->pc = 0x21ac9cu;
    // NOP
    ctx->pc = 0x21aca0u;
}
