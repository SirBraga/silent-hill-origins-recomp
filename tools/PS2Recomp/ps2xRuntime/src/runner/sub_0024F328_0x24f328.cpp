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

// Function: sub_0024F328
// Address: 0x24f328 - 0x24f360
void sub_0024F328_0x24f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F328_0x24f328");
#endif

    switch (ctx->pc) {
        case 0x24f328u: goto label_24f328;
        case 0x24f32cu: goto label_24f32c;
        case 0x24f330u: goto label_24f330;
        case 0x24f334u: goto label_24f334;
        case 0x24f338u: goto label_24f338;
        case 0x24f33cu: goto label_24f33c;
        case 0x24f340u: goto label_24f340;
        case 0x24f344u: goto label_24f344;
        case 0x24f348u: goto label_24f348;
        case 0x24f34cu: goto label_24f34c;
        case 0x24f350u: goto label_24f350;
        case 0x24f354u: goto label_24f354;
        case 0x24f358u: goto label_24f358;
        case 0x24f35cu: goto label_24f35c;
        default: break;
    }

    ctx->pc = 0x24f328u;

label_24f328:
    // 0x24f328: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24f328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24f32c:
    // 0x24f32c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24f330:
    // 0x24f330: 0x27858580  addiu       $a1, $gp, -0x7A80
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935936));
label_24f334:
    // 0x24f334: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x24f334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_24f338:
    // 0x24f338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24f33c:
    // 0x24f33c: 0x40f809  jalr        $v0
label_24f340:
    if (ctx->pc == 0x24F340u) {
        ctx->pc = 0x24F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F33Cu;
        // 0x24f340: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F344u;
        goto label_24f344;
    }
    ctx->pc = 0x24F33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24F344u);
        ctx->pc = 0x24F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F33Cu;
        // 0x24f340: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F33Cu, 0x24F344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24F344u;
label_24f344:
    // 0x24f344: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24f344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24f348:
    // 0x24f348: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24f348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24f34c:
    // 0x24f34c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x24f34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_24f350:
    // 0x24f350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24f350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f354:
    // 0x24f354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24f354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24f358:
    // 0x24f358: 0x3e00008  jr          $ra
label_24f35c:
    if (ctx->pc == 0x24F35Cu) {
        ctx->pc = 0x24F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F358u;
        // 0x24f35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24F360u;
        goto label_fallthrough_0x24f358;
    }
    ctx->pc = 0x24F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F358u;
        // 0x24f35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24f358:
    ctx->pc = 0x24F360u;
}
