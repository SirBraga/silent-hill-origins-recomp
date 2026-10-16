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

// Function: sub_0022ABB0
// Address: 0x22abb0 - 0x22ac58
void sub_0022ABB0_0x22abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ABB0_0x22abb0");
#endif

    switch (ctx->pc) {
        case 0x22abb0u: goto label_22abb0;
        case 0x22abb4u: goto label_22abb4;
        case 0x22abb8u: goto label_22abb8;
        case 0x22abbcu: goto label_22abbc;
        case 0x22abc0u: goto label_22abc0;
        case 0x22abc4u: goto label_22abc4;
        case 0x22abc8u: goto label_22abc8;
        case 0x22abccu: goto label_22abcc;
        case 0x22abd0u: goto label_22abd0;
        case 0x22abd4u: goto label_22abd4;
        case 0x22abd8u: goto label_22abd8;
        case 0x22abdcu: goto label_22abdc;
        case 0x22abe0u: goto label_22abe0;
        case 0x22abe4u: goto label_22abe4;
        case 0x22abe8u: goto label_22abe8;
        case 0x22abecu: goto label_22abec;
        case 0x22abf0u: goto label_22abf0;
        case 0x22abf4u: goto label_22abf4;
        case 0x22abf8u: goto label_22abf8;
        case 0x22abfcu: goto label_22abfc;
        case 0x22ac00u: goto label_22ac00;
        case 0x22ac04u: goto label_22ac04;
        case 0x22ac08u: goto label_22ac08;
        case 0x22ac0cu: goto label_22ac0c;
        case 0x22ac10u: goto label_22ac10;
        case 0x22ac14u: goto label_22ac14;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac1cu: goto label_22ac1c;
        case 0x22ac20u: goto label_22ac20;
        case 0x22ac24u: goto label_22ac24;
        case 0x22ac28u: goto label_22ac28;
        case 0x22ac2cu: goto label_22ac2c;
        case 0x22ac30u: goto label_22ac30;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac3cu: goto label_22ac3c;
        case 0x22ac40u: goto label_22ac40;
        case 0x22ac44u: goto label_22ac44;
        case 0x22ac48u: goto label_22ac48;
        case 0x22ac4cu: goto label_22ac4c;
        case 0x22ac50u: goto label_22ac50;
        case 0x22ac54u: goto label_22ac54;
        default: break;
    }

    ctx->pc = 0x22abb0u;

label_22abb0:
    // 0x22abb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22abb4:
    // 0x22abb4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_22abb8:
    // 0x22abb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22abb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22abbc:
    // 0x22abbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x22abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_22abc0:
    // 0x22abc0: 0x8c423ea0  lw          $v0, 0x3EA0($v0)
    ctx->pc = 0x22abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16032)));
label_22abc4:
    // 0x22abc4: 0x24710fc8  addiu       $s1, $v1, 0xFC8
    ctx->pc = 0x22abc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_22abc8:
    // 0x22abc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22abcc:
    // 0x22abcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22abd0:
    // 0x22abd0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22abd4:
    // 0x22abd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22abd8:
    // 0x22abd8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_22abdc:
    // 0x22abdc: 0x50700001  beql        $v1, $s0, . + 4 + (0x1 << 2)
label_22abe0:
    if (ctx->pc == 0x22ABE0u) {
        ctx->pc = 0x22ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABDCu;
        // 0x22abe0: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ABE4u;
        goto label_22abe4;
    }
    ctx->pc = 0x22ABDCu;
    {
        const bool branch_taken_0x22abdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x22abdc) {
            ctx->pc = 0x22ABE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ABDCu;
            // 0x22abe0: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22ABE4u;
            goto label_22abe4;
        }
    }
    ctx->pc = 0x22ABE4u;
label_22abe4:
    // 0x22abe4: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x22abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
label_22abe8:
    // 0x22abe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22abe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22abec:
    // 0x22abec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22abf0:
    // 0x22abf0: 0xc08ab16  jal         func_22AC58
label_22abf4:
    if (ctx->pc == 0x22ABF4u) {
        ctx->pc = 0x22ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABF0u;
        // 0x22abf4: 0x24a5add0  addiu       $a1, $a1, -0x5230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ABF8u;
        goto label_22abf8;
    }
    ctx->pc = 0x22ABF0u;
    SET_GPR_U32(ctx, 31, 0x22ABF8u);
    ctx->pc = 0x22ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABF0u;
    // 0x22abf4: 0x24a5add0  addiu       $a1, $a1, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x22ABF0u, 0x22ABF8u)) {
        return;
    }
    ctx->pc = 0x22ABF8u;
label_22abf8:
    // 0x22abf8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x22abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_22abfc:
    // 0x22abfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ac00:
    // 0x22ac00: 0xc09397e  jal         func_24E5F8
label_22ac04:
    if (ctx->pc == 0x22AC04u) {
        ctx->pc = 0x22AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC00u;
        // 0x22ac04: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC08u;
        goto label_22ac08;
    }
    ctx->pc = 0x22AC00u;
    SET_GPR_U32(ctx, 31, 0x22AC08u);
    ctx->pc = 0x22AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC00u;
    // 0x22ac04: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x22AC00u, 0x22AC08u)) {
        return;
    }
    ctx->pc = 0x22AC08u;
label_22ac08:
    // 0x22ac08: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x22ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_22ac0c:
    // 0x22ac0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22ac10:
    // 0x22ac10: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x22ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22ac14:
    // 0x22ac14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22ac18:
    // 0x22ac18: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x22ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22ac1c:
    // 0x22ac1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x22ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_22ac20:
    // 0x22ac20: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22ac24:
    // 0x22ac24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22ac28:
    // 0x22ac28: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22ac2c:
    // 0x22ac2c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x22ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_22ac30:
    // 0x22ac30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_22ac34:
    // 0x22ac34: 0x40f809  jalr        $v0
label_22ac38:
    if (ctx->pc == 0x22AC38u) {
        ctx->pc = 0x22AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC34u;
        // 0x22ac38: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC3Cu;
        goto label_22ac3c;
    }
    ctx->pc = 0x22AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AC3Cu);
        ctx->pc = 0x22AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC34u;
        // 0x22ac38: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC34u, 0x22AC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AC3Cu;
label_22ac3c:
    // 0x22ac3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22ac3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22ac40:
    // 0x22ac40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ac44:
    // 0x22ac44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ac44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ac48:
    // 0x22ac48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22ac4c:
    // 0x22ac4c: 0x3e00008  jr          $ra
label_22ac50:
    if (ctx->pc == 0x22AC50u) {
        ctx->pc = 0x22AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC4Cu;
        // 0x22ac50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC54u;
        goto label_22ac54;
    }
    ctx->pc = 0x22AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC4Cu;
        // 0x22ac50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AC54u;
label_22ac54:
    // 0x22ac54: 0x0  nop
    ctx->pc = 0x22ac54u;
    // NOP
    ctx->pc = 0x22ac58u;
}
