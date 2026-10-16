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

// Function: sub_0021B348
// Address: 0x21b348 - 0x21b378
void sub_0021B348_0x21b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B348_0x21b348");
#endif

    switch (ctx->pc) {
        case 0x21b348u: goto label_21b348;
        case 0x21b34cu: goto label_21b34c;
        case 0x21b350u: goto label_21b350;
        case 0x21b354u: goto label_21b354;
        case 0x21b358u: goto label_21b358;
        case 0x21b35cu: goto label_21b35c;
        case 0x21b360u: goto label_21b360;
        case 0x21b364u: goto label_21b364;
        case 0x21b368u: goto label_21b368;
        case 0x21b36cu: goto label_21b36c;
        case 0x21b370u: goto label_21b370;
        case 0x21b374u: goto label_21b374;
        default: break;
    }

    ctx->pc = 0x21b348u;

label_21b348:
    // 0x21b348: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x21b348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_21b34c:
    // 0x21b34c: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
label_21b350:
    // 0x21b350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_21b354:
    // 0x21b354: 0x8c6210e0  lw          $v0, 0x10E0($v1)
    ctx->pc = 0x21b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4320)));
label_21b358:
    // 0x21b358: 0x8cc402bc  lw          $a0, 0x2BC($a2)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
label_21b35c:
    // 0x21b35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21b360:
    // 0x21b360: 0x40f809  jalr        $v0
label_21b364:
    if (ctx->pc == 0x21B364u) {
        ctx->pc = 0x21B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B360u;
        // 0x21b364: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B368u;
        goto label_21b368;
    }
    ctx->pc = 0x21B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B368u);
        ctx->pc = 0x21B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B360u;
        // 0x21b364: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B360u, 0x21B368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B368u;
label_21b368:
    // 0x21b368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b36c:
    // 0x21b36c: 0x3e00008  jr          $ra
label_21b370:
    if (ctx->pc == 0x21B370u) {
        ctx->pc = 0x21B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B36Cu;
        // 0x21b370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B374u;
        goto label_21b374;
    }
    ctx->pc = 0x21B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B36Cu;
        // 0x21b370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B374u;
label_21b374:
    // 0x21b374: 0x0  nop
    ctx->pc = 0x21b374u;
    // NOP
    ctx->pc = 0x21b378u;
}
