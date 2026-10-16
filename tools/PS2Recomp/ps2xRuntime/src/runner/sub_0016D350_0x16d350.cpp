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

// Function: sub_0016D350
// Address: 0x16d350 - 0x16d418
void sub_0016D350_0x16d350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D350_0x16d350");
#endif

    switch (ctx->pc) {
        case 0x16d36cu: goto label_16d36c;
        case 0x16d380u: goto label_16d380;
        case 0x16d398u: goto label_16d398;
        case 0x16d3bcu: goto label_16d3bc;
        case 0x16d3d8u: goto label_16d3d8;
        case 0x16d3f4u: goto label_16d3f4;
        default: break;
    }

    ctx->pc = 0x16d350u;

    // 0x16d350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d354: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d358: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d35c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16d35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d364: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16D364u;
    SET_GPR_U32(ctx, 31, 0x16D36Cu);
    ctx->pc = 0x16D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D364u;
    // 0x16d368: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16D364u, 0x16D36Cu)) {
        return;
    }
    ctx->pc = 0x16D36Cu;
label_16d36c:
    // 0x16d36c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d374: 0x8c46f6b0  lw          $a2, -0x950($v0)
    ctx->pc = 0x16d374u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF6B0u));
    // 0x16d378: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16D378u;
    SET_GPR_U32(ctx, 31, 0x16D380u);
    ctx->pc = 0x16D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D378u;
    // 0x16d37c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16D378u, 0x16D380u)) {
        return;
    }
    ctx->pc = 0x16D380u;
label_16d380:
    // 0x16d380: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d388: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16D388u;
    {
        const bool branch_taken_0x16d388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D388u;
        // 0x16d38c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d388) {
            ctx->pc = 0x16D404u;
            goto label_16d404;
        }
    }
    ctx->pc = 0x16D390u;
    // 0x16d390: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16d390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d394: 0x0  nop
    ctx->pc = 0x16d394u;
    // NOP
label_16d398:
    // 0x16d398: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16d39c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D39Cu;
    {
        const bool branch_taken_0x16d39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d39c) {
            ctx->pc = 0x16D3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D39Cu;
            // 0x16d3a0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D3B4u;
            goto label_16d3b4;
        }
    }
    ctx->pc = 0x16D3A4u;
    // 0x16d3a4: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D3A4u;
    {
        const bool branch_taken_0x16d3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16D3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3A4u;
        // 0x16d3a8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3a4) {
            ctx->pc = 0x16D3C4u;
            goto label_16d3c4;
        }
    }
    ctx->pc = 0x16D3ACu;
    // 0x16d3ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16D3ACu;
    {
        const bool branch_taken_0x16d3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3ACu;
        // 0x16d3b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3ac) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D3B4u;
label_16d3b4:
    // 0x16d3b4: 0xc081b56  jal         func_206D58
    ctx->pc = 0x16D3B4u;
    SET_GPR_U32(ctx, 31, 0x16D3BCu);
    ctx->pc = 0x16D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3B4u;
    // 0x16d3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x16D3B4u, 0x16D3BCu)) {
        return;
    }
    ctx->pc = 0x16D3BCu;
label_16d3bc:
    // 0x16d3bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16D3BCu;
    {
        const bool branch_taken_0x16d3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3BCu;
        // 0x16d3c0: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3bc) {
            ctx->pc = 0x16D3D8u;
            goto label_16d3d8;
        }
    }
    ctx->pc = 0x16D3C4u;
label_16d3c4:
    // 0x16d3c4: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16d3c8: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x16d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x16d3cc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16d3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16d3d0: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16D3D0u;
    SET_GPR_U32(ctx, 31, 0x16D3D8u);
    ctx->pc = 0x16D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3D0u;
    // 0x16d3d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16D3D0u, 0x16D3D8u)) {
        return;
    }
    ctx->pc = 0x16D3D8u;
label_16d3d8:
    // 0x16d3d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d3dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16d3e0:
    // 0x16d3e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d3e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d3e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d3ec: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16D3ECu;
    SET_GPR_U32(ctx, 31, 0x16D3F4u);
    ctx->pc = 0x16D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D3ECu;
    // 0x16d3f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16D3ECu, 0x16D3F4u)) {
        return;
    }
    ctx->pc = 0x16D3F4u;
label_16d3f4:
    // 0x16d3f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d3f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d3fc: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16D3FCu;
    {
        const bool branch_taken_0x16d3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D3FCu;
        // 0x16d400: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3fc) {
            ctx->pc = 0x16D398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d398;
        }
    }
    ctx->pc = 0x16D404u;
label_16d404:
    // 0x16d404: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d408: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d40c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d410: 0x3e00008  jr          $ra
    ctx->pc = 0x16D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D410u;
        // 0x16d414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D418u;
}
