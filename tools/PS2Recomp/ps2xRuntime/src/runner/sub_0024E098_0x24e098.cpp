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

// Function: sub_0024E098
// Address: 0x24e098 - 0x24e0e8
void sub_0024E098_0x24e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E098_0x24e098");
#endif

    switch (ctx->pc) {
        case 0x24e098u: goto label_24e098;
        case 0x24e09cu: goto label_24e09c;
        case 0x24e0a0u: goto label_24e0a0;
        case 0x24e0a4u: goto label_24e0a4;
        case 0x24e0a8u: goto label_24e0a8;
        case 0x24e0acu: goto label_24e0ac;
        case 0x24e0b0u: goto label_24e0b0;
        case 0x24e0b4u: goto label_24e0b4;
        case 0x24e0b8u: goto label_24e0b8;
        case 0x24e0bcu: goto label_24e0bc;
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0c4u: goto label_24e0c4;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0ccu: goto label_24e0cc;
        case 0x24e0d0u: goto label_24e0d0;
        case 0x24e0d4u: goto label_24e0d4;
        case 0x24e0d8u: goto label_24e0d8;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e0e0u: goto label_24e0e0;
        case 0x24e0e4u: goto label_24e0e4;
        default: break;
    }

    ctx->pc = 0x24e098u;

label_24e098:
    // 0x24e098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24e09c:
    // 0x24e09c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24e09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e0a0:
    // 0x24e0a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24e0a4:
    // 0x24e0a4: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x24e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_24e0a8:
    // 0x24e0a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24e0ac:
    // 0x24e0ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24e0b0:
    if (ctx->pc == 0x24E0B0u) {
        ctx->pc = 0x24E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ACu;
        // 0x24e0b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0B4u;
        goto label_24e0b4;
    }
    ctx->pc = 0x24E0ACu;
    {
        const bool branch_taken_0x24e0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ACu;
        // 0x24e0b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0ac) {
            ctx->pc = 0x24E0CCu;
            goto label_24e0cc;
        }
    }
    ctx->pc = 0x24E0B4u;
label_24e0b4:
    // 0x24e0b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x24e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_24e0b8:
    // 0x24e0b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24e0bc:
    // 0x24e0bc: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x24e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_24e0c0:
    // 0x24e0c0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x24e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_24e0c4:
    // 0x24e0c4: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x24e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_24e0c8:
    // 0x24e0c8: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x24e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_24e0cc:
    // 0x24e0cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24e0d0:
    // 0x24e0d0: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x24e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_24e0d4:
    // 0x24e0d4: 0x40f809  jalr        $v0
label_24e0d8:
    if (ctx->pc == 0x24E0D8u) {
        ctx->pc = 0x24E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0D4u;
        // 0x24e0d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0DCu;
        goto label_24e0dc;
    }
    ctx->pc = 0x24E0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E0DCu);
        ctx->pc = 0x24E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0D4u;
        // 0x24e0d8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E0D4u, 0x24E0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E0DCu;
label_24e0dc:
    // 0x24e0dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e0e0:
    // 0x24e0e0: 0x3e00008  jr          $ra
label_24e0e4:
    if (ctx->pc == 0x24E0E4u) {
        ctx->pc = 0x24E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0E0u;
        // 0x24e0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0E8u;
        goto label_fallthrough_0x24e0e0;
    }
    ctx->pc = 0x24E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0E0u;
        // 0x24e0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24e0e0:
    ctx->pc = 0x24E0E8u;
}
