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

// Function: sub_0025D378
// Address: 0x25d378 - 0x25d400
void sub_0025D378_0x25d378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D378_0x25d378");
#endif

    switch (ctx->pc) {
        case 0x25d378u: goto label_25d378;
        case 0x25d37cu: goto label_25d37c;
        case 0x25d380u: goto label_25d380;
        case 0x25d384u: goto label_25d384;
        case 0x25d388u: goto label_25d388;
        case 0x25d38cu: goto label_25d38c;
        case 0x25d390u: goto label_25d390;
        case 0x25d394u: goto label_25d394;
        case 0x25d398u: goto label_25d398;
        case 0x25d39cu: goto label_25d39c;
        case 0x25d3a0u: goto label_25d3a0;
        case 0x25d3a4u: goto label_25d3a4;
        case 0x25d3a8u: goto label_25d3a8;
        case 0x25d3acu: goto label_25d3ac;
        case 0x25d3b0u: goto label_25d3b0;
        case 0x25d3b4u: goto label_25d3b4;
        case 0x25d3b8u: goto label_25d3b8;
        case 0x25d3bcu: goto label_25d3bc;
        case 0x25d3c0u: goto label_25d3c0;
        case 0x25d3c4u: goto label_25d3c4;
        case 0x25d3c8u: goto label_25d3c8;
        case 0x25d3ccu: goto label_25d3cc;
        case 0x25d3d0u: goto label_25d3d0;
        case 0x25d3d4u: goto label_25d3d4;
        case 0x25d3d8u: goto label_25d3d8;
        case 0x25d3dcu: goto label_25d3dc;
        case 0x25d3e0u: goto label_25d3e0;
        case 0x25d3e4u: goto label_25d3e4;
        case 0x25d3e8u: goto label_25d3e8;
        case 0x25d3ecu: goto label_25d3ec;
        case 0x25d3f0u: goto label_25d3f0;
        case 0x25d3f4u: goto label_25d3f4;
        case 0x25d3f8u: goto label_25d3f8;
        case 0x25d3fcu: goto label_25d3fc;
        default: break;
    }

    ctx->pc = 0x25d378u;

label_25d378:
    // 0x25d378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25d37c:
    // 0x25d37c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x25d37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d380:
    // 0x25d380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d384:
    // 0x25d384: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x25d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_25d388:
    // 0x25d388: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_25d38c:
    if (ctx->pc == 0x25D38Cu) {
        ctx->pc = 0x25D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D388u;
        // 0x25d38c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D390u;
        goto label_25d390;
    }
    ctx->pc = 0x25D388u;
    {
        const bool branch_taken_0x25d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D388u;
        // 0x25d38c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d388) {
            ctx->pc = 0x25D3F0u;
            goto label_25d3f0;
        }
    }
    ctx->pc = 0x25D390u;
label_25d390:
    // 0x25d390: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x25d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_25d394:
    // 0x25d394: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_25d398:
    if (ctx->pc == 0x25D398u) {
        ctx->pc = 0x25D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D394u;
        // 0x25d398: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D39Cu;
        goto label_25d39c;
    }
    ctx->pc = 0x25D394u;
    {
        const bool branch_taken_0x25d394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D394u;
        // 0x25d398: 0x3c070073  lui         $a3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d394) {
            ctx->pc = 0x25D3F0u;
            goto label_25d3f0;
        }
    }
    ctx->pc = 0x25D39Cu;
label_25d39c:
    // 0x25d39c: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x25d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_25d3a0:
    // 0x25d3a0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x25d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_25d3a4:
    // 0x25d3a4: 0x24e70fc8  addiu       $a3, $a3, 0xFC8
    ctx->pc = 0x25d3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_25d3a8:
    // 0x25d3a8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x25d3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_25d3ac:
    // 0x25d3ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25d3b0:
    // 0x25d3b0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x25d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_25d3b4:
    // 0x25d3b4: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x25d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_25d3b8:
    // 0x25d3b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_25d3bc:
    // 0x25d3bc: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x25d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_25d3c0:
    // 0x25d3c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25d3c4:
    // 0x25d3c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_25d3c8:
    // 0x25d3c8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x25d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_25d3cc:
    // 0x25d3cc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x25d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_25d3d0:
    // 0x25d3d0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x25d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_25d3d4:
    // 0x25d3d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_25d3d8:
    // 0x25d3d8: 0x8c633fe8  lw          $v1, 0x3FE8($v1)
    ctx->pc = 0x25d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16360)));
label_25d3dc:
    // 0x25d3dc: 0x8ce2011c  lw          $v0, 0x11C($a3)
    ctx->pc = 0x25d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 284)));
label_25d3e0:
    // 0x25d3e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x25d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_25d3e4:
    // 0x25d3e4: 0x40f809  jalr        $v0
label_25d3e8:
    if (ctx->pc == 0x25D3E8u) {
        ctx->pc = 0x25D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E4u;
        // 0x25d3e8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D3ECu;
        goto label_25d3ec;
    }
    ctx->pc = 0x25D3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D3ECu);
        ctx->pc = 0x25D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3E4u;
        // 0x25d3e8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D3E4u, 0x25D3ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D3ECu;
label_25d3ec:
    // 0x25d3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d3f0:
    // 0x25d3f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d3f4:
    // 0x25d3f4: 0x3e00008  jr          $ra
label_25d3f8:
    if (ctx->pc == 0x25D3F8u) {
        ctx->pc = 0x25D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3F4u;
        // 0x25d3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D3FCu;
        goto label_25d3fc;
    }
    ctx->pc = 0x25D3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D3F4u;
        // 0x25d3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D3F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D3FCu;
label_25d3fc:
    // 0x25d3fc: 0x0  nop
    ctx->pc = 0x25d3fcu;
    // NOP
    ctx->pc = 0x25d400u;
}
