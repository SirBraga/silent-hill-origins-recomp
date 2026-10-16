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

// Function: sub_001CB580
// Address: 0x1cb580 - 0x1cb670
void sub_001CB580_0x1cb580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB580_0x1cb580");
#endif

    switch (ctx->pc) {
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb65cu: goto label_1cb65c;
        default: break;
    }

    ctx->pc = 0x1cb580u;

    // 0x1cb580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb584: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cb584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cb588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cb588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cb58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb594: 0xc06bcae  jal         func_1AF2B8
    ctx->pc = 0x1CB594u;
    SET_GPR_U32(ctx, 31, 0x1CB59Cu);
    ctx->pc = 0x1CB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB594u;
    // 0x1cb598: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF2B8u, 0x1CB594u, 0x1CB59Cu)) {
        return;
    }
    ctx->pc = 0x1CB59Cu;
label_1cb59c:
    // 0x1cb59c: 0x8e0402ac  lw          $a0, 0x2AC($s0)
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1cb5a0: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB5A0u;
    {
        const bool branch_taken_0x1cb5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5a0) {
            ctx->pc = 0x1CB5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB5A0u;
            // 0x1cb5a4: 0x8e0402b0  lw          $a0, 0x2B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB5D8u;
            goto label_1cb5d8;
        }
    }
    ctx->pc = 0x1CB5A8u;
    // 0x1cb5a8: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CB5A8u;
    SET_GPR_U32(ctx, 31, 0x1CB5B0u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CB5A8u, 0x1CB5B0u)) {
        return;
    }
    ctx->pc = 0x1CB5B0u;
label_1cb5b0:
    // 0x1cb5b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5b4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5B4u;
    {
        const bool branch_taken_0x1cb5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5B4u;
        // 0x1cb5b8: 0xae0302b8  sw          $v1, 0x2B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5b4) {
            ctx->pc = 0x1CB5D4u;
            goto label_1cb5d4;
        }
    }
    ctx->pc = 0x1CB5BCu;
    // 0x1cb5bc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB5BCu;
    {
        const bool branch_taken_0x1cb5bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5BCu;
        // 0x1cb5c0: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5bc) {
            ctx->pc = 0x1CB5CCu;
            goto label_1cb5cc;
        }
    }
    ctx->pc = 0x1CB5C4u;
    // 0x1cb5c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB5C4u;
    {
        const bool branch_taken_0x1cb5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5C4u;
        // 0x1cb5c8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5c4) {
            ctx->pc = 0x1CB5D0u;
            goto label_1cb5d0;
        }
    }
    ctx->pc = 0x1CB5CCu;
label_1cb5cc:
    // 0x1cb5cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cb5d0:
    // 0x1cb5d0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cb5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cb5d4:
    // 0x1cb5d4: 0x8e0402b0  lw          $a0, 0x2B0($s0)
    ctx->pc = 0x1cb5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1cb5d8:
    // 0x1cb5d8: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CB5D8u;
    {
        const bool branch_taken_0x1cb5d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5d8) {
            ctx->pc = 0x1CB5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB5D8u;
            // 0x1cb5dc: 0x8e0402b4  lw          $a0, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB610u;
            goto label_1cb610;
        }
    }
    ctx->pc = 0x1CB5E0u;
    // 0x1cb5e0: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CB5E0u;
    SET_GPR_U32(ctx, 31, 0x1CB5E8u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CB5E0u, 0x1CB5E8u)) {
        return;
    }
    ctx->pc = 0x1CB5E8u;
label_1cb5e8:
    // 0x1cb5e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb5e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5ECu;
    {
        const bool branch_taken_0x1cb5ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5ECu;
        // 0x1cb5f0: 0xae0302bc  sw          $v1, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5ec) {
            ctx->pc = 0x1CB60Cu;
            goto label_1cb60c;
        }
    }
    ctx->pc = 0x1CB5F4u;
    // 0x1cb5f4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB5F4u;
    {
        const bool branch_taken_0x1cb5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5F4u;
        // 0x1cb5f8: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5f4) {
            ctx->pc = 0x1CB604u;
            goto label_1cb604;
        }
    }
    ctx->pc = 0x1CB5FCu;
    // 0x1cb5fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB5FCu;
    {
        const bool branch_taken_0x1cb5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5FCu;
        // 0x1cb600: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5fc) {
            ctx->pc = 0x1CB608u;
            goto label_1cb608;
        }
    }
    ctx->pc = 0x1CB604u;
label_1cb604:
    // 0x1cb604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cb608:
    // 0x1cb608: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cb608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cb60c:
    // 0x1cb60c: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x1cb60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1cb610:
    // 0x1cb610: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CB610u;
    {
        const bool branch_taken_0x1cb610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb610) {
            ctx->pc = 0x1CB614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB610u;
            // 0x1cb614: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB64Cu;
            goto label_1cb64c;
        }
    }
    ctx->pc = 0x1CB618u;
    // 0x1cb618: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1CB618u;
    SET_GPR_U32(ctx, 31, 0x1CB620u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1CB618u, 0x1CB620u)) {
        return;
    }
    ctx->pc = 0x1CB620u;
label_1cb620:
    // 0x1cb620: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb620u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb624: 0x8e0202b4  lw          $v0, 0x2B4($s0)
    ctx->pc = 0x1cb624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cb628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB628u;
    {
        const bool branch_taken_0x1cb628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB628u;
        // 0x1cb62c: 0xae0302c0  sw          $v1, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb628) {
            ctx->pc = 0x1CB648u;
            goto label_1cb648;
        }
    }
    ctx->pc = 0x1CB630u;
    // 0x1cb630: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB630u;
    {
        const bool branch_taken_0x1cb630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB630u;
        // 0x1cb634: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb630) {
            ctx->pc = 0x1CB640u;
            goto label_1cb640;
        }
    }
    ctx->pc = 0x1CB638u;
    // 0x1cb638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CB638u;
    {
        const bool branch_taken_0x1cb638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB638u;
        // 0x1cb63c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb638) {
            ctx->pc = 0x1CB644u;
            goto label_1cb644;
        }
    }
    ctx->pc = 0x1CB640u;
label_1cb640:
    // 0x1cb640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cb640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cb644:
    // 0x1cb644: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1cb644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1cb648:
    // 0x1cb648: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cb648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1cb64c:
    // 0x1cb64c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB64Cu;
    {
        const bool branch_taken_0x1cb64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB64Cu;
        // 0x1cb650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb64c) {
            ctx->pc = 0x1CB660u;
            goto label_1cb660;
        }
    }
    ctx->pc = 0x1CB654u;
    // 0x1cb654: 0xc06db64  jal         func_1B6D90
    ctx->pc = 0x1CB654u;
    SET_GPR_U32(ctx, 31, 0x1CB65Cu);
    ctx->pc = 0x1CB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB654u;
    // 0x1cb658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D90u, 0x1CB654u, 0x1CB65Cu)) {
        return;
    }
    ctx->pc = 0x1CB65Cu;
label_1cb65c:
    // 0x1cb65c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cb65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cb660:
    // 0x1cb660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cb660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb668: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB668u;
        // 0x1cb66c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB670u;
}
