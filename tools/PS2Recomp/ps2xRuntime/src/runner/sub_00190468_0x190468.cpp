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

// Function: sub_00190468
// Address: 0x190468 - 0x1904e8
void sub_00190468_0x190468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190468_0x190468");
#endif

    switch (ctx->pc) {
        case 0x1904a0u: goto label_1904a0;
        case 0x1904ccu: goto label_1904cc;
        default: break;
    }

    ctx->pc = 0x190468u;

    // 0x190468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19046c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19046cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190474: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190478: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19047c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x19047cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190484: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x190484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19048c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190494: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x190494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x190498: 0xc063616  jal         func_18D858
    ctx->pc = 0x190498u;
    SET_GPR_U32(ctx, 31, 0x1904A0u);
    ctx->pc = 0x19049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190498u;
    // 0x19049c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x190498u, 0x1904A0u)) {
        return;
    }
    ctx->pc = 0x1904A0u;
label_1904a0:
    // 0x1904a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1904a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904a4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1904A4u;
    {
        const bool branch_taken_0x1904a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904a4) {
            ctx->pc = 0x1904C4u;
            goto label_1904c4;
        }
    }
    ctx->pc = 0x1904ACu;
    // 0x1904ac: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1904acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1904b0: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1904b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1904b4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1904b8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1904b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1904bc: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1904c0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x1904c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_1904c4:
    // 0x1904c4: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x1904C4u;
    SET_GPR_U32(ctx, 31, 0x1904CCu);
    ctx->pc = 0x1904C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904C4u;
    // 0x1904c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x1904C4u, 0x1904CCu)) {
        return;
    }
    ctx->pc = 0x1904CCu;
label_1904cc:
    // 0x1904cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1904ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1904d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1904d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1904d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1904d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1904d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1904d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1904dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1904dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1904e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1904E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1904E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1904E0u;
        // 0x1904e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1904E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1904E8u;
}
