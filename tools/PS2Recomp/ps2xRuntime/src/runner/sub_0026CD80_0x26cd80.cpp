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

// Function: sub_0026CD80
// Address: 0x26cd80 - 0x26ce80
void sub_0026CD80_0x26cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CD80_0x26cd80");
#endif

    switch (ctx->pc) {
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce58u: goto label_26ce58;
        default: break;
    }

    ctx->pc = 0x26cd80u;

    // 0x26cd80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26cd84: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x26cd84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26cd88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26cd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26cd8c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x26cd8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26cd90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26cd94: 0xc09bd14  jal         func_26F450
    ctx->pc = 0x26CD94u;
    SET_GPR_U32(ctx, 31, 0x26CD9Cu);
    ctx->pc = 0x26CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CD94u;
    // 0x26cd98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26F450u, 0x26CD94u, 0x26CD9Cu)) {
        return;
    }
    ctx->pc = 0x26CD9Cu;
label_26cd9c:
    // 0x26cd9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26cda0: 0x8c50cb58  lw          $s0, -0x34A8($v0)
    ctx->pc = 0x26cda0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6ACB58u));
    // 0x26cda4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26cda8: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x26CDA8u;
    {
        const bool branch_taken_0x26cda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDA8u;
        // 0x26cdac: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cda8) {
            ctx->pc = 0x26CE60u;
            goto label_26ce60;
        }
    }
    ctx->pc = 0x26CDB0u;
    // 0x26cdb0: 0xc09cb34  jal         func_272CD0
    ctx->pc = 0x26CDB0u;
    SET_GPR_U32(ctx, 31, 0x26CDB8u);
    ctx->pc = 0x26CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDB0u;
    // 0x26cdb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x272CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272CD0u, 0x26CDB0u, 0x26CDB8u)) {
        return;
    }
    ctx->pc = 0x26CDB8u;
label_26cdb8:
    // 0x26cdb8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26CDB8u;
    {
        const bool branch_taken_0x26cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDB8u;
        // 0x26cdbc: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdb8) {
            ctx->pc = 0x26CE64u;
            goto label_26ce64;
        }
    }
    ctx->pc = 0x26CDC0u;
    // 0x26cdc0: 0xc09b122  jal         func_26C488
    ctx->pc = 0x26CDC0u;
    SET_GPR_U32(ctx, 31, 0x26CDC8u);
    ctx->pc = 0x26CDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDC0u;
    // 0x26cdc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C488u, 0x26CDC0u, 0x26CDC8u)) {
        return;
    }
    ctx->pc = 0x26CDC8u;
label_26cdc8:
    // 0x26cdc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26cdcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26cdccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cdd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cdd4: 0x0  nop
    ctx->pc = 0x26cdd4u;
    // NOP
    // 0x26cdd8: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x26CDD8u;
    {
        const bool branch_taken_0x26cdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDD8u;
        // 0x26cddc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cdd8) {
            ctx->pc = 0x26CE60u;
            goto label_26ce60;
        }
    }
    ctx->pc = 0x26CDE0u;
    // 0x26cde0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26cde4: 0x2442bb58  addiu       $v0, $v0, -0x44A8
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949720));
    // 0x26cde8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x26cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x26cdec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26cdf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26cdf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26cdf4: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x26CDF4u;
    SET_GPR_U32(ctx, 31, 0x26CDFCu);
    ctx->pc = 0x26CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDF4u;
    // 0x26cdf8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x26CDF4u, 0x26CDFCu)) {
        return;
    }
    ctx->pc = 0x26CDFCu;
label_26cdfc:
    // 0x26cdfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26cdfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce00: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26ce04: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x26ce04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x26ce08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ce0c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CE0Cu;
    {
        const bool branch_taken_0x26ce0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE0Cu;
        // 0x26ce10: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce0c) {
            ctx->pc = 0x26CE24u;
            goto label_26ce24;
        }
    }
    ctx->pc = 0x26CE14u;
    // 0x26ce14: 0xc09ca32  jal         func_2728C8
    ctx->pc = 0x26CE14u;
    SET_GPR_U32(ctx, 31, 0x26CE1Cu);
    ctx->pc = 0x26CE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE14u;
    // 0x26ce18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2728C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2728C8u, 0x26CE14u, 0x26CE1Cu)) {
        return;
    }
    ctx->pc = 0x26CE1Cu;
label_26ce1c:
    // 0x26ce1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26CE1Cu;
    {
        const bool branch_taken_0x26ce1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE1Cu;
        // 0x26ce20: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce1c) {
            ctx->pc = 0x26CE38u;
            goto label_26ce38;
        }
    }
    ctx->pc = 0x26CE24u;
label_26ce24:
    // 0x26ce24: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CE24u;
    SET_GPR_U32(ctx, 31, 0x26CE2Cu);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CE24u, 0x26CE2Cu)) {
        return;
    }
    ctx->pc = 0x26CE2Cu;
label_26ce2c:
    // 0x26ce2c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x26ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x26ce30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26ce34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26ce38:
    // 0x26ce38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26CE38u;
    {
        const bool branch_taken_0x26ce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ce38) {
            ctx->pc = 0x26CE50u;
            goto label_26ce50;
        }
    }
    ctx->pc = 0x26CE40u;
    // 0x26ce40: 0xc0c489a  jal         func_312268
    ctx->pc = 0x26CE40u;
    SET_GPR_U32(ctx, 31, 0x26CE48u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x26CE40u, 0x26CE48u)) {
        return;
    }
    ctx->pc = 0x26CE48u;
label_26ce48:
    // 0x26ce48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ce4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_26ce50:
    // 0x26ce50: 0xc07df98  jal         func_1F7E60
    ctx->pc = 0x26CE50u;
    SET_GPR_U32(ctx, 31, 0x26CE58u);
    ctx->pc = 0x26CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE50u;
    // 0x26ce54: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x26CE50u, 0x26CE58u)) {
        return;
    }
    ctx->pc = 0x26CE58u;
label_26ce58:
    // 0x26ce58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26CE58u;
    {
        const bool branch_taken_0x26ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE58u;
        // 0x26ce5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce58) {
            ctx->pc = 0x26CE68u;
            goto label_26ce68;
        }
    }
    ctx->pc = 0x26CE60u;
label_26ce60:
    // 0x26ce60: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x26ce60u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_26ce64:
    // 0x26ce64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26ce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26ce68:
    // 0x26ce68: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26ce68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26ce6c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x26ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26ce70: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x26ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26ce74: 0x3e00008  jr          $ra
    ctx->pc = 0x26CE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE74u;
        // 0x26ce78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CE7Cu;
    // 0x26ce7c: 0x0  nop
    ctx->pc = 0x26ce7cu;
    // NOP
    ctx->pc = 0x26ce80u;
}
