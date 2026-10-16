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

// Function: sub_00188358
// Address: 0x188358 - 0x1883b8
void sub_00188358_0x188358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188358_0x188358");
#endif

    switch (ctx->pc) {
        case 0x18838cu: goto label_18838c;
        case 0x1883a0u: goto label_1883a0;
        default: break;
    }

    ctx->pc = 0x188358u;

    // 0x188358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18835c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x188360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188364: 0x24428a30  addiu       $v0, $v0, -0x75D0
    ctx->pc = 0x188364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937136));
    // 0x188368: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18836c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18836cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188374: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x188378: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x188378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x18837c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18837cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188380: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188384: 0xc0622da  jal         func_188B68
    ctx->pc = 0x188384u;
    SET_GPR_U32(ctx, 31, 0x18838Cu);
    ctx->pc = 0x188388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188384u;
    // 0x188388: 0x8c648ac0  lw          $a0, -0x7540($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188B68u, 0x188384u, 0x18838Cu)) {
        return;
    }
    ctx->pc = 0x18838Cu;
label_18838c:
    // 0x18838c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x18838cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x188390: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188390u;
    {
        const bool branch_taken_0x188390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x188394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188390u;
        // 0x188394: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188390) {
            ctx->pc = 0x1883A4u;
            goto label_1883a4;
        }
    }
    ctx->pc = 0x188398u;
    // 0x188398: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x188398u;
    SET_GPR_U32(ctx, 31, 0x1883A0u);
    ctx->pc = 0x18839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188398u;
    // 0x18839c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x188398u, 0x1883A0u)) {
        return;
    }
    ctx->pc = 0x1883A0u;
label_1883a0:
    // 0x1883a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1883a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1883a4:
    // 0x1883a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1883a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1883a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1883a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1883ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883ACu;
        // 0x1883b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1883ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1883B4u;
    // 0x1883b4: 0x0  nop
    ctx->pc = 0x1883b4u;
    // NOP
    ctx->pc = 0x1883b8u;
}
