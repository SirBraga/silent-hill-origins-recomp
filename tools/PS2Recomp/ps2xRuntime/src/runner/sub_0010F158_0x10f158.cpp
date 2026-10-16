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

// Function: sub_0010F158
// Address: 0x10f158 - 0x10f1c8
void sub_0010F158_0x10f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F158_0x10f158");
#endif

    switch (ctx->pc) {
        case 0x10f190u: goto label_10f190;
        case 0x10f19cu: goto label_10f19c;
        case 0x10f1b0u: goto label_10f1b0;
        default: break;
    }

    ctx->pc = 0x10f158u;

    // 0x10f158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f15c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10f160: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10f164: 0x2442a2d0  addiu       $v0, $v0, -0x5D30
    ctx->pc = 0x10f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943440));
    // 0x10f168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f16c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10f170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10f174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10f174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f17c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x10f17cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x10f180: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x10f180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x10f184: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10f184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f188: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10F188u;
    SET_GPR_U32(ctx, 31, 0x10F190u);
    ctx->pc = 0x10F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F188u;
    // 0x10f18c: 0x8e2482f0  lw          $a0, -0x7D10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E528u, 0x10F188u, 0x10F190u)) {
        return;
    }
    ctx->pc = 0x10F190u;
label_10f190:
    // 0x10f190: 0x8e2482f0  lw          $a0, -0x7D10($s1)
    ctx->pc = 0x10f190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935280)));
    // 0x10f194: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x10F194u;
    SET_GPR_U32(ctx, 31, 0x10F19Cu);
    ctx->pc = 0x10F198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F194u;
    // 0x10f198: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C3A0u, 0x10F194u, 0x10F19Cu)) {
        return;
    }
    ctx->pc = 0x10F19Cu;
label_10f19c:
    // 0x10f19c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10f19cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10f1a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F1A0u;
    {
        const bool branch_taken_0x10f1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1A0u;
        // 0x10f1a4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1a0) {
            ctx->pc = 0x10F1B0u;
            goto label_10f1b0;
        }
    }
    ctx->pc = 0x10F1A8u;
    // 0x10f1a8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x10F1A8u;
    SET_GPR_U32(ctx, 31, 0x10F1B0u);
    ctx->pc = 0x10F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F1A8u;
    // 0x10f1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x10F1A8u, 0x10F1B0u)) {
        return;
    }
    ctx->pc = 0x10F1B0u;
label_10f1b0:
    // 0x10f1b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10f1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f1b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10f1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f1b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10f1b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f1bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1C0u;
        // 0x10f1c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1C8u;
}
