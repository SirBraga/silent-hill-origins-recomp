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

// Function: sub_0012BE90
// Address: 0x12be90 - 0x12bf08
void sub_0012BE90_0x12be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BE90_0x12be90");
#endif

    switch (ctx->pc) {
        case 0x12beb8u: goto label_12beb8;
        case 0x12bedcu: goto label_12bedc;
        case 0x12bef4u: goto label_12bef4;
        default: break;
    }

    ctx->pc = 0x12be90u;

    // 0x12be90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12be90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12be94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12be98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12be98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12be9c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12BE9Cu;
    {
        const bool branch_taken_0x12be9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BE9Cu;
        // 0x12bea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be9c) {
            ctx->pc = 0x12BEF4u;
            goto label_12bef4;
        }
    }
    ctx->pc = 0x12BEA4u;
    // 0x12bea4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x12BEA4u;
    {
        const bool branch_taken_0x12bea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEA4u;
        // 0x12bea8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bea4) {
            ctx->pc = 0x12BEE4u;
            goto label_12bee4;
        }
    }
    ctx->pc = 0x12BEACu;
    // 0x12beac: 0x2610d4e0  addiu       $s0, $s0, -0x2B20
    ctx->pc = 0x12beacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956256));
    // 0x12beb0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x12BEB0u;
    SET_GPR_U32(ctx, 31, 0x12BEB8u);
    ctx->pc = 0x12BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEB0u;
    // 0x12beb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x12BEB0u, 0x12BEB8u)) {
        return;
    }
    ctx->pc = 0x12BEB8u;
label_12beb8:
    // 0x12beb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x12beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x12bebc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12bec0: 0x3c060013  lui         $a2, 0x13
    ctx->pc = 0x12bec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19 << 16));
    // 0x12bec4: 0xac624680  sw          $v0, 0x4680($v1)
    ctx->pc = 0x12bec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4680u, _value); } while (0);
    // 0x12bec8: 0x24844688  addiu       $a0, $a0, 0x4688
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18056));
    // 0x12becc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12beccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bed0: 0x24c6bf08  addiu       $a2, $a2, -0x40F8
    ctx->pc = 0x12bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950664));
    // 0x12bed4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x12BED4u;
    SET_GPR_U32(ctx, 31, 0x12BEDCu);
    ctx->pc = 0x12BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BED4u;
    // 0x12bed8: 0x24072d90  addiu       $a3, $zero, 0x2D90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x12BED4u, 0x12BEDCu)) {
        return;
    }
    ctx->pc = 0x12BEDCu;
label_12bedc:
    // 0x12bedc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12BEDCu;
    {
        const bool branch_taken_0x12bedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEDCu;
        // 0x12bee0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bedc) {
            ctx->pc = 0x12BEF8u;
            goto label_12bef8;
        }
    }
    ctx->pc = 0x12BEE4u;
label_12bee4:
    // 0x12bee4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x12bee8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12beec: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x12BEECu;
    SET_GPR_U32(ctx, 31, 0x12BEF4u);
    ctx->pc = 0x12BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BEECu;
    // 0x12bef0: 0x24844688  addiu       $a0, $a0, 0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x12BEECu, 0x12BEF4u)) {
        return;
    }
    ctx->pc = 0x12BEF4u;
label_12bef4:
    // 0x12bef4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12bef8:
    // 0x12bef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12befc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BEFCu;
        // 0x12bf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BF04u;
    // 0x12bf04: 0x0  nop
    ctx->pc = 0x12bf04u;
    // NOP
    ctx->pc = 0x12bf08u;
}
