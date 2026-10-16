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

// Function: sub_001B3FE0
// Address: 0x1b3fe0 - 0x1b4010
void sub_001B3FE0_0x1b3fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3FE0_0x1b3fe0");
#endif

    switch (ctx->pc) {
        case 0x1b3fe0u: goto label_1b3fe0;
        case 0x1b3fe4u: goto label_1b3fe4;
        case 0x1b3fe8u: goto label_1b3fe8;
        case 0x1b3fecu: goto label_1b3fec;
        case 0x1b3ff0u: goto label_1b3ff0;
        case 0x1b3ff4u: goto label_1b3ff4;
        case 0x1b3ff8u: goto label_1b3ff8;
        case 0x1b3ffcu: goto label_1b3ffc;
        case 0x1b4000u: goto label_1b4000;
        case 0x1b4004u: goto label_1b4004;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b400cu: goto label_1b400c;
        default: break;
    }

    ctx->pc = 0x1b3fe0u;

label_1b3fe0:
    // 0x1b3fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3fe4:
    // 0x1b3fe4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b3fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b3fe8:
    // 0x1b3fe8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1b3fec:
    if (ctx->pc == 0x1B3FECu) {
        ctx->pc = 0x1B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE8u;
        // 0x1b3fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B3FF0u;
        goto label_1b3ff0;
    }
    ctx->pc = 0x1B3FE8u;
    {
        const bool branch_taken_0x1b3fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FE8u;
        // 0x1b3fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fe8) {
            ctx->pc = 0x1B4004u;
            goto label_1b4004;
        }
    }
    ctx->pc = 0x1B3FF0u;
label_1b3ff0:
    // 0x1b3ff0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1b3ff4:
    // 0x1b3ff4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b3ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ff8:
    // 0x1b3ff8: 0x8c620ff8  lw          $v0, 0xFF8($v1)
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
label_1b3ffc:
    // 0x1b3ffc: 0x40f809  jalr        $v0
label_1b4000:
    if (ctx->pc == 0x1B4000u) {
        ctx->pc = 0x1B4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FFCu;
        // 0x1b4000: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4004u;
        goto label_1b4004;
    }
    ctx->pc = 0x1B3FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4004u);
        ctx->pc = 0x1B4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FFCu;
        // 0x1b4000: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3FFCu, 0x1B4004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4004u;
label_1b4004:
    // 0x1b4004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4008:
    // 0x1b4008: 0x3e00008  jr          $ra
label_1b400c:
    if (ctx->pc == 0x1B400Cu) {
        ctx->pc = 0x1B400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4008u;
        // 0x1b400c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B4010u;
        goto label_fallthrough_0x1b4008;
    }
    ctx->pc = 0x1B4008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4008u;
        // 0x1b400c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b4008:
    ctx->pc = 0x1B4010u;
}
