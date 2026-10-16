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

// Function: sub_001C4DB0
// Address: 0x1c4db0 - 0x1c4e80
void sub_001C4DB0_0x1c4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4DB0_0x1c4db0");
#endif

    switch (ctx->pc) {
        case 0x1c4df0u: goto label_1c4df0;
        case 0x1c4e00u: goto label_1c4e00;
        case 0x1c4e10u: goto label_1c4e10;
        case 0x1c4e20u: goto label_1c4e20;
        case 0x1c4e30u: goto label_1c4e30;
        case 0x1c4e40u: goto label_1c4e40;
        case 0x1c4e50u: goto label_1c4e50;
        case 0x1c4e60u: goto label_1c4e60;
        default: break;
    }

    ctx->pc = 0x1c4db0u;

    // 0x1c4db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4db4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4dbc: 0x8ca302d8  lw          $v1, 0x2D8($a1)
    ctx->pc = 0x1c4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 728)));
    // 0x1c4dc0: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1c4dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c4dc4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C4DC4u;
    {
        const bool branch_taken_0x1c4dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DC4u;
        // 0x1c4dc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dc4) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4DCCu;
    // 0x1c4dcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c4dd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c4dd4: 0x2442e930  addiu       $v0, $v0, -0x16D0
    ctx->pc = 0x1c4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961456));
    // 0x1c4dd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4ddc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4de0: 0x800008  jr          $a0
    ctx->pc = 0x1C4DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4DE8u: goto label_1c4de8;
            case 0x1C4DF8u: goto label_1c4df8;
            case 0x1C4E08u: goto label_1c4e08;
            case 0x1C4E18u: goto label_1c4e18;
            case 0x1C4E28u: goto label_1c4e28;
            case 0x1C4E38u: goto label_1c4e38;
            case 0x1C4E48u: goto label_1c4e48;
            case 0x1C4E58u: goto label_1c4e58;
            case 0x1C4E68u: goto label_1c4e68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4DE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C4DE8u;
label_1c4de8:
    // 0x1c4de8: 0xc05fd86  jal         func_17F618
    ctx->pc = 0x1C4DE8u;
    SET_GPR_U32(ctx, 31, 0x1C4DF0u);
    ctx->pc = 0x17F618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F618u, 0x1C4DE8u, 0x1C4DF0u)) {
        return;
    }
    ctx->pc = 0x1C4DF0u;
label_1c4df0:
    // 0x1c4df0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C4DF0u;
    {
        const bool branch_taken_0x1c4df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4DF0u;
        // 0x1c4df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4df0) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4DF8u;
label_1c4df8:
    // 0x1c4df8: 0xc05fd8a  jal         func_17F628
    ctx->pc = 0x1C4DF8u;
    SET_GPR_U32(ctx, 31, 0x1C4E00u);
    ctx->pc = 0x17F628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F628u, 0x1C4DF8u, 0x1C4E00u)) {
        return;
    }
    ctx->pc = 0x1C4E00u;
label_1c4e00:
    // 0x1c4e00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C4E00u;
    {
        const bool branch_taken_0x1c4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E00u;
        // 0x1c4e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e00) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E08u;
label_1c4e08:
    // 0x1c4e08: 0xc05fd8e  jal         func_17F638
    ctx->pc = 0x1C4E08u;
    SET_GPR_U32(ctx, 31, 0x1C4E10u);
    ctx->pc = 0x17F638u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F638u, 0x1C4E08u, 0x1C4E10u)) {
        return;
    }
    ctx->pc = 0x1C4E10u;
label_1c4e10:
    // 0x1c4e10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C4E10u;
    {
        const bool branch_taken_0x1c4e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E10u;
        // 0x1c4e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e10) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E18u;
label_1c4e18:
    // 0x1c4e18: 0xc05fd92  jal         func_17F648
    ctx->pc = 0x1C4E18u;
    SET_GPR_U32(ctx, 31, 0x1C4E20u);
    ctx->pc = 0x17F648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F648u, 0x1C4E18u, 0x1C4E20u)) {
        return;
    }
    ctx->pc = 0x1C4E20u;
label_1c4e20:
    // 0x1c4e20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4E20u;
    {
        const bool branch_taken_0x1c4e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E20u;
        // 0x1c4e24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e20) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E28u;
label_1c4e28:
    // 0x1c4e28: 0xc05fd96  jal         func_17F658
    ctx->pc = 0x1C4E28u;
    SET_GPR_U32(ctx, 31, 0x1C4E30u);
    ctx->pc = 0x17F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F658u, 0x1C4E28u, 0x1C4E30u)) {
        return;
    }
    ctx->pc = 0x1C4E30u;
label_1c4e30:
    // 0x1c4e30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C4E30u;
    {
        const bool branch_taken_0x1c4e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E30u;
        // 0x1c4e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e30) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E38u;
label_1c4e38:
    // 0x1c4e38: 0xc05fd9a  jal         func_17F668
    ctx->pc = 0x1C4E38u;
    SET_GPR_U32(ctx, 31, 0x1C4E40u);
    ctx->pc = 0x17F668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F668u, 0x1C4E38u, 0x1C4E40u)) {
        return;
    }
    ctx->pc = 0x1C4E40u;
label_1c4e40:
    // 0x1c4e40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C4E40u;
    {
        const bool branch_taken_0x1c4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E40u;
        // 0x1c4e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e40) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E48u;
label_1c4e48:
    // 0x1c4e48: 0xc05fd9e  jal         func_17F678
    ctx->pc = 0x1C4E48u;
    SET_GPR_U32(ctx, 31, 0x1C4E50u);
    ctx->pc = 0x17F678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F678u, 0x1C4E48u, 0x1C4E50u)) {
        return;
    }
    ctx->pc = 0x1C4E50u;
label_1c4e50:
    // 0x1c4e50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4E50u;
    {
        const bool branch_taken_0x1c4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E50u;
        // 0x1c4e54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e50) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E58u;
label_1c4e58:
    // 0x1c4e58: 0xc05fda2  jal         func_17F688
    ctx->pc = 0x1C4E58u;
    SET_GPR_U32(ctx, 31, 0x1C4E60u);
    ctx->pc = 0x17F688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F688u, 0x1C4E58u, 0x1C4E60u)) {
        return;
    }
    ctx->pc = 0x1C4E60u;
label_1c4e60:
    // 0x1c4e60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4E60u;
    {
        const bool branch_taken_0x1c4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E60u;
        // 0x1c4e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e60) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E68u;
label_1c4e68:
    // 0x1c4e68: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1c4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1c4e6c: 0x8c44014c  lw          $a0, 0x14C($v0)
    ctx->pc = 0x1c4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_1c4e70:
    // 0x1c4e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c4e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4E78u;
        // 0x1c4e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4E80u;
}
