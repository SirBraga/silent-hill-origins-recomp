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

// Function: sub_0019AC48
// Address: 0x19ac48 - 0x19acc0
void sub_0019AC48_0x19ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AC48_0x19ac48");
#endif

    switch (ctx->pc) {
        case 0x19ac70u: goto label_19ac70;
        case 0x19ac94u: goto label_19ac94;
        case 0x19acacu: goto label_19acac;
        default: break;
    }

    ctx->pc = 0x19ac48u;

    // 0x19ac48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ac4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19ac50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ac54: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19AC54u;
    {
        const bool branch_taken_0x19ac54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC54u;
        // 0x19ac58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac54) {
            ctx->pc = 0x19ACACu;
            goto label_19acac;
        }
    }
    ctx->pc = 0x19AC5Cu;
    // 0x19ac5c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x19AC5Cu;
    {
        const bool branch_taken_0x19ac5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC5Cu;
        // 0x19ac60: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac5c) {
            ctx->pc = 0x19AC9Cu;
            goto label_19ac9c;
        }
    }
    ctx->pc = 0x19AC64u;
    // 0x19ac64: 0x2610a050  addiu       $s0, $s0, -0x5FB0
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942800));
    // 0x19ac68: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x19AC68u;
    SET_GPR_U32(ctx, 31, 0x19AC70u);
    ctx->pc = 0x19AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC68u;
    // 0x19ac6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x19AC68u, 0x19AC70u)) {
        return;
    }
    ctx->pc = 0x19AC70u;
label_19ac70:
    // 0x19ac70: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x19ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x19ac74: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19ac78: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19ac7c: 0xac628140  sw          $v0, -0x7EC0($v1)
    ctx->pc = 0x19ac7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8140u, _value); } while (0);
    // 0x19ac80: 0x24848148  addiu       $a0, $a0, -0x7EB8
    ctx->pc = 0x19ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934856));
    // 0x19ac84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac88: 0x24c6acc0  addiu       $a2, $a2, -0x5340
    ctx->pc = 0x19ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945984));
    // 0x19ac8c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x19AC8Cu;
    SET_GPR_U32(ctx, 31, 0x19AC94u);
    ctx->pc = 0x19AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC8Cu;
    // 0x19ac90: 0x240700b4  addiu       $a3, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x19AC8Cu, 0x19AC94u)) {
        return;
    }
    ctx->pc = 0x19AC94u;
label_19ac94:
    // 0x19ac94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC94u;
    {
        const bool branch_taken_0x19ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC94u;
        // 0x19ac98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac94) {
            ctx->pc = 0x19ACB0u;
            goto label_19acb0;
        }
    }
    ctx->pc = 0x19AC9Cu;
label_19ac9c:
    // 0x19ac9c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19aca0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19aca4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x19ACA4u;
    SET_GPR_U32(ctx, 31, 0x19ACACu);
    ctx->pc = 0x19ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACA4u;
    // 0x19aca8: 0x24848148  addiu       $a0, $a0, -0x7EB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x19ACA4u, 0x19ACACu)) {
        return;
    }
    ctx->pc = 0x19ACACu;
label_19acac:
    // 0x19acac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19acacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19acb0:
    // 0x19acb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19acb4: 0x3e00008  jr          $ra
    ctx->pc = 0x19ACB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACB4u;
        // 0x19acb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ACB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ACBCu;
    // 0x19acbc: 0x0  nop
    ctx->pc = 0x19acbcu;
    // NOP
    ctx->pc = 0x19acc0u;
}
