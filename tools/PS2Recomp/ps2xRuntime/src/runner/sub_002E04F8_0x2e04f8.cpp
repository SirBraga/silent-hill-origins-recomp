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

// Function: sub_002E04F8
// Address: 0x2e04f8 - 0x2e05f0
void sub_002E04F8_0x2e04f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E04F8_0x2e04f8");
#endif

    switch (ctx->pc) {
        case 0x2e0550u: goto label_2e0550;
        case 0x2e0568u: goto label_2e0568;
        case 0x2e057cu: goto label_2e057c;
        default: break;
    }

    ctx->pc = 0x2e04f8u;

    // 0x2e04f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e04fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e04fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e0500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e050c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e0510: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e0510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e0514: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2E0514u;
    {
        const bool branch_taken_0x2e0514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0514) {
            ctx->pc = 0x2E0518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0514u;
            // 0x2e0518: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E05E0u;
            goto label_2e05e0;
        }
    }
    ctx->pc = 0x2E051Cu;
    // 0x2e051c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e0520: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2e0520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0524: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e0524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e0528: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e0528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e052c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0530: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e0530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e0534: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2e0534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e0538: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E0538u;
    {
        const bool branch_taken_0x2e0538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0538u;
        // 0x2e053c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0538) {
            ctx->pc = 0x2E0580u;
            goto label_2e0580;
        }
    }
    ctx->pc = 0x2E0540u;
    // 0x2e0540: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e0544: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e0544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0548: 0xc0b6770  jal         func_2D9DC0
    ctx->pc = 0x2E0548u;
    SET_GPR_U32(ctx, 31, 0x2E0550u);
    ctx->pc = 0x2E054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0548u;
    // 0x2e054c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9DC0u, 0x2E0548u, 0x2E0550u)) {
        return;
    }
    ctx->pc = 0x2E0550u;
label_2e0550:
    // 0x2e0550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0550u;
    {
        const bool branch_taken_0x2e0550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0550u;
        // 0x2e0554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0550) {
            ctx->pc = 0x2E0568u;
            goto label_2e0568;
        }
    }
    ctx->pc = 0x2E0558u;
    // 0x2e0558: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e0558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e055c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e055cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0560: 0xc0b6710  jal         func_2D9C40
    ctx->pc = 0x2E0560u;
    SET_GPR_U32(ctx, 31, 0x2E0568u);
    ctx->pc = 0x2E0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0560u;
    // 0x2e0564: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9C40u, 0x2E0560u, 0x2E0568u)) {
        return;
    }
    ctx->pc = 0x2E0568u;
label_2e0568:
    // 0x2e0568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e056c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e056cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e0570: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e0570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0574: 0xc0b673c  jal         func_2D9CF0
    ctx->pc = 0x2E0574u;
    SET_GPR_U32(ctx, 31, 0x2E057Cu);
    ctx->pc = 0x2E0578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0574u;
    // 0x2e0578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9CF0u, 0x2E0574u, 0x2E057Cu)) {
        return;
    }
    ctx->pc = 0x2E057Cu;
label_2e057c:
    // 0x2e057c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2e057cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2e0580:
    // 0x2e0580: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e0584: 0x27829028  addiu       $v0, $gp, -0x6FD8
    ctx->pc = 0x2e0584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938664));
    // 0x2e0588: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2e0588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2e058c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2e058cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2e0590: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e0590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2e0594: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2e0594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2e0598: 0x8f828c18  lw          $v0, -0x73E8($gp)
    ctx->pc = 0x2e0598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937624)));
    // 0x2e059c: 0x8f839028  lw          $v1, -0x6FD8($gp)
    ctx->pc = 0x2e059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938664)));
    // 0x2e05a0: 0x8f848c1c  lw          $a0, -0x73E4($gp)
    ctx->pc = 0x2e05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937628)));
    // 0x2e05a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e05a8: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2e05a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x2e05ac: 0xaf909028  sw          $s0, -0x6FD8($gp)
    ctx->pc = 0x2e05acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938664), GPR_U32(ctx, 16));
    // 0x2e05b0: 0xaf828c18  sw          $v0, -0x73E8($gp)
    ctx->pc = 0x2e05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 2));
    // 0x2e05b4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2e05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e05b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e05bc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2e05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2e05c0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2e05c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e05c4: 0xaf848c1c  sw          $a0, -0x73E4($gp)
    ctx->pc = 0x2e05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937628), GPR_U32(ctx, 4));
    // 0x2e05c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e05c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e05cc: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x2e05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x2e05d0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2e05d4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e05d8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2e05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2e05dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e05dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e05e0:
    // 0x2e05e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e05e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e05e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e05e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e05e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E05E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05E8u;
        // 0x2e05ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E05E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E05F0u;
}
