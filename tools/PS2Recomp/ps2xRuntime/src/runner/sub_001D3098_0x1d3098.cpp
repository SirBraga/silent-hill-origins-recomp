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

// Function: sub_001D3098
// Address: 0x1d3098 - 0x1d30f0
void sub_001D3098_0x1d3098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3098_0x1d3098");
#endif

    switch (ctx->pc) {
        case 0x1d3098u: goto label_1d3098;
        case 0x1d309cu: goto label_1d309c;
        case 0x1d30a0u: goto label_1d30a0;
        case 0x1d30a4u: goto label_1d30a4;
        case 0x1d30a8u: goto label_1d30a8;
        case 0x1d30acu: goto label_1d30ac;
        case 0x1d30b0u: goto label_1d30b0;
        case 0x1d30b4u: goto label_1d30b4;
        case 0x1d30b8u: goto label_1d30b8;
        case 0x1d30bcu: goto label_1d30bc;
        case 0x1d30c0u: goto label_1d30c0;
        case 0x1d30c4u: goto label_1d30c4;
        case 0x1d30c8u: goto label_1d30c8;
        case 0x1d30ccu: goto label_1d30cc;
        case 0x1d30d0u: goto label_1d30d0;
        case 0x1d30d4u: goto label_1d30d4;
        case 0x1d30d8u: goto label_1d30d8;
        case 0x1d30dcu: goto label_1d30dc;
        case 0x1d30e0u: goto label_1d30e0;
        case 0x1d30e4u: goto label_1d30e4;
        case 0x1d30e8u: goto label_1d30e8;
        case 0x1d30ecu: goto label_1d30ec;
        default: break;
    }

    ctx->pc = 0x1d3098u;

label_1d3098:
    // 0x1d3098: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1d3098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
label_1d309c:
    // 0x1d309c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d309cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d30a0:
    // 0x1d30a0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d30a4:
    // 0x1d30a4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1d30a8:
    // 0x1d30a8: 0x8d079b5c  lw          $a3, -0x64A4($t0)
    ctx->pc = 0x1d30a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d30ac:
    // 0x1d30ac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d30acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d30b0:
    // 0x1d30b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d30b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d30b4:
    // 0x1d30b4: 0xacc59b6c  sw          $a1, -0x6494($a2)
    ctx->pc = 0x1d30b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941548), GPR_U32(ctx, 5));
label_1d30b8:
    // 0x1d30b8: 0xac649b68  sw          $a0, -0x6498($v1)
    ctx->pc = 0x1d30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941544), GPR_U32(ctx, 4));
label_1d30bc:
    // 0x1d30bc: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1d30bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1d30c0:
    // 0x1d30c0: 0x8d059b5c  lw          $a1, -0x64A4($t0)
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941532)));
label_1d30c4:
    // 0x1d30c4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1d30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d30c8:
    // 0x1d30c8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1d30cc:
    // 0x1d30cc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1d30d0:
    // 0x1d30d0: 0x60f809  jalr        $v1
label_1d30d4:
    if (ctx->pc == 0x1D30D4u) {
        ctx->pc = 0x1D30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30D0u;
        // 0x1d30d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30D8u;
        goto label_1d30d8;
    }
    ctx->pc = 0x1D30D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D30D8u);
        ctx->pc = 0x1D30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30D0u;
        // 0x1d30d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D30D0u, 0x1D30D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D30D8u;
label_1d30d8:
    // 0x1d30d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d30d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d30dc:
    // 0x1d30dc: 0x3e00008  jr          $ra
label_1d30e0:
    if (ctx->pc == 0x1D30E0u) {
        ctx->pc = 0x1D30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30DCu;
        // 0x1d30e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D30E4u;
        goto label_1d30e4;
    }
    ctx->pc = 0x1D30DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D30E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30DCu;
        // 0x1d30e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D30DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D30E4u;
label_1d30e4:
    // 0x1d30e4: 0x0  nop
    ctx->pc = 0x1d30e4u;
    // NOP
label_1d30e8:
    // 0x1d30e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d30e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d30ec:
    // 0x1d30ec: 0x0  nop
    ctx->pc = 0x1d30ecu;
    // NOP
    ctx->pc = 0x1d30f0u;
}
