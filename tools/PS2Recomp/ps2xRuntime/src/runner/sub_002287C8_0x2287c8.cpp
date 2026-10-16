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

// Function: sub_002287C8
// Address: 0x2287c8 - 0x228808
void sub_002287C8_0x2287c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002287C8_0x2287c8");
#endif

    switch (ctx->pc) {
        case 0x2287c8u: goto label_2287c8;
        case 0x2287ccu: goto label_2287cc;
        case 0x2287d0u: goto label_2287d0;
        case 0x2287d4u: goto label_2287d4;
        case 0x2287d8u: goto label_2287d8;
        case 0x2287dcu: goto label_2287dc;
        case 0x2287e0u: goto label_2287e0;
        case 0x2287e4u: goto label_2287e4;
        case 0x2287e8u: goto label_2287e8;
        case 0x2287ecu: goto label_2287ec;
        case 0x2287f0u: goto label_2287f0;
        case 0x2287f4u: goto label_2287f4;
        case 0x2287f8u: goto label_2287f8;
        case 0x2287fcu: goto label_2287fc;
        case 0x228800u: goto label_228800;
        case 0x228804u: goto label_228804;
        default: break;
    }

    ctx->pc = 0x2287c8u;

label_2287c8:
    // 0x2287c8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2287c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2287cc:
    // 0x2287cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2287ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2287d0:
    // 0x2287d0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x2287d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_2287d4:
    // 0x2287d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2287d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2287d8:
    // 0x2287d8: 0x8ca2104c  lw          $v0, 0x104C($a1)
    ctx->pc = 0x2287d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4172)));
label_2287dc:
    // 0x2287dc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2287dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2287e0:
    // 0x2287e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2287e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2287e4:
    // 0x2287e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2287e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2287e8:
    // 0x2287e8: 0x40f809  jalr        $v0
label_2287ec:
    if (ctx->pc == 0x2287ECu) {
        ctx->pc = 0x2287ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287E8u;
        // 0x2287ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287F0u;
        goto label_2287f0;
    }
    ctx->pc = 0x2287E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2287F0u);
        ctx->pc = 0x2287ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287E8u;
        // 0x2287ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287E8u, 0x2287F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2287F0u;
label_2287f0:
    // 0x2287f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2287f4:
    if (ctx->pc == 0x2287F4u) {
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287F0u;
        // 0x2287f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287F8u;
        goto label_2287f8;
    }
    ctx->pc = 0x2287F0u;
    {
        const bool branch_taken_0x2287f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2287F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287F0u;
        // 0x2287f4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287f0) {
            ctx->pc = 0x2287FCu;
            goto label_2287fc;
        }
    }
    ctx->pc = 0x2287F8u;
label_2287f8:
    // 0x2287f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2287f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2287fc:
    // 0x2287fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2287fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_228800:
    // 0x228800: 0x3e00008  jr          $ra
label_228804:
    if (ctx->pc == 0x228804u) {
        ctx->pc = 0x228804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228800u;
        // 0x228804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228808u;
        goto label_fallthrough_0x228800;
    }
    ctx->pc = 0x228800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228800u;
        // 0x228804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x228800:
    ctx->pc = 0x228808u;
}
