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

// Function: sub_00200368
// Address: 0x200368 - 0x200430
void sub_00200368_0x200368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200368_0x200368");
#endif

    switch (ctx->pc) {
        case 0x2003c4u: goto label_2003c4;
        case 0x2003d8u: goto label_2003d8;
        case 0x2003f8u: goto label_2003f8;
        default: break;
    }

    ctx->pc = 0x200368u;

    // 0x200368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x200368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20036c: 0x3c060070  lui         $a2, 0x70
    ctx->pc = 0x20036cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)112 << 16));
    // 0x200370: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x200370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x200374: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200378: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x200378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x20037c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x200380: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x200380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200384: 0x8cc22cd0  lw          $v0, 0x2CD0($a2)
    ctx->pc = 0x200384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CD0u));
    // 0x200388: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20038c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20038Cu;
    {
        const bool branch_taken_0x20038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20038Cu;
        // 0x200390: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20038c) {
            ctx->pc = 0x2003C4u;
            goto label_2003c4;
        }
    }
    ctx->pc = 0x200394u;
    // 0x200394: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x200398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20039c: 0x26052cc0  addiu       $a1, $s0, 0x2CC0
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
    // 0x2003a0: 0xacc32cd0  sw          $v1, 0x2CD0($a2)
    ctx->pc = 0x2003a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11472), GPR_U32(ctx, 3));
    // 0x2003a4: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x2003a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
    // 0x2003a8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2003a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2003ac: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2003acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x2003b0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2003b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2003b4: 0xae002cc0  sw          $zero, 0x2CC0($s0)
    ctx->pc = 0x2003b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11456), GPR_U32(ctx, 0));
    // 0x2003b8: 0x24840948  addiu       $a0, $a0, 0x948
    ctx->pc = 0x2003b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2376));
    // 0x2003bc: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x2003BCu;
    SET_GPR_U32(ctx, 31, 0x2003C4u);
    ctx->pc = 0x2003C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003BCu;
    // 0x2003c0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x2003BCu, 0x2003C4u)) {
        return;
    }
    ctx->pc = 0x2003C4u;
label_2003c4:
    // 0x2003c4: 0x26022cc0  addiu       $v0, $s0, 0x2CC0
    ctx->pc = 0x2003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
    // 0x2003c8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2003c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2003cc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2003CCu;
    {
        const bool branch_taken_0x2003cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003CCu;
        // 0x2003d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003cc) {
            ctx->pc = 0x200414u;
            goto label_200414;
        }
    }
    ctx->pc = 0x2003D4u;
    // 0x2003d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2003d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2003d8:
    // 0x2003d8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2003d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2003dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2003DCu;
    {
        const bool branch_taken_0x2003dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2003DCu;
        // 0x2003e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003dc) {
            ctx->pc = 0x2003F0u;
            goto label_2003f0;
        }
    }
    ctx->pc = 0x2003E4u;
    // 0x2003e4: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2003E4u;
    {
        const bool branch_taken_0x2003e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2003e4) {
            ctx->pc = 0x2003E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2003E4u;
            // 0x2003e8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200408u;
            goto label_200408;
        }
    }
    ctx->pc = 0x2003ECu;
    // 0x2003ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2003ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2003f0:
    // 0x2003f0: 0xc0801a0  jal         func_200680
    ctx->pc = 0x2003F0u;
    SET_GPR_U32(ctx, 31, 0x2003F8u);
    ctx->pc = 0x2003F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2003F0u;
    // 0x2003f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200680u, 0x2003F0u, 0x2003F8u)) {
        return;
    }
    ctx->pc = 0x2003F8u;
label_2003f8:
    // 0x2003f8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2003F8u;
    {
        const bool branch_taken_0x2003f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2003f8) {
            ctx->pc = 0x2003FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2003F8u;
            // 0x2003fc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200408u;
            goto label_200408;
        }
    }
    ctx->pc = 0x200400u;
    // 0x200400: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200400u;
    {
        const bool branch_taken_0x200400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200400u;
        // 0x200404: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200400) {
            ctx->pc = 0x200414u;
            goto label_200414;
        }
    }
    ctx->pc = 0x200408u;
label_200408:
    // 0x200408: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x200408u;
    {
        const bool branch_taken_0x200408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x200408) {
            ctx->pc = 0x20040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200408u;
            // 0x20040c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2003D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2003d8;
        }
    }
    ctx->pc = 0x200410u;
    // 0x200410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200414:
    // 0x200414: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x200414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200418: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20041c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20041cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200424: 0x3e00008  jr          $ra
    ctx->pc = 0x200424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200424u;
        // 0x200428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20042Cu;
    // 0x20042c: 0x0  nop
    ctx->pc = 0x20042cu;
    // NOP
    ctx->pc = 0x200430u;
}
