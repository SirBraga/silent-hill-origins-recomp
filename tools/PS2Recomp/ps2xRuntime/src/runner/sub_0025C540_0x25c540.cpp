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

// Function: sub_0025C540
// Address: 0x25c540 - 0x25c620
void sub_0025C540_0x25c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C540_0x25c540");
#endif

    switch (ctx->pc) {
        case 0x25c578u: goto label_25c578;
        case 0x25c5a0u: goto label_25c5a0;
        case 0x25c5b8u: goto label_25c5b8;
        default: break;
    }

    ctx->pc = 0x25c540u;

    // 0x25c540: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x25c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x25c544: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x25c544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x25c548: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x25c548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x25c54c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25c54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c550: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x25c550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x25c554: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x25c554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x25c558: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x25c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x25c55c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x25c55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x25c560: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x25c560u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x25c564: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25C564u;
    {
        const bool branch_taken_0x25c564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C564u;
        // 0x25c568: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c564) {
            ctx->pc = 0x25C5C4u;
            goto label_25c5c4;
        }
    }
    ctx->pc = 0x25C56Cu;
    // 0x25c56c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x25c56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c574: 0x0  nop
    ctx->pc = 0x25c574u;
    // NOP
label_25c578:
    // 0x25c578: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25C578u;
    {
        const bool branch_taken_0x25c578 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C578u;
        // 0x25c57c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c578) {
            ctx->pc = 0x25C5DCu;
            goto label_25c5dc;
        }
    }
    ctx->pc = 0x25C580u;
    // 0x25c580: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x25c580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x25c584: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x25c584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x25c588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25c588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25c58c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x25c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x25c590: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x25C590u;
    {
        const bool branch_taken_0x25c590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C590u;
        // 0x25c594: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c590) {
            ctx->pc = 0x25C5CCu;
            goto label_25c5cc;
        }
    }
    ctx->pc = 0x25C598u;
    // 0x25c598: 0xc09620e  jal         func_258838
    ctx->pc = 0x25C598u;
    SET_GPR_U32(ctx, 31, 0x25C5A0u);
    ctx->pc = 0x25C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C598u;
    // 0x25c59c: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258838u, 0x25C598u, 0x25C5A0u)) {
        return;
    }
    ctx->pc = 0x25C5A0u;
label_25c5a0:
    // 0x25c5a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C5A0u;
    {
        const bool branch_taken_0x25c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5A0u;
        // 0x25c5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5a0) {
            ctx->pc = 0x25C5C4u;
            goto label_25c5c4;
        }
    }
    ctx->pc = 0x25C5A8u;
    // 0x25c5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25c5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25c5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5b0: 0xc096e62  jal         func_25B988
    ctx->pc = 0x25C5B0u;
    SET_GPR_U32(ctx, 31, 0x25C5B8u);
    ctx->pc = 0x25C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C5B0u;
    // 0x25c5b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25B988u, 0x25C5B0u, 0x25C5B8u)) {
        return;
    }
    ctx->pc = 0x25C5B8u;
label_25c5b8:
    // 0x25c5b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25c5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c5bc: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C5BCu;
    {
        const bool branch_taken_0x25c5bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5bc) {
            ctx->pc = 0x25C5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C5BCu;
            // 0x25c5c0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C5D0u;
            goto label_25c5d0;
        }
    }
    ctx->pc = 0x25C5C4u;
label_25c5c4:
    // 0x25c5c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25C5C4u;
    {
        const bool branch_taken_0x25c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5C4u;
        // 0x25c5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5c4) {
            ctx->pc = 0x25C5FCu;
            goto label_25c5fc;
        }
    }
    ctx->pc = 0x25C5CCu;
label_25c5cc:
    // 0x25c5cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x25c5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25c5d0:
    // 0x25c5d0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x25c5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x25c5d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C5D4u;
    {
        const bool branch_taken_0x25c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C5D4u;
        // 0x25c5d8: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5d4) {
            ctx->pc = 0x25C5F0u;
            goto label_25c5f0;
        }
    }
    ctx->pc = 0x25C5DCu;
label_25c5dc:
    // 0x25c5dc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x25c5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x25c5e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x25c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25c5e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x25c5e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25c5e8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x25c5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25c5ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x25c5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_25c5f0:
    // 0x25c5f0: 0x683ffe1  bgezl       $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x25C5F0u;
    {
        const bool branch_taken_0x25c5f0 = (GPR_S64(ctx, 20) >= 0);
        if (branch_taken_0x25c5f0) {
            ctx->pc = 0x25C5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C5F0u;
            // 0x25c5f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c578;
        }
    }
    ctx->pc = 0x25C5F8u;
    // 0x25c5f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x25c5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25c5fc:
    // 0x25c5fc: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x25c5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x25c600: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x25c600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x25c604: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x25c604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25c608: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x25c608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25c60c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x25c60cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25c610: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x25c610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25c614: 0x3e00008  jr          $ra
    ctx->pc = 0x25C614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C614u;
        // 0x25c618: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C61Cu;
    // 0x25c61c: 0x0  nop
    ctx->pc = 0x25c61cu;
    // NOP
    ctx->pc = 0x25c620u;
}
