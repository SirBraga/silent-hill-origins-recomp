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

// Function: sub_0017D358
// Address: 0x17d358 - 0x17d428
void sub_0017D358_0x17d358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D358_0x17d358");
#endif

    switch (ctx->pc) {
        case 0x17d374u: goto label_17d374;
        case 0x17d388u: goto label_17d388;
        case 0x17d3a0u: goto label_17d3a0;
        case 0x17d3ccu: goto label_17d3cc;
        case 0x17d3e0u: goto label_17d3e0;
        case 0x17d400u: goto label_17d400;
        default: break;
    }

    ctx->pc = 0x17d358u;

    // 0x17d358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d35c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17d360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d364: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17d364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d36c: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x17D36Cu;
    SET_GPR_U32(ctx, 31, 0x17D374u);
    ctx->pc = 0x17D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D36Cu;
    // 0x17d370: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x17D36Cu, 0x17D374u)) {
        return;
    }
    ctx->pc = 0x17D374u;
label_17d374:
    // 0x17d374: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17d378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d37c: 0x8c46f958  lw          $a2, -0x6A8($v0)
    ctx->pc = 0x17d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF958u));
    // 0x17d380: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x17D380u;
    SET_GPR_U32(ctx, 31, 0x17D388u);
    ctx->pc = 0x17D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D380u;
    // 0x17d384: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x17D380u, 0x17D388u)) {
        return;
    }
    ctx->pc = 0x17D388u;
label_17d388:
    // 0x17d388: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d38c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d390: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17D390u;
    {
        const bool branch_taken_0x17d390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D390u;
        // 0x17d394: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d390) {
            ctx->pc = 0x17D410u;
            goto label_17d410;
        }
    }
    ctx->pc = 0x17D398u;
    // 0x17d398: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d39c: 0x0  nop
    ctx->pc = 0x17d39cu;
    // NOP
label_17d3a0:
    // 0x17d3a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17d3a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D3A4u;
    {
        const bool branch_taken_0x17d3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3A4u;
        // 0x17d3a8: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3a4) {
            ctx->pc = 0x17D3BCu;
            goto label_17d3bc;
        }
    }
    ctx->pc = 0x17D3ACu;
    // 0x17d3ac: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D3ACu;
    {
        const bool branch_taken_0x17d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x17D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3ACu;
        // 0x17d3b0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3ac) {
            ctx->pc = 0x17D3D4u;
            goto label_17d3d4;
        }
    }
    ctx->pc = 0x17D3B4u;
    // 0x17d3b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17D3B4u;
    {
        const bool branch_taken_0x17d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3B4u;
        // 0x17d3b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3b4) {
            ctx->pc = 0x17D3ECu;
            goto label_17d3ec;
        }
    }
    ctx->pc = 0x17D3BCu;
label_17d3bc:
    // 0x17d3bc: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x17d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x17d3c0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x17d3c4: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x17D3C4u;
    SET_GPR_U32(ctx, 31, 0x17D3CCu);
    ctx->pc = 0x17D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3C4u;
    // 0x17d3c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x17D3C4u, 0x17D3CCu)) {
        return;
    }
    ctx->pc = 0x17D3CCu;
label_17d3cc:
    // 0x17d3cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17D3CCu;
    {
        const bool branch_taken_0x17d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3CCu;
        // 0x17d3d0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3cc) {
            ctx->pc = 0x17D3E8u;
            goto label_17d3e8;
        }
    }
    ctx->pc = 0x17D3D4u;
label_17d3d4:
    // 0x17d3d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17d3d8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x17D3D8u;
    SET_GPR_U32(ctx, 31, 0x17D3E0u);
    ctx->pc = 0x17D3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3D8u;
    // 0x17d3dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17D3D8u, 0x17D3E0u)) {
        return;
    }
    ctx->pc = 0x17D3E0u;
label_17d3e0:
    // 0x17d3e0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x17d3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x17d3e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17d3e8:
    // 0x17d3e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17d3ec:
    // 0x17d3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d3f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d3f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17d3f8: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x17D3F8u;
    SET_GPR_U32(ctx, 31, 0x17D400u);
    ctx->pc = 0x17D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3F8u;
    // 0x17d3fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x17D3F8u, 0x17D400u)) {
        return;
    }
    ctx->pc = 0x17D400u;
label_17d400:
    // 0x17d400: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d404: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17d404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17d408: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17D408u;
    {
        const bool branch_taken_0x17d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D408u;
        // 0x17d40c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d408) {
            ctx->pc = 0x17D3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d3a0;
        }
    }
    ctx->pc = 0x17D410u;
label_17d410:
    // 0x17d410: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17d410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d414: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17d414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D41Cu;
        // 0x17d420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D424u;
    // 0x17d424: 0x0  nop
    ctx->pc = 0x17d424u;
    // NOP
    ctx->pc = 0x17d428u;
}
