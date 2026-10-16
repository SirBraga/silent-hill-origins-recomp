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

// Function: sub_0015ED90
// Address: 0x15ed90 - 0x15ee08
void sub_0015ED90_0x15ed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED90_0x15ed90");
#endif

    switch (ctx->pc) {
        case 0x15edb8u: goto label_15edb8;
        case 0x15eddcu: goto label_15eddc;
        case 0x15edf4u: goto label_15edf4;
        default: break;
    }

    ctx->pc = 0x15ed90u;

    // 0x15ed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ed94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15ed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15ed98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15ed98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15ed9c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15ED9Cu;
    {
        const bool branch_taken_0x15ed9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ED9Cu;
        // 0x15eda0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ed9c) {
            ctx->pc = 0x15EDF4u;
            goto label_15edf4;
        }
    }
    ctx->pc = 0x15EDA4u;
    // 0x15eda4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x15EDA4u;
    {
        const bool branch_taken_0x15eda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA4u;
        // 0x15eda8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eda4) {
            ctx->pc = 0x15EDE4u;
            goto label_15ede4;
        }
    }
    ctx->pc = 0x15EDACu;
    // 0x15edac: 0x26103468  addiu       $s0, $s0, 0x3468
    ctx->pc = 0x15edacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13416));
    // 0x15edb0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x15EDB0u;
    SET_GPR_U32(ctx, 31, 0x15EDB8u);
    ctx->pc = 0x15EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDB0u;
    // 0x15edb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x15EDB0u, 0x15EDB8u)) {
        return;
    }
    ctx->pc = 0x15EDB8u;
label_15edb8:
    // 0x15edb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15edbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15edbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15edc0: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15edc4: 0xac62f100  sw          $v0, -0xF00($v1)
    ctx->pc = 0x15edc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF100u, _value); } while (0);
    // 0x15edc8: 0x2484f108  addiu       $a0, $a0, -0xEF8
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963464));
    // 0x15edcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edd0: 0x24c6ee08  addiu       $a2, $a2, -0x11F8
    ctx->pc = 0x15edd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962696));
    // 0x15edd4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15EDD4u;
    SET_GPR_U32(ctx, 31, 0x15EDDCu);
    ctx->pc = 0x15EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDD4u;
    // 0x15edd8: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15EDD4u, 0x15EDDCu)) {
        return;
    }
    ctx->pc = 0x15EDDCu;
label_15eddc:
    // 0x15eddc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15EDDCu;
    {
        const bool branch_taken_0x15eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDDCu;
        // 0x15ede0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eddc) {
            ctx->pc = 0x15EDF8u;
            goto label_15edf8;
        }
    }
    ctx->pc = 0x15EDE4u;
label_15ede4:
    // 0x15ede4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15ede8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15edec: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x15EDECu;
    SET_GPR_U32(ctx, 31, 0x15EDF4u);
    ctx->pc = 0x15EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDECu;
    // 0x15edf0: 0x2484f108  addiu       $a0, $a0, -0xEF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x15EDECu, 0x15EDF4u)) {
        return;
    }
    ctx->pc = 0x15EDF4u;
label_15edf4:
    // 0x15edf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15edf8:
    // 0x15edf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x15EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDFCu;
        // 0x15ee00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EE04u;
    // 0x15ee04: 0x0  nop
    ctx->pc = 0x15ee04u;
    // NOP
    ctx->pc = 0x15ee08u;
}
