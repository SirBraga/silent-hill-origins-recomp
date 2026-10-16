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

// Function: sub_0024D348
// Address: 0x24d348 - 0x24d408
void sub_0024D348_0x24d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D348_0x24d348");
#endif

    switch (ctx->pc) {
        case 0x24d3e8u: goto label_24d3e8;
        case 0x24d3f4u: goto label_24d3f4;
        default: break;
    }

    ctx->pc = 0x24d348u;

    // 0x24d348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d34c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d350: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24d354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24d358: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24D358u;
    {
        const bool branch_taken_0x24d358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D358u;
        // 0x24d35c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d358) {
            ctx->pc = 0x24D3A8u;
            goto label_24d3a8;
        }
    }
    ctx->pc = 0x24D360u;
    // 0x24d360: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x24d360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24d364: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D364u;
    {
        const bool branch_taken_0x24d364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D364u;
        // 0x24d368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d364) {
            ctx->pc = 0x24D37Cu;
            goto label_24d37c;
        }
    }
    ctx->pc = 0x24D36Cu;
    // 0x24d36c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D36Cu;
    {
        const bool branch_taken_0x24d36c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x24d36c) {
            ctx->pc = 0x24D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D36Cu;
            // 0x24d370: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D390u;
            goto label_24d390;
        }
    }
    ctx->pc = 0x24D374u;
    // 0x24d374: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x24D374u;
    {
        const bool branch_taken_0x24d374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D374u;
        // 0x24d378: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d374) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D37Cu;
label_24d37c:
    // 0x24d37c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d380: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24D380u;
    {
        const bool branch_taken_0x24d380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D380u;
        // 0x24d384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d380) {
            ctx->pc = 0x24D3BCu;
            goto label_24d3bc;
        }
    }
    ctx->pc = 0x24D388u;
    // 0x24d388: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24D388u;
    {
        const bool branch_taken_0x24d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D388u;
        // 0x24d38c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d388) {
            ctx->pc = 0x24D3E0u;
            goto label_24d3e0;
        }
    }
    ctx->pc = 0x24D390u;
label_24d390:
    // 0x24d390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d394: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24d398: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x24d398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x24d39c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24d3a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24D3A0u;
    {
        const bool branch_taken_0x24d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3A0u;
        // 0x24d3a4: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3a0) {
            ctx->pc = 0x24D3F4u;
            goto label_24d3f4;
        }
    }
    ctx->pc = 0x24D3A8u;
label_24d3a8:
    // 0x24d3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3ac: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x24d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x24d3b0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x24d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x24d3b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x24D3B4u;
    {
        const bool branch_taken_0x24d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3B4u;
        // 0x24d3b8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3b4) {
            ctx->pc = 0x24D3F4u;
            goto label_24d3f4;
        }
    }
    ctx->pc = 0x24D3BCu;
label_24d3bc:
    // 0x24d3bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x24d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24d3c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3c4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x24d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x24d3c8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24d3cc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x24d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x24d3d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24d3d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24D3D4u;
    {
        const bool branch_taken_0x24d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3D4u;
        // 0x24d3d8: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3d4) {
            ctx->pc = 0x24D3F4u;
            goto label_24d3f4;
        }
    }
    ctx->pc = 0x24D3DCu;
    // 0x24d3dc: 0x0  nop
    ctx->pc = 0x24d3dcu;
    // NOP
label_24d3e0:
    // 0x24d3e0: 0xc092848  jal         func_24A120
    ctx->pc = 0x24D3E0u;
    SET_GPR_U32(ctx, 31, 0x24D3E8u);
    ctx->pc = 0x24D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3E0u;
    // 0x24d3e4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24D3E0u, 0x24D3E8u)) {
        return;
    }
    ctx->pc = 0x24D3E8u;
label_24d3e8:
    // 0x24d3e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3ec: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24D3ECu;
    SET_GPR_U32(ctx, 31, 0x24D3F4u);
    ctx->pc = 0x24D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3ECu;
    // 0x24d3f0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24D3ECu, 0x24D3F4u)) {
        return;
    }
    ctx->pc = 0x24D3F4u;
label_24d3f4:
    // 0x24d3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24d3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24d3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d3fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24d3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d400: 0x3e00008  jr          $ra
    ctx->pc = 0x24D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D400u;
        // 0x24d404: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D408u;
}
