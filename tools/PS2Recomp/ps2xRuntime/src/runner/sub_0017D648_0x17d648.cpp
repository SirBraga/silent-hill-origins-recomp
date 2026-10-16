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

// Function: sub_0017D648
// Address: 0x17d648 - 0x17d6b8
void sub_0017D648_0x17d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D648_0x17d648");
#endif

    switch (ctx->pc) {
        case 0x17d664u: goto label_17d664;
        case 0x17d6a4u: goto label_17d6a4;
        default: break;
    }

    ctx->pc = 0x17d648u;

    // 0x17d648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d64c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17d64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17d650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17d654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d65c: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x17D65Cu;
    SET_GPR_U32(ctx, 31, 0x17D664u);
    ctx->pc = 0x17D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D65Cu;
    // 0x17d660: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x17D65Cu, 0x17D664u)) {
        return;
    }
    ctx->pc = 0x17D664u;
label_17d664:
    // 0x17d664: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x17d664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d668: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x17d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x17d66c: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17D66Cu;
    {
        const bool branch_taken_0x17d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17d66c) {
            ctx->pc = 0x17D670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D66Cu;
            // 0x17d670: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D6A8u;
            goto label_17d6a8;
        }
    }
    ctx->pc = 0x17D674u;
    // 0x17d674: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17d674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x17d678: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x17d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x17d67c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x17d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x17d680: 0x8c45f948  lw          $a1, -0x6B8($v0)
    ctx->pc = 0x17d680u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6BF948u));
    // 0x17d684: 0x10a40007  beq         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17D684u;
    {
        const bool branch_taken_0x17d684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x17D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D684u;
        // 0x17d688: 0x8e230044  lw          $v1, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d684) {
            ctx->pc = 0x17D6A4u;
            goto label_17d6a4;
        }
    }
    ctx->pc = 0x17D68Cu;
    // 0x17d68c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D690u;
    {
        const bool branch_taken_0x17d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D690u;
        // 0x17d694: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d690) {
            ctx->pc = 0x17D6A4u;
            goto label_17d6a4;
        }
    }
    ctx->pc = 0x17D698u;
    // 0x17d698: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x17d698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x17d69c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17D69Cu;
    SET_GPR_U32(ctx, 31, 0x17D6A4u);
    ctx->pc = 0x17D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D69Cu;
    // 0x17d6a0: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17D69Cu, 0x17D6A4u)) {
        return;
    }
    ctx->pc = 0x17D6A4u;
label_17d6a4:
    // 0x17d6a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17d6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17d6a8:
    // 0x17d6a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17d6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d6ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17D6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D6B0u;
        // 0x17d6b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D6B8u;
}
