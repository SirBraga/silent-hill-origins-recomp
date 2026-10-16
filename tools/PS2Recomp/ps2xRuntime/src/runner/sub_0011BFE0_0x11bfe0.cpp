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

// Function: sub_0011BFE0
// Address: 0x11bfe0 - 0x11c058
void sub_0011BFE0_0x11bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BFE0_0x11bfe0");
#endif

    switch (ctx->pc) {
        case 0x11c008u: goto label_11c008;
        case 0x11c02cu: goto label_11c02c;
        case 0x11c044u: goto label_11c044;
        default: break;
    }

    ctx->pc = 0x11bfe0u;

    // 0x11bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11bfe4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11bfe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11bfec: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11BFECu;
    {
        const bool branch_taken_0x11bfec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFECu;
        // 0x11bff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfec) {
            ctx->pc = 0x11C044u;
            goto label_11c044;
        }
    }
    ctx->pc = 0x11BFF4u;
    // 0x11bff4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11BFF4u;
    {
        const bool branch_taken_0x11bff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF4u;
        // 0x11bff8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff4) {
            ctx->pc = 0x11C034u;
            goto label_11c034;
        }
    }
    ctx->pc = 0x11BFFCu;
    // 0x11bffc: 0x2610b228  addiu       $s0, $s0, -0x4DD8
    ctx->pc = 0x11bffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947368));
    // 0x11c000: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11C000u;
    SET_GPR_U32(ctx, 31, 0x11C008u);
    ctx->pc = 0x11C004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C000u;
    // 0x11c004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11C000u, 0x11C008u)) {
        return;
    }
    ctx->pc = 0x11C008u;
label_11c008:
    // 0x11c008: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x11c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x11c00c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11c010: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x11c010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11c014: 0xac624568  sw          $v0, 0x4568($v1)
    ctx->pc = 0x11c014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4568u, _value); } while (0);
    // 0x11c018: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x11c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x11c01c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c020: 0x24c6c058  addiu       $a2, $a2, -0x3FA8
    ctx->pc = 0x11c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951000));
    // 0x11c024: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11C024u;
    SET_GPR_U32(ctx, 31, 0x11C02Cu);
    ctx->pc = 0x11C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C024u;
    // 0x11c028: 0x2407009c  addiu       $a3, $zero, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11C024u, 0x11C02Cu)) {
        return;
    }
    ctx->pc = 0x11C02Cu;
label_11c02c:
    // 0x11c02c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11C02Cu;
    {
        const bool branch_taken_0x11c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C02Cu;
        // 0x11c030: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c02c) {
            ctx->pc = 0x11C048u;
            goto label_11c048;
        }
    }
    ctx->pc = 0x11C034u;
label_11c034:
    // 0x11c034: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11c034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11c038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11c038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c03c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x11C03Cu;
    SET_GPR_U32(ctx, 31, 0x11C044u);
    ctx->pc = 0x11C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C03Cu;
    // 0x11c040: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x11C03Cu, 0x11C044u)) {
        return;
    }
    ctx->pc = 0x11C044u;
label_11c044:
    // 0x11c044: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11c044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11c048:
    // 0x11c048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c04c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C04Cu;
        // 0x11c050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C054u;
    // 0x11c054: 0x0  nop
    ctx->pc = 0x11c054u;
    // NOP
    ctx->pc = 0x11c058u;
}
