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

// Function: sub_00125450
// Address: 0x125450 - 0x125480
void sub_00125450_0x125450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125450_0x125450");
#endif

    switch (ctx->pc) {
        case 0x125450u: goto label_125450;
        case 0x125454u: goto label_125454;
        case 0x125458u: goto label_125458;
        case 0x12545cu: goto label_12545c;
        case 0x125460u: goto label_125460;
        case 0x125464u: goto label_125464;
        case 0x125468u: goto label_125468;
        case 0x12546cu: goto label_12546c;
        case 0x125470u: goto label_125470;
        case 0x125474u: goto label_125474;
        case 0x125478u: goto label_125478;
        case 0x12547cu: goto label_12547c;
        default: break;
    }

    ctx->pc = 0x125450u;

label_125450:
    // 0x125450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_125454:
    // 0x125454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_125458:
    // 0x125458: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x125458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_12545c:
    // 0x12545c: 0x24840044  addiu       $a0, $a0, 0x44
    ctx->pc = 0x12545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
label_125460:
    // 0x125460: 0x84650038  lh          $a1, 0x38($v1)
    ctx->pc = 0x125460u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_125464:
    // 0x125464: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_125468:
    // 0x125468: 0x40f809  jalr        $v0
label_12546c:
    if (ctx->pc == 0x12546Cu) {
        ctx->pc = 0x12546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125468u;
        // 0x12546c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125470u;
        goto label_125470;
    }
    ctx->pc = 0x125468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125470u);
        ctx->pc = 0x12546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125468u;
        // 0x12546c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125468u, 0x125470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125470u;
label_125470:
    // 0x125470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125474:
    // 0x125474: 0x3e00008  jr          $ra
label_125478:
    if (ctx->pc == 0x125478u) {
        ctx->pc = 0x125478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125474u;
        // 0x125478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12547Cu;
        goto label_12547c;
    }
    ctx->pc = 0x125474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125474u;
        // 0x125478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12547Cu;
label_12547c:
    // 0x12547c: 0x0  nop
    ctx->pc = 0x12547cu;
    // NOP
    ctx->pc = 0x125480u;
}
