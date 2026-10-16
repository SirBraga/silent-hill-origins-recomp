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

// Function: sub_002F0158
// Address: 0x2f0158 - 0x2f01f8
void sub_002F0158_0x2f0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0158_0x2f0158");
#endif

    switch (ctx->pc) {
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01ccu: goto label_2f01cc;
        default: break;
    }

    ctx->pc = 0x2f0158u;

    // 0x2f0158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f015c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f015cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f0160: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f0160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f0164: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f0168: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f0168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f016c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f0170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0178: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f0178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f017c: 0x8c4462c8  lw          $a0, 0x62C8($v0)
    ctx->pc = 0x2f017cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6862C8u));
    // 0x2f0180: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f0180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0184: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2f0184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2f0188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f018c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F018Cu;
    {
        const bool branch_taken_0x2f018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F018Cu;
        // 0x2f0190: 0xe60c0004  swc1        $f12, 0x4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f018c) {
            ctx->pc = 0x2F01A8u;
            goto label_2f01a8;
        }
    }
    ctx->pc = 0x2F0194u;
    // 0x2f0194: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f0194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f0198: 0xc0bc158  jal         func_2F0560
    ctx->pc = 0x2F0198u;
    SET_GPR_U32(ctx, 31, 0x2F01A0u);
    ctx->pc = 0x2F019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0198u;
    // 0x2f019c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0560u, 0x2F0198u, 0x2F01A0u)) {
        return;
    }
    ctx->pc = 0x2F01A0u;
label_2f01a0:
    // 0x2f01a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F01A0u;
    {
        const bool branch_taken_0x2f01a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01A0u;
        // 0x2f01a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01a0) {
            ctx->pc = 0x2F01DCu;
            goto label_2f01dc;
        }
    }
    ctx->pc = 0x2F01A8u;
label_2f01a8:
    // 0x2f01a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2f01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f01ac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f01b0: 0x8c4462f8  lw          $a0, 0x62F8($v0)
    ctx->pc = 0x2f01b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6862F8u));
    // 0x2f01b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f01b8: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F01B8u;
    {
        const bool branch_taken_0x2f01b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f01b8) {
            ctx->pc = 0x2F01BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F01B8u;
            // 0x2f01bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F01DCu;
            goto label_2f01dc;
        }
    }
    ctx->pc = 0x2F01C0u;
    // 0x2f01c0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f01c4: 0xc0bc216  jal         func_2F0858
    ctx->pc = 0x2F01C4u;
    SET_GPR_U32(ctx, 31, 0x2F01CCu);
    ctx->pc = 0x2F01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01C4u;
    // 0x2f01c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0858u, 0x2F01C4u, 0x2F01CCu)) {
        return;
    }
    ctx->pc = 0x2F01CCu;
label_2f01cc:
    // 0x2f01cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f01ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01d0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F01D0u;
    {
        const bool branch_taken_0x2f01d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01D0u;
        // 0x2f01d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01d0) {
            ctx->pc = 0x2F01DCu;
            goto label_2f01dc;
        }
    }
    ctx->pc = 0x2F01D8u;
    // 0x2f01d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f01d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f01dc:
    // 0x2f01dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f01dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f01e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f01e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f01e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f01e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f01e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f01e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f01ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F01ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01ECu;
        // 0x2f01f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F01ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F01F4u;
    // 0x2f01f4: 0x0  nop
    ctx->pc = 0x2f01f4u;
    // NOP
    ctx->pc = 0x2f01f8u;
}
