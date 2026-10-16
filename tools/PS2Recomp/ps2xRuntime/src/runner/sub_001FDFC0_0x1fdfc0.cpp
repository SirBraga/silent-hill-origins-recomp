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

// Function: sub_001FDFC0
// Address: 0x1fdfc0 - 0x1fe088
void sub_001FDFC0_0x1fdfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFC0_0x1fdfc0");
#endif

    switch (ctx->pc) {
        case 0x1fe004u: goto label_1fe004;
        case 0x1fe028u: goto label_1fe028;
        case 0x1fe03cu: goto label_1fe03c;
        case 0x1fe05cu: goto label_1fe05c;
        default: break;
    }

    ctx->pc = 0x1fdfc0u;

    // 0x1fdfc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fdfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fdfc4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1fdfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1fdfc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fdfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1fdfcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fdfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fdfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fdfd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fdfd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfd8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1fdfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1fdfdc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fdfdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfe0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1fdfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1fdfe4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fdfe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdfe8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1fdfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1fdfec: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1fdfecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdff0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1fdff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1fdff4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1fdff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1fdff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdffc: 0xc07f410  jal         func_1FD040
    ctx->pc = 0x1FDFFCu;
    SET_GPR_U32(ctx, 31, 0x1FE004u);
    ctx->pc = 0x1FE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFFCu;
    // 0x1fe000: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD040u, 0x1FDFFCu, 0x1FE004u)) {
        return;
    }
    ctx->pc = 0x1FE004u;
label_1fe004:
    // 0x1fe004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe008: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fe008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe00c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE00Cu;
    {
        const bool branch_taken_0x1fe00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe00c) {
            ctx->pc = 0x1FE010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE00Cu;
            // 0x1fe010: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE044u;
            goto label_1fe044;
        }
    }
    ctx->pc = 0x1FE014u;
    // 0x1fe014: 0x3c12005c  lui         $s2, 0x5C
    ctx->pc = 0x1fe014u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    // 0x1fe018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe020: 0xc08180c  jal         func_206030
    ctx->pc = 0x1FE020u;
    SET_GPR_U32(ctx, 31, 0x1FE028u);
    ctx->pc = 0x1FE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE020u;
    // 0x1fe024: 0xae500110  sw          $s0, 0x110($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206030u, 0x1FE020u, 0x1FE028u)) {
        return;
    }
    ctx->pc = 0x1FE028u;
label_1fe028:
    // 0x1fe028: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1fe028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fe02c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE02Cu;
    {
        const bool branch_taken_0x1fe02c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE02Cu;
        // 0x1fe030: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe02c) {
            ctx->pc = 0x1FE03Cu;
            goto label_1fe03c;
        }
    }
    ctx->pc = 0x1FE034u;
    // 0x1fe034: 0xc08121a  jal         func_204868
    ctx->pc = 0x1FE034u;
    SET_GPR_U32(ctx, 31, 0x1FE03Cu);
    ctx->pc = 0x1FE038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE034u;
    // 0x1fe038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204868u, 0x1FE034u, 0x1FE03Cu)) {
        return;
    }
    ctx->pc = 0x1FE03Cu;
label_1fe03c:
    // 0x1fe03c: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x1fe03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x1fe040: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1fe040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fe044:
    // 0x1fe044: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fe044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe048: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1fe048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe04c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fe04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe050: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fe050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe054: 0xc080e90  jal         func_203A40
    ctx->pc = 0x1FE054u;
    SET_GPR_U32(ctx, 31, 0x1FE05Cu);
    ctx->pc = 0x1FE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE054u;
    // 0x1fe058: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203A40u, 0x1FE054u, 0x1FE05Cu)) {
        return;
    }
    ctx->pc = 0x1FE05Cu;
label_1fe05c:
    // 0x1fe05c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1fe05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fe060: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1fe060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe064: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1fe064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe068: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fe068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe06c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe070: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1fe070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe074: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1fe074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe078: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1fe078u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe080: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE080u;
        // 0x1fe084: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE088u;
}
