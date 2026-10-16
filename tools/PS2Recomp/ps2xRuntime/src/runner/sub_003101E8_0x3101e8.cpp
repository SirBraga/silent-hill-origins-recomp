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

// Function: sub_003101E8
// Address: 0x3101e8 - 0x310228
void sub_003101E8_0x3101e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003101E8_0x3101e8");
#endif

    switch (ctx->pc) {
        case 0x3101e8u: goto label_3101e8;
        case 0x3101ecu: goto label_3101ec;
        case 0x3101f0u: goto label_3101f0;
        case 0x3101f4u: goto label_3101f4;
        case 0x3101f8u: goto label_3101f8;
        case 0x3101fcu: goto label_3101fc;
        case 0x310200u: goto label_310200;
        case 0x310204u: goto label_310204;
        case 0x310208u: goto label_310208;
        case 0x31020cu: goto label_31020c;
        case 0x310210u: goto label_310210;
        case 0x310214u: goto label_310214;
        case 0x310218u: goto label_310218;
        case 0x31021cu: goto label_31021c;
        case 0x310220u: goto label_310220;
        case 0x310224u: goto label_310224;
        default: break;
    }

    ctx->pc = 0x3101e8u;

label_3101e8:
    // 0x3101e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3101ec:
    // 0x3101ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3101ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3101f0:
    // 0x3101f0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3101f4:
    if (ctx->pc == 0x3101F4u) {
        ctx->pc = 0x3101F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101F0u;
        // 0x3101f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3101F8u;
        goto label_3101f8;
    }
    ctx->pc = 0x3101F0u;
    {
        const bool branch_taken_0x3101f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3101F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101F0u;
        // 0x3101f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101f0) {
            ctx->pc = 0x31021Cu;
            goto label_31021c;
        }
    }
    ctx->pc = 0x3101F8u;
label_3101f8:
    // 0x3101f8: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x3101f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_3101fc:
    // 0x3101fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3101fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_310200:
    // 0x310200: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_310204:
    if (ctx->pc == 0x310204u) {
        ctx->pc = 0x310204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310200u;
        // 0x310204: 0xac820090  sw          $v0, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310208u;
        goto label_310208;
    }
    ctx->pc = 0x310200u;
    {
        const bool branch_taken_0x310200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310200u;
        // 0x310204: 0xac820090  sw          $v0, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310200) {
            ctx->pc = 0x310218u;
            goto label_310218;
        }
    }
    ctx->pc = 0x310208u;
label_310208:
    // 0x310208: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x310208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_31020c:
    // 0x31020c: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x31020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_310210:
    // 0x310210: 0x40f809  jalr        $v0
label_310214:
    if (ctx->pc == 0x310214u) {
        ctx->pc = 0x310218u;
        goto label_310218;
    }
    ctx->pc = 0x310210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x310218u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310210u, 0x310218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310218u;
label_310218:
    // 0x310218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31021c:
    // 0x31021c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31021cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_310220:
    // 0x310220: 0x3e00008  jr          $ra
label_310224:
    if (ctx->pc == 0x310224u) {
        ctx->pc = 0x310224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310220u;
        // 0x310224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310228u;
        goto label_fallthrough_0x310220;
    }
    ctx->pc = 0x310220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310220u;
        // 0x310224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x310220:
    ctx->pc = 0x310228u;
}
