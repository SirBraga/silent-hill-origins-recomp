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

// Function: sub_00190648
// Address: 0x190648 - 0x1906e0
void sub_00190648_0x190648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190648_0x190648");
#endif

    switch (ctx->pc) {
        case 0x190680u: goto label_190680;
        case 0x1906c0u: goto label_1906c0;
        default: break;
    }

    ctx->pc = 0x190648u;

    // 0x190648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19064c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190650: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190654: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x190654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190658: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19065c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x19065cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190660: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x190660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190664: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x190664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190668: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19066c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x19066cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190674: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x190678: 0xc063616  jal         func_18D858
    ctx->pc = 0x190678u;
    SET_GPR_U32(ctx, 31, 0x190680u);
    ctx->pc = 0x19067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190678u;
    // 0x19067c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D858u, 0x190678u, 0x190680u)) {
        return;
    }
    ctx->pc = 0x190680u;
label_190680:
    // 0x190680: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x190680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190684: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x190684u;
    {
        const bool branch_taken_0x190684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190684u;
        // 0x190688: 0x3c03000f  lui         $v1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190684) {
            ctx->pc = 0x1906B8u;
            goto label_1906b8;
        }
    }
    ctx->pc = 0x19068Cu;
    // 0x19068c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x19068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x190690: 0x3463423f  ori         $v1, $v1, 0x423F
    ctx->pc = 0x190690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16959);
    // 0x190694: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x190694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x190698: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x190698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x19069c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x19069cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1906a0: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x1906a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906a4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1906a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1906a8: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1906ac: 0x14e30002  bne         $a3, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1906ACu;
    {
        const bool branch_taken_0x1906ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906ACu;
        // 0x1906b0: 0xae070060  sw          $a3, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1906ac) {
            ctx->pc = 0x1906B8u;
            goto label_1906b8;
        }
    }
    ctx->pc = 0x1906B4u;
    // 0x1906b4: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x1906b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_1906b8:
    // 0x1906b8: 0xc0644f4  jal         func_1913D0
    ctx->pc = 0x1906B8u;
    SET_GPR_U32(ctx, 31, 0x1906C0u);
    ctx->pc = 0x1906BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1906B8u;
    // 0x1906bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1913D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1913D0u, 0x1906B8u, 0x1906C0u)) {
        return;
    }
    ctx->pc = 0x1906C0u;
label_1906c0:
    // 0x1906c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1906c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1906c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1906c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1906c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1906c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1906cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1906ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1906d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1906d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1906d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1906D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1906D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1906D4u;
        // 0x1906d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1906D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1906DCu;
    // 0x1906dc: 0x0  nop
    ctx->pc = 0x1906dcu;
    // NOP
    ctx->pc = 0x1906e0u;
}
