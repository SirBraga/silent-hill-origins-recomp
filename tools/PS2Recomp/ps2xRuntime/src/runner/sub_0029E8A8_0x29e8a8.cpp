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

// Function: sub_0029E8A8
// Address: 0x29e8a8 - 0x29e908
void sub_0029E8A8_0x29e8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E8A8_0x29e8a8");
#endif

    switch (ctx->pc) {
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        case 0x29e8d0u: goto label_29e8d0;
        case 0x29e8d4u: goto label_29e8d4;
        case 0x29e8d8u: goto label_29e8d8;
        case 0x29e8dcu: goto label_29e8dc;
        case 0x29e8e0u: goto label_29e8e0;
        case 0x29e8e4u: goto label_29e8e4;
        case 0x29e8e8u: goto label_29e8e8;
        case 0x29e8ecu: goto label_29e8ec;
        case 0x29e8f0u: goto label_29e8f0;
        case 0x29e8f4u: goto label_29e8f4;
        case 0x29e8f8u: goto label_29e8f8;
        case 0x29e8fcu: goto label_29e8fc;
        case 0x29e900u: goto label_29e900;
        case 0x29e904u: goto label_29e904;
        default: break;
    }

    ctx->pc = 0x29e8a8u;

label_29e8a8:
    // 0x29e8a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29e8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29e8ac:
    // 0x29e8ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29e8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29e8b0:
    // 0x29e8b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29e8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29e8b4:
    // 0x29e8b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29e8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e8b8:
    // 0x29e8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e8bc:
    // 0x29e8bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29e8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29e8c0:
    // 0x29e8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e8c4:
    // 0x29e8c4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x29e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_29e8c8:
    // 0x29e8c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29e8cc:
    if (ctx->pc == 0x29E8CCu) {
        ctx->pc = 0x29E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C8u;
        // 0x29e8cc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8D0u;
        goto label_29e8d0;
    }
    ctx->pc = 0x29E8C8u;
    {
        const bool branch_taken_0x29e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8C8u;
        // 0x29e8cc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8c8) {
            ctx->pc = 0x29E8D8u;
            goto label_29e8d8;
        }
    }
    ctx->pc = 0x29E8D0u;
label_29e8d0:
    // 0x29e8d0: 0xc0a71ee  jal         func_29C7B8
label_29e8d4:
    if (ctx->pc == 0x29E8D4u) {
        ctx->pc = 0x29E8D8u;
        goto label_29e8d8;
    }
    ctx->pc = 0x29E8D0u;
    SET_GPR_U32(ctx, 31, 0x29E8D8u);
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29E8D0u, 0x29E8D8u)) {
        return;
    }
    ctx->pc = 0x29E8D8u;
label_29e8d8:
    // 0x29e8d8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29e8dc:
    // 0x29e8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e8e0:
    // 0x29e8e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e8e4:
    // 0x29e8e4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_29e8e8:
    // 0x29e8e8: 0x40f809  jalr        $v0
label_29e8ec:
    if (ctx->pc == 0x29E8ECu) {
        ctx->pc = 0x29E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8E8u;
        // 0x29e8ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8F0u;
        goto label_29e8f0;
    }
    ctx->pc = 0x29E8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E8F0u);
        ctx->pc = 0x29E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E8E8u;
        // 0x29e8ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E8E8u, 0x29E8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E8F0u;
label_29e8f0:
    // 0x29e8f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29e8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e8f4:
    // 0x29e8f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29e8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e8f8:
    // 0x29e8f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29e8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e8fc:
    // 0x29e8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e900:
    // 0x29e900: 0x3e00008  jr          $ra
label_29e904:
    if (ctx->pc == 0x29E904u) {
        ctx->pc = 0x29E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E900u;
        // 0x29e904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E908u;
        goto label_fallthrough_0x29e900;
    }
    ctx->pc = 0x29E900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E900u;
        // 0x29e904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29e900:
    ctx->pc = 0x29E908u;
}
