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

// Function: sub_002DA9C0
// Address: 0x2da9c0 - 0x2daa58
void sub_002DA9C0_0x2da9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA9C0_0x2da9c0");
#endif

    switch (ctx->pc) {
        case 0x2da9c0u: goto label_2da9c0;
        case 0x2da9c4u: goto label_2da9c4;
        case 0x2da9c8u: goto label_2da9c8;
        case 0x2da9ccu: goto label_2da9cc;
        case 0x2da9d0u: goto label_2da9d0;
        case 0x2da9d4u: goto label_2da9d4;
        case 0x2da9d8u: goto label_2da9d8;
        case 0x2da9dcu: goto label_2da9dc;
        case 0x2da9e0u: goto label_2da9e0;
        case 0x2da9e4u: goto label_2da9e4;
        case 0x2da9e8u: goto label_2da9e8;
        case 0x2da9ecu: goto label_2da9ec;
        case 0x2da9f0u: goto label_2da9f0;
        case 0x2da9f4u: goto label_2da9f4;
        case 0x2da9f8u: goto label_2da9f8;
        case 0x2da9fcu: goto label_2da9fc;
        case 0x2daa00u: goto label_2daa00;
        case 0x2daa04u: goto label_2daa04;
        case 0x2daa08u: goto label_2daa08;
        case 0x2daa0cu: goto label_2daa0c;
        case 0x2daa10u: goto label_2daa10;
        case 0x2daa14u: goto label_2daa14;
        case 0x2daa18u: goto label_2daa18;
        case 0x2daa1cu: goto label_2daa1c;
        case 0x2daa20u: goto label_2daa20;
        case 0x2daa24u: goto label_2daa24;
        case 0x2daa28u: goto label_2daa28;
        case 0x2daa2cu: goto label_2daa2c;
        case 0x2daa30u: goto label_2daa30;
        case 0x2daa34u: goto label_2daa34;
        case 0x2daa38u: goto label_2daa38;
        case 0x2daa3cu: goto label_2daa3c;
        case 0x2daa40u: goto label_2daa40;
        case 0x2daa44u: goto label_2daa44;
        case 0x2daa48u: goto label_2daa48;
        case 0x2daa4cu: goto label_2daa4c;
        case 0x2daa50u: goto label_2daa50;
        case 0x2daa54u: goto label_2daa54;
        default: break;
    }

    ctx->pc = 0x2da9c0u;

label_2da9c0:
    // 0x2da9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2da9c4:
    // 0x2da9c4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2da9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2da9c8:
    // 0x2da9c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2da9cc:
    // 0x2da9cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2da9ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da9d0:
    // 0x2da9d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2da9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2da9d4:
    // 0x2da9d4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2da9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da9d8:
    // 0x2da9d8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_2da9dc:
    if (ctx->pc == 0x2DA9DCu) {
        ctx->pc = 0x2DA9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9D8u;
        // 0x2da9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9E0u;
        goto label_2da9e0;
    }
    ctx->pc = 0x2DA9D8u;
    {
        const bool branch_taken_0x2da9d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9D8u;
        // 0x2da9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da9d8) {
            ctx->pc = 0x2DAA00u;
            goto label_2daa00;
        }
    }
    ctx->pc = 0x2DA9E0u;
label_2da9e0:
    // 0x2da9e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2da9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2da9e4:
    // 0x2da9e4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2da9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2da9e8:
    // 0x2da9e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2da9ec:
    if (ctx->pc == 0x2DA9ECu) {
        ctx->pc = 0x2DA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9E8u;
        // 0x2da9ec: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9F0u;
        goto label_2da9f0;
    }
    ctx->pc = 0x2DA9E8u;
    {
        const bool branch_taken_0x2da9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da9e8) {
            ctx->pc = 0x2DA9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA9E8u;
            // 0x2da9ec: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DAA00u;
            goto label_2daa00;
        }
    }
    ctx->pc = 0x2DA9F0u;
label_2da9f0:
    // 0x2da9f0: 0x40f809  jalr        $v0
label_2da9f4:
    if (ctx->pc == 0x2DA9F4u) {
        ctx->pc = 0x2DA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F0u;
        // 0x2da9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA9F8u;
        goto label_2da9f8;
    }
    ctx->pc = 0x2DA9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA9F8u);
        ctx->pc = 0x2DA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA9F0u;
        // 0x2da9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA9F0u, 0x2DA9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA9F8u;
label_2da9f8:
    // 0x2da9f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2da9f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da9fc:
    // 0x2da9fc: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2da9fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_2daa00:
    // 0x2daa00: 0x8e50000c  lw          $s0, 0xC($s2)
    ctx->pc = 0x2daa00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2daa04:
    // 0x2daa04: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2daa04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_2daa08:
    // 0x2daa08: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
label_2daa0c:
    if (ctx->pc == 0x2DAA0Cu) {
        ctx->pc = 0x2DAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA08u;
        // 0x2daa0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA10u;
        goto label_2daa10;
    }
    ctx->pc = 0x2DAA08u;
    {
        const bool branch_taken_0x2daa08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA08u;
        // 0x2daa0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa08) {
            ctx->pc = 0x2DAA3Cu;
            goto label_2daa3c;
        }
    }
    ctx->pc = 0x2DAA10u;
label_2daa10:
    // 0x2daa10: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x2daa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_2daa14:
    // 0x2daa14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2daa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2daa18:
    // 0x2daa18: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2daa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2daa1c:
    // 0x2daa1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2daa20:
    if (ctx->pc == 0x2DAA20u) {
        ctx->pc = 0x2DAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA1Cu;
        // 0x2daa20: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA24u;
        goto label_2daa24;
    }
    ctx->pc = 0x2DAA1Cu;
    {
        const bool branch_taken_0x2daa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA1Cu;
        // 0x2daa20: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa1c) {
            ctx->pc = 0x2DAA30u;
            goto label_2daa30;
        }
    }
    ctx->pc = 0x2DAA24u;
label_2daa24:
    // 0x2daa24: 0x40f809  jalr        $v0
label_2daa28:
    if (ctx->pc == 0x2DAA28u) {
        ctx->pc = 0x2DAA2Cu;
        goto label_2daa2c;
    }
    ctx->pc = 0x2DAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DAA2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA24u, 0x2DAA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DAA2Cu;
label_2daa2c:
    // 0x2daa2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2daa2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa30:
    // 0x2daa30: 0x1612fff7  bne         $s0, $s2, . + 4 + (-0x9 << 2)
label_2daa34:
    if (ctx->pc == 0x2DAA34u) {
        ctx->pc = 0x2DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA30u;
        // 0x2daa34: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA38u;
        goto label_2daa38;
    }
    ctx->pc = 0x2DAA30u;
    {
        const bool branch_taken_0x2daa30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA30u;
        // 0x2daa34: 0x3880a  movz        $s1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daa30) {
            ctx->pc = 0x2DAA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2daa10;
        }
    }
    ctx->pc = 0x2DAA38u;
label_2daa38:
    // 0x2daa38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2daa38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2daa3c:
    // 0x2daa3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2daa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2daa40:
    // 0x2daa40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2daa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2daa44:
    // 0x2daa44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2daa44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2daa48:
    // 0x2daa48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2daa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2daa4c:
    // 0x2daa4c: 0x3e00008  jr          $ra
label_2daa50:
    if (ctx->pc == 0x2DAA50u) {
        ctx->pc = 0x2DAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA4Cu;
        // 0x2daa50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DAA54u;
        goto label_2daa54;
    }
    ctx->pc = 0x2DAA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAA4Cu;
        // 0x2daa50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAA54u;
label_2daa54:
    // 0x2daa54: 0x0  nop
    ctx->pc = 0x2daa54u;
    // NOP
    ctx->pc = 0x2daa58u;
}
