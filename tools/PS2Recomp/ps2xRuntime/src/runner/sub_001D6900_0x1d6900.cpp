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

// Function: sub_001D6900
// Address: 0x1d6900 - 0x1d6980
void sub_001D6900_0x1d6900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6900_0x1d6900");
#endif

    switch (ctx->pc) {
        case 0x1d6940u: goto label_1d6940;
        case 0x1d6954u: goto label_1d6954;
        case 0x1d6960u: goto label_1d6960;
        case 0x1d696cu: goto label_1d696c;
        default: break;
    }

    ctx->pc = 0x1d6900u;

    // 0x1d6900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6904: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1d6908: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d690c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d690cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d6910: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1d6910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1d6914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d691c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6920: 0x244213c0  addiu       $v0, $v0, 0x13C0
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5056));
    // 0x1d6924: 0x246313e0  addiu       $v1, $v1, 0x13E0
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5088));
    // 0x1d6928: 0x24c61428  addiu       $a2, $a2, 0x1428
    ctx->pc = 0x1d6928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5160));
    // 0x1d692c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d692cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6930: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1d6930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1d6934: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1d6934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1d6938: 0xc06210e  jal         func_188438
    ctx->pc = 0x1D6938u;
    SET_GPR_U32(ctx, 31, 0x1D6940u);
    ctx->pc = 0x1D693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6938u;
    // 0x1d693c: 0xae060030  sw          $a2, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188438u, 0x1D6938u, 0x1D6940u)) {
        return;
    }
    ctx->pc = 0x1D6940u;
label_1d6940:
    // 0x1d6940: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1d6944: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6944u;
    {
        const bool branch_taken_0x1d6944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6944) {
            ctx->pc = 0x1D6948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6944u;
            // 0x1d6948: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6958u;
            goto label_1d6958;
        }
    }
    ctx->pc = 0x1D694Cu;
    // 0x1d694c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1D694Cu;
    SET_GPR_U32(ctx, 31, 0x1D6954u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1D694Cu, 0x1D6954u)) {
        return;
    }
    ctx->pc = 0x1D6954u;
label_1d6954:
    // 0x1d6954: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d6954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1d6958:
    // 0x1d6958: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1D6958u;
    SET_GPR_U32(ctx, 31, 0x1D6960u);
    ctx->pc = 0x1D695Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6958u;
    // 0x1d695c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1D6958u, 0x1D6960u)) {
        return;
    }
    ctx->pc = 0x1D6960u;
label_1d6960:
    // 0x1d6960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6964: 0xc0620d6  jal         func_188358
    ctx->pc = 0x1D6964u;
    SET_GPR_U32(ctx, 31, 0x1D696Cu);
    ctx->pc = 0x1D6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6964u;
    // 0x1d6968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188358u, 0x1D6964u, 0x1D696Cu)) {
        return;
    }
    ctx->pc = 0x1D696Cu;
label_1d696c:
    // 0x1d696c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d696cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6978: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6978u;
        // 0x1d697c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6980u;
}
