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

// Function: sub_00155300
// Address: 0x155300 - 0x155420
void sub_00155300_0x155300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155300_0x155300");
#endif

    switch (ctx->pc) {
        case 0x155334u: goto label_155334;
        case 0x155340u: goto label_155340;
        case 0x155374u: goto label_155374;
        case 0x155390u: goto label_155390;
        case 0x1553a0u: goto label_1553a0;
        case 0x1553d0u: goto label_1553d0;
        case 0x1553e0u: goto label_1553e0;
        default: break;
    }

    ctx->pc = 0x155300u;

    // 0x155300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x155304: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155308: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x155308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15530c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x155310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x155310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155314: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x155314u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155318: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x155318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15531c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x155320: 0x26640074  addiu       $a0, $s3, 0x74
    ctx->pc = 0x155320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x155324: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x155324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x155328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15532c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15532Cu;
    SET_GPR_U32(ctx, 31, 0x155334u);
    ctx->pc = 0x155330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15532Cu;
    // 0x155330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15532Cu, 0x155334u)) {
        return;
    }
    ctx->pc = 0x155334u;
label_155334:
    // 0x155334: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x155334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155338: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x15533c: 0x0  nop
    ctx->pc = 0x15533cu;
    // NOP
label_155340:
    // 0x155340: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x155340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x155344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x155344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155348: 0x0  nop
    ctx->pc = 0x155348u;
    // NOP
    // 0x15534c: 0x0  nop
    ctx->pc = 0x15534cu;
    // NOP
    // 0x155350: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x155350u;
    {
        const bool branch_taken_0x155350 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x155354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155350u;
        // 0x155354: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155350) {
            ctx->pc = 0x155340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155340;
        }
    }
    ctx->pc = 0x155358u;
    // 0x155358: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x15535c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15535Cu;
    {
        const bool branch_taken_0x15535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15535Cu;
        // 0x155360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15535c) {
            ctx->pc = 0x1553FCu;
            goto label_1553fc;
        }
    }
    ctx->pc = 0x155364u;
    // 0x155364: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x155364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15536c: 0xc055996  jal         func_156658
    ctx->pc = 0x15536Cu;
    SET_GPR_U32(ctx, 31, 0x155374u);
    ctx->pc = 0x155370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15536Cu;
    // 0x155370: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156658u, 0x15536Cu, 0x155374u)) {
        return;
    }
    ctx->pc = 0x155374u;
label_155374:
    // 0x155374: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x155374u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
    // 0x155378: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15537c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x15537Cu;
    {
        const bool branch_taken_0x15537c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15537c) {
            ctx->pc = 0x155380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15537Cu;
            // 0x155380: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1553BCu;
            goto label_1553bc;
        }
    }
    ctx->pc = 0x155384u;
    // 0x155384: 0x26710078  addiu       $s1, $s3, 0x78
    ctx->pc = 0x155384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x155388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15538c: 0x0  nop
    ctx->pc = 0x15538cu;
    // NOP
label_155390:
    // 0x155390: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x155390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x155394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155398: 0xc055996  jal         func_156658
    ctx->pc = 0x155398u;
    SET_GPR_U32(ctx, 31, 0x1553A0u);
    ctx->pc = 0x15539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155398u;
    // 0x15539c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156658u, 0x155398u, 0x1553A0u)) {
        return;
    }
    ctx->pc = 0x1553A0u;
label_1553a0:
    // 0x1553a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1553a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1553a4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x1553a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1553a8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1553A8u;
    {
        const bool branch_taken_0x1553a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553A8u;
        // 0x1553ac: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553a8) {
            ctx->pc = 0x1553B8u;
            goto label_1553b8;
        }
    }
    ctx->pc = 0x1553B0u;
    // 0x1553b0: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1553B0u;
    {
        const bool branch_taken_0x1553b0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1553B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553B0u;
        // 0x1553b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553b0) {
            ctx->pc = 0x155390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155390;
        }
    }
    ctx->pc = 0x1553B8u;
label_1553b8:
    // 0x1553b8: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1553b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1553bc:
    // 0x1553bc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1553BCu;
    {
        const bool branch_taken_0x1553bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553BCu;
        // 0x1553c0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553bc) {
            ctx->pc = 0x1553FCu;
            goto label_1553fc;
        }
    }
    ctx->pc = 0x1553C4u;
    // 0x1553c4: 0x26710080  addiu       $s1, $s3, 0x80
    ctx->pc = 0x1553c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x1553c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1553c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553cc: 0x0  nop
    ctx->pc = 0x1553ccu;
    // NOP
label_1553d0:
    // 0x1553d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1553d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1553d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1553d8: 0xc055996  jal         func_156658
    ctx->pc = 0x1553D8u;
    SET_GPR_U32(ctx, 31, 0x1553E0u);
    ctx->pc = 0x1553DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553D8u;
    // 0x1553dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x156658u, 0x1553D8u, 0x1553E0u)) {
        return;
    }
    ctx->pc = 0x1553E0u;
label_1553e0:
    // 0x1553e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1553e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1553e4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1553e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1553e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1553E8u;
    {
        const bool branch_taken_0x1553e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553E8u;
        // 0x1553ec: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553e8) {
            ctx->pc = 0x1553FCu;
            goto label_1553fc;
        }
    }
    ctx->pc = 0x1553F0u;
    // 0x1553f0: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1553f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1553f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1553F4u;
    {
        const bool branch_taken_0x1553f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1553F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553F4u;
        // 0x1553f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553f4) {
            ctx->pc = 0x1553D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1553d0;
        }
    }
    ctx->pc = 0x1553FCu;
label_1553fc:
    // 0x1553fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1553fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155400: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x155400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155404: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x155404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155408: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x155408u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15540c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15540cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155414: 0x3e00008  jr          $ra
    ctx->pc = 0x155414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155414u;
        // 0x155418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15541Cu;
    // 0x15541c: 0x0  nop
    ctx->pc = 0x15541cu;
    // NOP
    ctx->pc = 0x155420u;
}
