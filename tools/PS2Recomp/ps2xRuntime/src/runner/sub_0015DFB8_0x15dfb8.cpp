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

// Function: sub_0015DFB8
// Address: 0x15dfb8 - 0x15e068
void sub_0015DFB8_0x15dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DFB8_0x15dfb8");
#endif

    switch (ctx->pc) {
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dffcu: goto label_15dffc;
        case 0x15e020u: goto label_15e020;
        case 0x15e034u: goto label_15e034;
        case 0x15e044u: goto label_15e044;
        case 0x15e054u: goto label_15e054;
        default: break;
    }

    ctx->pc = 0x15dfb8u;

    // 0x15dfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dfbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15dfc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15dfc4: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x15DFC4u;
    {
        const bool branch_taken_0x15dfc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DFC4u;
        // 0x15dfc8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dfc4) {
            ctx->pc = 0x15E054u;
            goto label_15e054;
        }
    }
    ctx->pc = 0x15DFCCu;
    // 0x15dfcc: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x15DFCCu;
    {
        const bool branch_taken_0x15dfcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dfcc) {
            ctx->pc = 0x15DFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15DFCCu;
            // 0x15dfd0: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E028u;
            goto label_15e028;
        }
    }
    ctx->pc = 0x15DFD4u;
    // 0x15dfd4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15dfd8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15DFD8u;
    SET_GPR_U32(ctx, 31, 0x15DFE0u);
    ctx->pc = 0x15DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFD8u;
    // 0x15dfdc: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15DFD8u, 0x15DFE0u)) {
        return;
    }
    ctx->pc = 0x15DFE0u;
label_15dfe0:
    // 0x15dfe0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15dfe4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x15DFE4u;
    SET_GPR_U32(ctx, 31, 0x15DFECu);
    ctx->pc = 0x15DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFE4u;
    // 0x15dfe8: 0x2484f0c8  addiu       $a0, $a0, -0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x15DFE4u, 0x15DFECu)) {
        return;
    }
    ctx->pc = 0x15DFECu;
label_15dfec:
    // 0x15dfec: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x15dff0: 0x26103328  addiu       $s0, $s0, 0x3328
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13096));
    // 0x15dff4: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x15DFF4u;
    SET_GPR_U32(ctx, 31, 0x15DFFCu);
    ctx->pc = 0x15DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DFF4u;
    // 0x15dff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x15DFF4u, 0x15DFFCu)) {
        return;
    }
    ctx->pc = 0x15DFFCu;
label_15dffc:
    // 0x15dffc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x15e000: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15e000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15e004: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x15e004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x15e008: 0xac62f0d0  sw          $v0, -0xF30($v1)
    ctx->pc = 0x15e008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF0D0u, _value); } while (0);
    // 0x15e00c: 0x2484f0d8  addiu       $a0, $a0, -0xF28
    ctx->pc = 0x15e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963416));
    // 0x15e010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e014: 0x24c6e068  addiu       $a2, $a2, -0x1F98
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959208));
    // 0x15e018: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x15E018u;
    SET_GPR_U32(ctx, 31, 0x15E020u);
    ctx->pc = 0x15E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E018u;
    // 0x15e01c: 0x24070800  addiu       $a3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x15E018u, 0x15E020u)) {
        return;
    }
    ctx->pc = 0x15E020u;
label_15e020:
    // 0x15e020: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15E020u;
    {
        const bool branch_taken_0x15e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E020u;
        // 0x15e024: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e020) {
            ctx->pc = 0x15E058u;
            goto label_15e058;
        }
    }
    ctx->pc = 0x15E028u;
label_15e028:
    // 0x15e028: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e02c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x15E02Cu;
    SET_GPR_U32(ctx, 31, 0x15E034u);
    ctx->pc = 0x15E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E02Cu;
    // 0x15e030: 0x2484f0d8  addiu       $a0, $a0, -0xF28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x15E02Cu, 0x15E034u)) {
        return;
    }
    ctx->pc = 0x15E034u;
label_15e034:
    // 0x15e034: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15e034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15e038: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e03c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15E03Cu;
    SET_GPR_U32(ctx, 31, 0x15E044u);
    ctx->pc = 0x15E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E03Cu;
    // 0x15e040: 0x2484f0c8  addiu       $a0, $a0, -0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15E03Cu, 0x15E044u)) {
        return;
    }
    ctx->pc = 0x15E044u;
label_15e044:
    // 0x15e044: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x15e048: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e04c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15E04Cu;
    SET_GPR_U32(ctx, 31, 0x15E054u);
    ctx->pc = 0x15E050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E04Cu;
    // 0x15e050: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15E04Cu, 0x15E054u)) {
        return;
    }
    ctx->pc = 0x15E054u;
label_15e054:
    // 0x15e054: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15e054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e058:
    // 0x15e058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e05c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E05Cu;
        // 0x15e060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E064u;
    // 0x15e064: 0x0  nop
    ctx->pc = 0x15e064u;
    // NOP
    ctx->pc = 0x15e068u;
}
