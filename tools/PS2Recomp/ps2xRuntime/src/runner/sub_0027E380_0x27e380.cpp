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

// Function: sub_0027E380
// Address: 0x27e380 - 0x27e428
void sub_0027E380_0x27e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E380_0x27e380");
#endif

    switch (ctx->pc) {
        case 0x27e380u: goto label_27e380;
        case 0x27e384u: goto label_27e384;
        case 0x27e388u: goto label_27e388;
        case 0x27e38cu: goto label_27e38c;
        case 0x27e390u: goto label_27e390;
        case 0x27e394u: goto label_27e394;
        case 0x27e398u: goto label_27e398;
        case 0x27e39cu: goto label_27e39c;
        case 0x27e3a0u: goto label_27e3a0;
        case 0x27e3a4u: goto label_27e3a4;
        case 0x27e3a8u: goto label_27e3a8;
        case 0x27e3acu: goto label_27e3ac;
        case 0x27e3b0u: goto label_27e3b0;
        case 0x27e3b4u: goto label_27e3b4;
        case 0x27e3b8u: goto label_27e3b8;
        case 0x27e3bcu: goto label_27e3bc;
        case 0x27e3c0u: goto label_27e3c0;
        case 0x27e3c4u: goto label_27e3c4;
        case 0x27e3c8u: goto label_27e3c8;
        case 0x27e3ccu: goto label_27e3cc;
        case 0x27e3d0u: goto label_27e3d0;
        case 0x27e3d4u: goto label_27e3d4;
        case 0x27e3d8u: goto label_27e3d8;
        case 0x27e3dcu: goto label_27e3dc;
        case 0x27e3e0u: goto label_27e3e0;
        case 0x27e3e4u: goto label_27e3e4;
        case 0x27e3e8u: goto label_27e3e8;
        case 0x27e3ecu: goto label_27e3ec;
        case 0x27e3f0u: goto label_27e3f0;
        case 0x27e3f4u: goto label_27e3f4;
        case 0x27e3f8u: goto label_27e3f8;
        case 0x27e3fcu: goto label_27e3fc;
        case 0x27e400u: goto label_27e400;
        case 0x27e404u: goto label_27e404;
        case 0x27e408u: goto label_27e408;
        case 0x27e40cu: goto label_27e40c;
        case 0x27e410u: goto label_27e410;
        case 0x27e414u: goto label_27e414;
        case 0x27e418u: goto label_27e418;
        case 0x27e41cu: goto label_27e41c;
        case 0x27e420u: goto label_27e420;
        case 0x27e424u: goto label_27e424;
        default: break;
    }

    ctx->pc = 0x27e380u;

label_27e380:
    // 0x27e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27e384:
    // 0x27e384: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27e388:
    // 0x27e388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27e388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27e38c:
    // 0x27e38c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_27e390:
    // 0x27e390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27e394:
    // 0x27e394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27e394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e398:
    // 0x27e398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27e39c:
    // 0x27e39c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27e3a0:
    // 0x27e3a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27e3a4:
    // 0x27e3a4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x27e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_27e3a8:
    // 0x27e3a8: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x27e3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_27e3ac:
    // 0x27e3ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27e3b0:
    // 0x27e3b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_27e3b4:
    if (ctx->pc == 0x27E3B4u) {
        ctx->pc = 0x27E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3B0u;
        // 0x27e3b4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3B8u;
        goto label_27e3b8;
    }
    ctx->pc = 0x27E3B0u;
    {
        const bool branch_taken_0x27e3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3B0u;
        // 0x27e3b4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3b0) {
            ctx->pc = 0x27E3C4u;
            goto label_27e3c4;
        }
    }
    ctx->pc = 0x27E3B8u;
label_27e3b8:
    // 0x27e3b8: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27e3bc:
    // 0x27e3bc: 0x40f809  jalr        $v0
label_27e3c0:
    if (ctx->pc == 0x27E3C0u) {
        ctx->pc = 0x27E3C4u;
        goto label_27e3c4;
    }
    ctx->pc = 0x27E3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E3C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3BCu, 0x27E3C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E3C4u;
label_27e3c4:
    // 0x27e3c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x27e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27e3c8:
    // 0x27e3c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_27e3cc:
    if (ctx->pc == 0x27E3CCu) {
        ctx->pc = 0x27E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3C8u;
        // 0x27e3cc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3D0u;
        goto label_27e3d0;
    }
    ctx->pc = 0x27E3C8u;
    {
        const bool branch_taken_0x27e3c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3C8u;
        // 0x27e3cc: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3c8) {
            ctx->pc = 0x27E3DCu;
            goto label_27e3dc;
        }
    }
    ctx->pc = 0x27E3D0u;
label_27e3d0:
    // 0x27e3d0: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27e3d4:
    // 0x27e3d4: 0x40f809  jalr        $v0
label_27e3d8:
    if (ctx->pc == 0x27E3D8u) {
        ctx->pc = 0x27E3DCu;
        goto label_27e3dc;
    }
    ctx->pc = 0x27E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E3DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3D4u, 0x27E3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E3DCu;
label_27e3dc:
    // 0x27e3dc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x27e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_27e3e0:
    // 0x27e3e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_27e3e4:
    if (ctx->pc == 0x27E3E4u) {
        ctx->pc = 0x27E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3E0u;
        // 0x27e3e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E3E8u;
        goto label_27e3e8;
    }
    ctx->pc = 0x27E3E0u;
    {
        const bool branch_taken_0x27e3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3E0u;
        // 0x27e3e4: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e3e0) {
            ctx->pc = 0x27E3F4u;
            goto label_27e3f4;
        }
    }
    ctx->pc = 0x27E3E8u;
label_27e3e8:
    // 0x27e3e8: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x27e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_27e3ec:
    // 0x27e3ec: 0x40f809  jalr        $v0
label_27e3f0:
    if (ctx->pc == 0x27E3F0u) {
        ctx->pc = 0x27E3F4u;
        goto label_27e3f4;
    }
    ctx->pc = 0x27E3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27E3F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3ECu, 0x27E3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27E3F4u;
label_27e3f4:
    // 0x27e3f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e3f8:
    // 0x27e3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e3fc:
    // 0x27e3fc: 0xc0c493d  jal         func_3124F4
label_27e400:
    if (ctx->pc == 0x27E400u) {
        ctx->pc = 0x27E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E3FCu;
        // 0x27e400: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E404u;
        goto label_27e404;
    }
    ctx->pc = 0x27E3FCu;
    SET_GPR_U32(ctx, 31, 0x27E404u);
    ctx->pc = 0x27E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E3FCu;
    // 0x27e400: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27E3FCu, 0x27E404u)) {
        return;
    }
    ctx->pc = 0x27E404u;
label_27e404:
    // 0x27e404: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27e404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e408:
    // 0x27e408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27e408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27e40c:
    // 0x27e40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27e40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27e410:
    // 0x27e410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e414:
    // 0x27e414: 0x3e00008  jr          $ra
label_27e418:
    if (ctx->pc == 0x27E418u) {
        ctx->pc = 0x27E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E414u;
        // 0x27e418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E41Cu;
        goto label_27e41c;
    }
    ctx->pc = 0x27E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E414u;
        // 0x27e418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E41Cu;
label_27e41c:
    // 0x27e41c: 0x0  nop
    ctx->pc = 0x27e41cu;
    // NOP
label_27e420:
    // 0x27e420: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x27e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_27e424:
    // 0x27e424: 0x0  nop
    ctx->pc = 0x27e424u;
    // NOP
    ctx->pc = 0x27e428u;
}
