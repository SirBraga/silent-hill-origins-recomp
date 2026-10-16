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

// Function: sub_00201658
// Address: 0x201658 - 0x2016f0
void sub_00201658_0x201658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201658_0x201658");
#endif

    switch (ctx->pc) {
        case 0x201688u: goto label_201688;
        case 0x201690u: goto label_201690;
        case 0x2016c4u: goto label_2016c4;
        case 0x2016d8u: goto label_2016d8;
        default: break;
    }

    ctx->pc = 0x201658u;

    // 0x201658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20165c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201660: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201664: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x201664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x201668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20166c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20166cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x201674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201678: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x201678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20167c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x20167cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x201680: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x201680u;
    SET_GPR_U32(ctx, 31, 0x201688u);
    ctx->pc = 0x201684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201680u;
    // 0x201684: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201680u, 0x201688u)) {
        return;
    }
    ctx->pc = 0x201688u;
label_201688:
    // 0x201688: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x201688u;
    SET_GPR_U32(ctx, 31, 0x201690u);
    ctx->pc = 0x20168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201688u;
    // 0x20168c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x201688u, 0x201690u)) {
        return;
    }
    ctx->pc = 0x201690u;
label_201690:
    // 0x201690: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x201690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201694: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201694u;
    {
        const bool branch_taken_0x201694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201694u;
        // 0x201698: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201694) {
            ctx->pc = 0x2016A8u;
            goto label_2016a8;
        }
    }
    ctx->pc = 0x20169Cu;
    // 0x20169c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x20169cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2016a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2016A0u;
    {
        const bool branch_taken_0x2016a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2016A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016A0u;
        // 0x2016a4: 0xac430168  sw          $v1, 0x168($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2016a0) {
            ctx->pc = 0x2016ACu;
            goto label_2016ac;
        }
    }
    ctx->pc = 0x2016A8u;
label_2016a8:
    // 0x2016a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2016a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2016ac:
    // 0x2016ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2016ACu;
    {
        const bool branch_taken_0x2016ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016ac) {
            ctx->pc = 0x2016BCu;
            goto label_2016bc;
        }
    }
    ctx->pc = 0x2016B4u;
    // 0x2016b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2016b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2016b8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2016b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2016bc:
    // 0x2016bc: 0xc0805e6  jal         func_201798
    ctx->pc = 0x2016BCu;
    SET_GPR_U32(ctx, 31, 0x2016C4u);
    ctx->pc = 0x2016C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2016BCu;
    // 0x2016c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201798u, 0x2016BCu, 0x2016C4u)) {
        return;
    }
    ctx->pc = 0x2016C4u;
label_2016c4:
    // 0x2016c4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2016c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2016c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2016C8u;
    {
        const bool branch_taken_0x2016c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2016c8) {
            ctx->pc = 0x2016CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2016C8u;
            // 0x2016cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2016DCu;
            goto label_2016dc;
        }
    }
    ctx->pc = 0x2016D0u;
    // 0x2016d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2016D0u;
    SET_GPR_U32(ctx, 31, 0x2016D8u);
    ctx->pc = 0x2016D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2016D0u;
    // 0x2016d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2016D0u, 0x2016D8u)) {
        return;
    }
    ctx->pc = 0x2016D8u;
label_2016d8:
    // 0x2016d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2016d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2016dc:
    // 0x2016dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2016dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2016e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2016e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2016e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2016E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2016E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2016E4u;
        // 0x2016e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2016E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2016ECu;
    // 0x2016ec: 0x0  nop
    ctx->pc = 0x2016ecu;
    // NOP
    ctx->pc = 0x2016f0u;
}
