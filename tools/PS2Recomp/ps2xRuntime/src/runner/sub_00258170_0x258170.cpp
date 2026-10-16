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

// Function: sub_00258170
// Address: 0x258170 - 0x2581a0
void sub_00258170_0x258170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258170_0x258170");
#endif

    switch (ctx->pc) {
        case 0x258170u: goto label_258170;
        case 0x258174u: goto label_258174;
        case 0x258178u: goto label_258178;
        case 0x25817cu: goto label_25817c;
        case 0x258180u: goto label_258180;
        case 0x258184u: goto label_258184;
        case 0x258188u: goto label_258188;
        case 0x25818cu: goto label_25818c;
        case 0x258190u: goto label_258190;
        case 0x258194u: goto label_258194;
        case 0x258198u: goto label_258198;
        case 0x25819cu: goto label_25819c;
        default: break;
    }

    ctx->pc = 0x258170u;

label_258170:
    // 0x258170: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x258170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_258174:
    // 0x258174: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x258174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_258178:
    // 0x258178: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x258178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_25817c:
    // 0x25817c: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x25817cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_258180:
    // 0x258180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_258184:
    // 0x258184: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x258184u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_258188:
    // 0x258188: 0x40f809  jalr        $v0
label_25818c:
    if (ctx->pc == 0x25818Cu) {
        ctx->pc = 0x25818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258188u;
        // 0x25818c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258190u;
        goto label_258190;
    }
    ctx->pc = 0x258188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258190u);
        ctx->pc = 0x25818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258188u;
        // 0x25818c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258188u, 0x258190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258190u;
label_258190:
    // 0x258190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258194:
    // 0x258194: 0x3e00008  jr          $ra
label_258198:
    if (ctx->pc == 0x258198u) {
        ctx->pc = 0x258198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258194u;
        // 0x258198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25819Cu;
        goto label_25819c;
    }
    ctx->pc = 0x258194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258194u;
        // 0x258198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25819Cu;
label_25819c:
    // 0x25819c: 0x0  nop
    ctx->pc = 0x25819cu;
    // NOP
    ctx->pc = 0x2581a0u;
}
