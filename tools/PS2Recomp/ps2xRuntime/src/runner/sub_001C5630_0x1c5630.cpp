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

// Function: sub_001C5630
// Address: 0x1c5630 - 0x1c5728
void sub_001C5630_0x1c5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5630_0x1c5630");
#endif

    switch (ctx->pc) {
        case 0x1c5680u: goto label_1c5680;
        case 0x1c5698u: goto label_1c5698;
        case 0x1c56b8u: goto label_1c56b8;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56e0u: goto label_1c56e0;
        default: break;
    }

    ctx->pc = 0x1c5630u;

    // 0x1c5630: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c5634: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c5638: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1c5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1c563c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1c563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1c5640: 0x2490028c  addiu       $s0, $a0, 0x28C
    ctx->pc = 0x1c5640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 652));
    // 0x1c5644: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c5644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c5648: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1c5648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c564c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1c564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1c5650: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5654: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1c5654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1c5658: 0x245598a0  addiu       $s5, $v0, -0x6760
    ctx->pc = 0x1c5658u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940832));
    // 0x1c565c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1c565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1c5660: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c5660u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5664: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1c5664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1c5668: 0x3c170034  lui         $s7, 0x34
    ctx->pc = 0x1c5668u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    // 0x1c566c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1c566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1c5670: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x1c5670u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x1c5674: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c5674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1c5678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c567c: 0x0  nop
    ctx->pc = 0x1c567cu;
    // NOP
label_1c5680:
    // 0x1c5680: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c5680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c5684: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c5684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c5688: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c5688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c568c: 0x8fc48b2c  lw          $a0, -0x74D4($fp)
    ctx->pc = 0x1c568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294937388)));
    // 0x1c5690: 0xc0643a6  jal         func_190E98
    ctx->pc = 0x1C5690u;
    SET_GPR_U32(ctx, 31, 0x1C5698u);
    ctx->pc = 0x1C5694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5690u;
    // 0x1c5694: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190E98u, 0x1C5690u, 0x1C5698u)) {
        return;
    }
    ctx->pc = 0x1C5698u;
label_1c5698:
    // 0x1c5698: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5698u;
    {
        const bool branch_taken_0x1c5698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5698) {
            ctx->pc = 0x1C569Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5698u;
            // 0x1c569c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C56ACu;
            goto label_1c56ac;
        }
    }
    ctx->pc = 0x1C56A0u;
    // 0x1c56a0: 0xae160008  sw          $s6, 0x8($s0)
    ctx->pc = 0x1c56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 22));
    // 0x1c56a4: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x1c56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x1c56a8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c56ac:
    // 0x1c56ac: 0x8ef19898  lw          $s1, -0x6768($s7)
    ctx->pc = 0x1c56acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294940824)));
    // 0x1c56b0: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1C56B0u;
    SET_GPR_U32(ctx, 31, 0x1C56B8u);
    ctx->pc = 0x1C56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56B0u;
    // 0x1c56b4: 0x8eb30000  lw          $s3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1C56B0u, 0x1C56B8u)) {
        return;
    }
    ctx->pc = 0x1C56B8u;
label_1c56b8:
    // 0x1c56b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C56B8u;
    {
        const bool branch_taken_0x1c56b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56B8u;
        // 0x1c56bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56b8) {
            ctx->pc = 0x1C56E0u;
            goto label_1c56e0;
        }
    }
    ctx->pc = 0x1C56C0u;
    // 0x1c56c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c56c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56c4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1C56C4u;
    SET_GPR_U32(ctx, 31, 0x1C56CCu);
    ctx->pc = 0x1C56C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56C4u;
    // 0x1c56c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1C56C4u, 0x1C56CCu)) {
        return;
    }
    ctx->pc = 0x1C56CCu;
label_1c56cc:
    // 0x1c56cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C56CCu;
    {
        const bool branch_taken_0x1c56cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56CCu;
        // 0x1c56d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56cc) {
            ctx->pc = 0x1C56E0u;
            goto label_1c56e0;
        }
    }
    ctx->pc = 0x1C56D4u;
    // 0x1c56d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c56d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56d8: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1C56D8u;
    SET_GPR_U32(ctx, 31, 0x1C56E0u);
    ctx->pc = 0x1C56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C56D8u;
    // 0x1c56dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1C56D8u, 0x1C56E0u)) {
        return;
    }
    ctx->pc = 0x1C56E0u;
label_1c56e0:
    // 0x1c56e0: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1c56e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1c56e4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1c56e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1c56e8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1c56e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1c56ec: 0x681ffe4  bgez        $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C56ECu;
    {
        const bool branch_taken_0x1c56ec = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x1C56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C56ECu;
        // 0x1c56f0: 0x26520044  addiu       $s2, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56ec) {
            ctx->pc = 0x1C5680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5680;
        }
    }
    ctx->pc = 0x1C56F4u;
    // 0x1c56f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1c56f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c56f8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1c56f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c56fc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1c56fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c5700: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c5700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5704: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c5704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5708: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1c5708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c570c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1c570cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5710: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1c5710u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5714: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1c5714u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c571c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C571Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C571Cu;
        // 0x1c5720: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C571Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5724u;
    // 0x1c5724: 0x0  nop
    ctx->pc = 0x1c5724u;
    // NOP
    ctx->pc = 0x1c5728u;
}
