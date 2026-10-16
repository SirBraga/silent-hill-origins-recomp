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

// Function: sub_001EFD78
// Address: 0x1efd78 - 0x1efe98
void sub_001EFD78_0x1efd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFD78_0x1efd78");
#endif

    switch (ctx->pc) {
        case 0x1efdb4u: goto label_1efdb4;
        case 0x1efdccu: goto label_1efdcc;
        case 0x1efdf0u: goto label_1efdf0;
        case 0x1efe08u: goto label_1efe08;
        case 0x1efe40u: goto label_1efe40;
        case 0x1efe54u: goto label_1efe54;
        case 0x1efe74u: goto label_1efe74;
        default: break;
    }

    ctx->pc = 0x1efd78u;

    // 0x1efd78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1efd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1efd7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1efd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1efd80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efd84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efd84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1efd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1efd8c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1efd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1efd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1efd94: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x1efd94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x1efd98: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x1EFD98u;
    {
        const bool branch_taken_0x1efd98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFD98u;
        // 0x1efd9c: 0xe62c0010  swc1        $f12, 0x10($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd98) {
            ctx->pc = 0x1EFDD4u;
            goto label_1efdd4;
        }
    }
    ctx->pc = 0x1EFDA0u;
    // 0x1efda0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1efda0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1efda4: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1efda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1efda8: 0x26108918  addiu       $s0, $s0, -0x76E8
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936856));
    // 0x1efdac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1EFDACu;
    SET_GPR_U32(ctx, 31, 0x1EFDB4u);
    ctx->pc = 0x1EFDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDACu;
    // 0x1efdb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1EFDACu, 0x1EFDB4u)) {
        return;
    }
    ctx->pc = 0x1EFDB4u;
label_1efdb4:
    // 0x1efdb4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1efdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1efdb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efdb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdbc: 0x9447e836  lhu         $a3, -0x17CA($v0)
    ctx->pc = 0x1efdbcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x33E836u));
    // 0x1efdc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdc4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1EFDC4u;
    SET_GPR_U32(ctx, 31, 0x1EFDCCu);
    ctx->pc = 0x1EFDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDC4u;
    // 0x1efdc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1EFDC4u, 0x1EFDCCu)) {
        return;
    }
    ctx->pc = 0x1EFDCCu;
label_1efdcc:
    // 0x1efdcc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EFDCCu;
    {
        const bool branch_taken_0x1efdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDCCu;
        // 0x1efdd0: 0x8e220048  lw          $v0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdcc) {
            ctx->pc = 0x1EFE0Cu;
            goto label_1efe0c;
        }
    }
    ctx->pc = 0x1EFDD4u;
label_1efdd4:
    // 0x1efdd4: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1efdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efddc: 0x26108918  addiu       $s0, $s0, -0x76E8
    ctx->pc = 0x1efddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936856));
    // 0x1efde0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1efde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x1efde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efde8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1EFDE8u;
    SET_GPR_U32(ctx, 31, 0x1EFDF0u);
    ctx->pc = 0x1EFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFDE8u;
    // 0x1efdec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1EFDE8u, 0x1EFDF0u)) {
        return;
    }
    ctx->pc = 0x1EFDF0u;
label_1efdf0:
    // 0x1efdf0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1efdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1efdf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdf8: 0x9447e834  lhu         $a3, -0x17CC($v0)
    ctx->pc = 0x1efdf8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x33E834u));
    // 0x1efdfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe00: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1EFE00u;
    SET_GPR_U32(ctx, 31, 0x1EFE08u);
    ctx->pc = 0x1EFE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE00u;
    // 0x1efe04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1EFE00u, 0x1EFE08u)) {
        return;
    }
    ctx->pc = 0x1EFE08u;
label_1efe08:
    // 0x1efe08: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1efe0c:
    // 0x1efe0c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFE0Cu;
    {
        const bool branch_taken_0x1efe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE0Cu;
        // 0x1efe10: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe0c) {
            ctx->pc = 0x1EFE44u;
            goto label_1efe44;
        }
    }
    ctx->pc = 0x1EFE14u;
    // 0x1efe14: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1efe14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1efe18: 0x8c45f8c0  lw          $a1, -0x740($v0)
    ctx->pc = 0x1efe18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965440)));
    // 0x1efe1c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1efe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1efe20: 0x50a30008  beql        $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE20u;
    {
        const bool branch_taken_0x1efe20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efe20) {
            ctx->pc = 0x1EFE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFE20u;
            // 0x1efe24: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE44u;
            goto label_1efe44;
        }
    }
    ctx->pc = 0x1EFE28u;
    // 0x1efe28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efe2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFE2Cu;
    {
        const bool branch_taken_0x1efe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE2Cu;
        // 0x1efe30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe2c) {
            ctx->pc = 0x1EFE40u;
            goto label_1efe40;
        }
    }
    ctx->pc = 0x1EFE34u;
    // 0x1efe34: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1efe34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1efe38: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1EFE38u;
    SET_GPR_U32(ctx, 31, 0x1EFE40u);
    ctx->pc = 0x1EFE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE38u;
    // 0x1efe3c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1EFE38u, 0x1EFE40u)) {
        return;
    }
    ctx->pc = 0x1EFE40u;
label_1efe40:
    // 0x1efe40: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1efe40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_1efe44:
    // 0x1efe44: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1EFE44u;
    {
        const bool branch_taken_0x1efe44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE44u;
        // 0x1efe48: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe44) {
            ctx->pc = 0x1EFE78u;
            goto label_1efe78;
        }
    }
    ctx->pc = 0x1EFE4Cu;
    // 0x1efe4c: 0xc0603e4  jal         func_180F90
    ctx->pc = 0x1EFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE54u);
    ctx->pc = 0x180F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180F90u, 0x1EFE4Cu, 0x1EFE54u)) {
        return;
    }
    ctx->pc = 0x1EFE54u;
label_1efe54:
    // 0x1efe54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE54u;
    {
        const bool branch_taken_0x1efe54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE54u;
        // 0x1efe58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe54) {
            ctx->pc = 0x1EFE78u;
            goto label_1efe78;
        }
    }
    ctx->pc = 0x1EFE5Cu;
    // 0x1efe5c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1efe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1efe60: 0x8c438a30  lw          $v1, -0x75D0($v0)
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338A30u));
    // 0x1efe64: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFE64u;
    {
        const bool branch_taken_0x1efe64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE64u;
        // 0x1efe68: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe64) {
            ctx->pc = 0x1EFE7Cu;
            goto label_1efe7c;
        }
    }
    ctx->pc = 0x1EFE6Cu;
    // 0x1efe6c: 0xc075d76  jal         func_1D75D8
    ctx->pc = 0x1EFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE74u);
    ctx->pc = 0x1D75D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D75D8u, 0x1EFE6Cu, 0x1EFE74u)) {
        return;
    }
    ctx->pc = 0x1EFE74u;
label_1efe74:
    // 0x1efe74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1efe74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1efe78:
    // 0x1efe78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1efe78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1efe7c:
    // 0x1efe7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1efe7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efe80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1efe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efe84: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE84u;
        // 0x1efe88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFE8Cu;
    // 0x1efe8c: 0x0  nop
    ctx->pc = 0x1efe8cu;
    // NOP
    // 0x1efe90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1efe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efe94: 0x0  nop
    ctx->pc = 0x1efe94u;
    // NOP
    ctx->pc = 0x1efe98u;
}
