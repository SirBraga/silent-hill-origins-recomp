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

// Function: sub_0013AFC8
// Address: 0x13afc8 - 0x13b040
void sub_0013AFC8_0x13afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AFC8_0x13afc8");
#endif

    switch (ctx->pc) {
        case 0x13aff0u: goto label_13aff0;
        case 0x13b014u: goto label_13b014;
        case 0x13b02cu: goto label_13b02c;
        default: break;
    }

    ctx->pc = 0x13afc8u;

    // 0x13afc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13afcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x13afccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13afd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13afd4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13AFD4u;
    {
        const bool branch_taken_0x13afd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x13AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFD4u;
        // 0x13afd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afd4) {
            ctx->pc = 0x13B02Cu;
            goto label_13b02c;
        }
    }
    ctx->pc = 0x13AFDCu;
    // 0x13afdc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x13AFDCu;
    {
        const bool branch_taken_0x13afdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AFDCu;
        // 0x13afe0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13afdc) {
            ctx->pc = 0x13B01Cu;
            goto label_13b01c;
        }
    }
    ctx->pc = 0x13AFE4u;
    // 0x13afe4: 0x2610f390  addiu       $s0, $s0, -0xC70
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964112));
    // 0x13afe8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x13AFE8u;
    SET_GPR_U32(ctx, 31, 0x13AFF0u);
    ctx->pc = 0x13AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AFE8u;
    // 0x13afec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x13AFE8u, 0x13AFF0u)) {
        return;
    }
    ctx->pc = 0x13AFF0u;
label_13aff0:
    // 0x13aff0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13aff4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13aff8: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x13aff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x13affc: 0xac6247a8  sw          $v0, 0x47A8($v1)
    ctx->pc = 0x13affcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B47A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B47A8u, _value); } while (0);
    // 0x13b000: 0x248447b0  addiu       $a0, $a0, 0x47B0
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
    // 0x13b004: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b008: 0x24c6b040  addiu       $a2, $a2, -0x4FC0
    ctx->pc = 0x13b008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946880));
    // 0x13b00c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x13B00Cu;
    SET_GPR_U32(ctx, 31, 0x13B014u);
    ctx->pc = 0x13B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B00Cu;
    // 0x13b010: 0x24072dd0  addiu       $a3, $zero, 0x2DD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x13B00Cu, 0x13B014u)) {
        return;
    }
    ctx->pc = 0x13B014u;
label_13b014:
    // 0x13b014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13B014u;
    {
        const bool branch_taken_0x13b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B014u;
        // 0x13b018: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b014) {
            ctx->pc = 0x13B030u;
            goto label_13b030;
        }
    }
    ctx->pc = 0x13B01Cu;
label_13b01c:
    // 0x13b01c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13b020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b024: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x13B024u;
    SET_GPR_U32(ctx, 31, 0x13B02Cu);
    ctx->pc = 0x13B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B024u;
    // 0x13b028: 0x248447b0  addiu       $a0, $a0, 0x47B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x13B024u, 0x13B02Cu)) {
        return;
    }
    ctx->pc = 0x13B02Cu;
label_13b02c:
    // 0x13b02c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b030:
    // 0x13b030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b034: 0x3e00008  jr          $ra
    ctx->pc = 0x13B034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B034u;
        // 0x13b038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B03Cu;
    // 0x13b03c: 0x0  nop
    ctx->pc = 0x13b03cu;
    // NOP
    ctx->pc = 0x13b040u;
}
