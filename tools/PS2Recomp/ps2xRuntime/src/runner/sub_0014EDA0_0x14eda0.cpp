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

// Function: sub_0014EDA0
// Address: 0x14eda0 - 0x14ee08
void sub_0014EDA0_0x14eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EDA0_0x14eda0");
#endif

    switch (ctx->pc) {
        case 0x14edc4u: goto label_14edc4;
        default: break;
    }

    ctx->pc = 0x14eda0u;

    // 0x14eda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14eda4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x14eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x14eda8: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EDA8u;
    {
        const bool branch_taken_0x14eda8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDA8u;
        // 0x14edac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eda8) {
            ctx->pc = 0x14EDCCu;
            goto label_14edcc;
        }
    }
    ctx->pc = 0x14EDB0u;
    // 0x14edb0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EDB0u;
    {
        const bool branch_taken_0x14edb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDB0u;
        // 0x14edb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14edb0) {
            ctx->pc = 0x14EDD0u;
            goto label_14edd0;
        }
    }
    ctx->pc = 0x14EDB8u;
    // 0x14edb8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x14edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x14edbc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x14EDBCu;
    SET_GPR_U32(ctx, 31, 0x14EDC4u);
    ctx->pc = 0x14EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EDBCu;
    // 0x14edc0: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x14EDBCu, 0x14EDC4u)) {
        return;
    }
    ctx->pc = 0x14EDC4u;
label_14edc4:
    // 0x14edc4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14edc8: 0xac62efa0  sw          $v0, -0x1060($v1)
    ctx->pc = 0x14edc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEFA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEFA0u, _value); } while (0);
label_14edcc:
    // 0x14edcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14edd0:
    // 0x14edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EDD0u;
        // 0x14edd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EDD8u;
    // 0x14edd8: 0x0  nop
    ctx->pc = 0x14edd8u;
    // NOP
    // 0x14eddc: 0x0  nop
    ctx->pc = 0x14eddcu;
    // NOP
    // 0x14ede0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x14ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x14ede4: 0x0  nop
    ctx->pc = 0x14ede4u;
    // NOP
    // 0x14ede8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x14ede8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x14edec: 0x0  nop
    ctx->pc = 0x14edecu;
    // NOP
    // 0x14edf0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x14edf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x14edf4: 0x0  nop
    ctx->pc = 0x14edf4u;
    // NOP
    // 0x14edf8: 0xe48c0078  swc1        $f12, 0x78($a0)
    ctx->pc = 0x14edf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x14edfc: 0x0  nop
    ctx->pc = 0x14edfcu;
    // NOP
    // 0x14ee00: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x14ee00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x14ee04: 0x0  nop
    ctx->pc = 0x14ee04u;
    // NOP
    ctx->pc = 0x14ee08u;
}
