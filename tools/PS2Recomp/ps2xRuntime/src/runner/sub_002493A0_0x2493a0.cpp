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

// Function: sub_002493A0
// Address: 0x2493a0 - 0x249400
void sub_002493A0_0x2493a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002493A0_0x2493a0");
#endif

    switch (ctx->pc) {
        case 0x2493a0u: goto label_2493a0;
        case 0x2493a4u: goto label_2493a4;
        case 0x2493a8u: goto label_2493a8;
        case 0x2493acu: goto label_2493ac;
        case 0x2493b0u: goto label_2493b0;
        case 0x2493b4u: goto label_2493b4;
        case 0x2493b8u: goto label_2493b8;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493c0u: goto label_2493c0;
        case 0x2493c4u: goto label_2493c4;
        case 0x2493c8u: goto label_2493c8;
        case 0x2493ccu: goto label_2493cc;
        case 0x2493d0u: goto label_2493d0;
        case 0x2493d4u: goto label_2493d4;
        case 0x2493d8u: goto label_2493d8;
        case 0x2493dcu: goto label_2493dc;
        case 0x2493e0u: goto label_2493e0;
        case 0x2493e4u: goto label_2493e4;
        case 0x2493e8u: goto label_2493e8;
        case 0x2493ecu: goto label_2493ec;
        case 0x2493f0u: goto label_2493f0;
        case 0x2493f4u: goto label_2493f4;
        case 0x2493f8u: goto label_2493f8;
        case 0x2493fcu: goto label_2493fc;
        default: break;
    }

    ctx->pc = 0x2493a0u;

label_2493a0:
    // 0x2493a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2493a4:
    // 0x2493a4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2493a8:
    // 0x2493a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2493a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2493ac:
    // 0x2493ac: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_2493b0:
    // 0x2493b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2493b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2493b4:
    // 0x2493b4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2493b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2493b8:
    // 0x2493b8: 0x2604008b  addiu       $a0, $s0, 0x8B
    ctx->pc = 0x2493b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 139));
label_2493bc:
    // 0x2493bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2493bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2493c0:
    // 0x2493c0: 0x40f809  jalr        $v0
label_2493c4:
    if (ctx->pc == 0x2493C4u) {
        ctx->pc = 0x2493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C0u;
        // 0x2493c4: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493C8u;
        goto label_2493c8;
    }
    ctx->pc = 0x2493C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2493C8u);
        ctx->pc = 0x2493C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493C0u;
        // 0x2493c4: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2493C0u, 0x2493C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2493C8u;
label_2493c8:
    // 0x2493c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2493c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2493cc:
    // 0x2493cc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2493d0:
    if (ctx->pc == 0x2493D0u) {
        ctx->pc = 0x2493D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493CCu;
        // 0x2493d0: 0x2483008b  addiu       $v1, $a0, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 139));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2493D4u;
        goto label_2493d4;
    }
    ctx->pc = 0x2493CCu;
    {
        const bool branch_taken_0x2493cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2493D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493CCu;
        // 0x2493d0: 0x2483008b  addiu       $v1, $a0, 0x8B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 139));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2493cc) {
            ctx->pc = 0x2493ECu;
            goto label_2493ec;
        }
    }
    ctx->pc = 0x2493D4u;
label_2493d4:
    // 0x2493d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2493d8:
    // 0x2493d8: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x2493d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_2493dc:
    // 0x2493dc: 0xac900004  sw          $s0, 0x4($a0)
    ctx->pc = 0x2493dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 16));
label_2493e0:
    // 0x2493e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2493e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2493e4:
    // 0x2493e4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2493e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_2493e8:
    // 0x2493e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2493e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2493ec:
    // 0x2493ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2493ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2493f0:
    // 0x2493f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2493f4:
    // 0x2493f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2493f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2493f8:
    // 0x2493f8: 0x3e00008  jr          $ra
label_2493fc:
    if (ctx->pc == 0x2493FCu) {
        ctx->pc = 0x2493FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493F8u;
        // 0x2493fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249400u;
        goto label_fallthrough_0x2493f8;
    }
    ctx->pc = 0x2493F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2493FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2493F8u;
        // 0x2493fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2493F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2493f8:
    ctx->pc = 0x249400u;
}
